#include <QtWidgets/QApplication>
#include <stdlib.h>
#include <time.h>
#include "View.h"
#include "TimerCPP.h"
#include <plog/Log.h>
#include "plog/Initializers/RollingFileInitializer.h"

std::string rbids[4] = {"radioButton_A", "radioButton_B", "radioButton_C", "radioButton_D"};
std::string cbids[4] = { "checkBox_1", "checkBox_2", "checkBox_3", "checkBox_4" };

bool listchangeflag = false;

int main(int argc, char *argv[])
{
    plog::init(plog::debug, "Log.log");

    QApplication a(argc, argv);

    Model* m = new Model();

    METimerCPP* mytimer = new METimerCPP();
    srand(time(NULL));
    auto changeValFun = [&]()
        {
            m->setSliderValue(rand() % 100);
            m->setButtonID(rbids[rand() % 4]);
            m->setCheckBoxID(cbids[rand() % 4]);

            listchangeflag = !listchangeflag;
            if (listchangeflag)
            {
                m->addListItem("This is the automatically changed list item");
            }
            else
            {
                m->removeListItem("This is the automatically changed list item");
            }
            
            //qDebug() << "Timertest";
        };
    mytimer->setInterval(changeValFun, 5000);
    mytimer->setTimeout([&]() 
        {
           m->addTableItem("Micky", "Maus"); 
        }, 3000);

    View v(m);
    v.show();

    return a.exec();
}

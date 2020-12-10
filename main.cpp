#include <QCoreApplication>
#include "dinermenu.h"
#include "waitress.h"
#include "pancakehousemenu.h"
#include "woterShopMenu.h"


int main(int argc, char *argv[]){

    QCoreApplication a(argc, argv);


    DinerMenu *dinerMenu = new DinerMenu();
    WoterShopMenu *woterShopMenu = new WoterShopMenu();
    PancakeHouseMenu *pancakeHouseMenu = new PancakeHouseMenu();
    Waitress *waitress = new Waitress(dinerMenu, pancakeHouseMenu, woterShopMenu);
    waitress->printMenu();

    return a.exec();

}

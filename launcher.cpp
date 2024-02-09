#include <iostream>

using namespace std;

void title() {
    std::cout << R"(
        | | | |/ __| / _ \ 
        | |_| |\__ \| (_) |
         \___/ |___/ \___/ 
    )"; 
    std::cout << "\n";
}

void selector() {
    std::cout << R"(
        ________________________________
        |                               |
        |      1: Ping Optimizer        |  
        |      2: FPS Optimizer         |
        |      3: Trash Clearer         |
        |      4:                       |
        |_______________________________|
    )"; 
    std::cout << "\n";
}

int main()
{

    int selector_selected;

    title();

    selector();

    cin >> selector_selected;

    switch(selector_selected) {
        case 1:
            system("netsh int tcp set global autotuninglevel=default");
            system("netsh int tcp set global chimney=default");
            system("netsh int tcp set global dca=default");
            system("netsh int tcp set global netdma=default");
            system("netsh int tcp set global congestionprovider=default");
            system("netsh int tcp set global ecncapability=default");
            system("netsh int tcp set heuristics default");
            system("netsh int tcp set global rss=default");
            system("netsh int tcp set global fastopen=default");
            system("netsh int tcp set global timestamps=default");
            system("netsh int tcp set global nonsackrttresiliency=default");
            system("netsh int tcp set global rsc=default");
            system("netsh int tcp set global maxsynretransmissions=2");
            system("netsh int tcp set global initialRto=3000");
            system("netsh winsock reset catalog");
            system("netsh branchcache reset");
            system("netsh branchcache flush");
            system("netsh int ip reset");
            system("netsh int tcp reset");
            system("netsh int ipv4 reset reset.log");
            system("netsh int ipv6 reset reset.log");
            system("netsh interface ipv4 set dns name=”Wi-Fi” static 1.1.1.1");
            system("netsh interface ipv4 set dns name=”Wi-Fi” static 1.0.0.1 index=2.");
            system("ipconfig /release");
            system("ipconfig /renew");
            system("ipconfig /flushdns");
            system("cls");
            system("start https://usooptimizer.github.io/");
            break;

        case 2:
            system("wmic process where name=\"svchost.exe\" CALL setpriority \"idle\"");
            system("ping 127.0.0.1 -n 5 >nul");
            system("wmic process where name=\"javaw.exe\" CALL setpriority \"high priority\"");
            system("wmic process where name=\"javaw.exe\" CALL setpriority \"high priority\"");
            system("ipconfig /flushdns");
            system("cls");
            system("start https://usooptimizer.github.io/");
            break;

        case 3:
            
    }   
 
    return 0;
}
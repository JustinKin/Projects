/*
                           _ooOoo_
                          o8888888o
                          88" . "88
                          (| -_- |)
                          O\  =  /O
                       ____/`---'\____
                     .'  \\|     |//  `.
                    /  \\|||  :  |||//  \
                   /  _||||| -:- |||||-  \
                   |   | \\\  -  /// |   |
                   | \_|  ''\---/''  |   |
                   \  .-\__  `-`  ___/-. /
                 ___`. .'  /--.--\  `. . __
              ."" '<  `.___\_<|>_/___.'  >'"".
             | | :  `- \`.;`\ _ /`;.`/ - ` : | |
             \  \ `-.   \_ __\ /__ _/   .-` /  /
        ======`-.____`-.___\_____/___.-`____.-'======
                           `=---='
        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
          一心向善	好运相伴	佛祖保佑	永无BUG
*/
#include <iostream>
#include <limits.h>
#include <fmt/color.h>
#include "gtest/gtest.h"
#include "quick_sort.h"
#include "Internet_of_Things.H"

using namespace std;

int main(int argc, char **argv)
{
    for (int i = 0; i < 3; ++i)
    {
        fmt::print(fg(fmt::color::deep_sky_blue), "\n\n[ doDebug : roll {} ]\n", i + 1);
        doDebug();
    }

    system("pause");
    return 0;
}
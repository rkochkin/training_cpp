#include "environment.h"
#include "helloworld.h"
#include "inputandoutput.h"
#include "basicdatatypes.h"
#include "conditionalstatements.h"
#include "forloop.h"

int main() {
    Starter starter;
    hackerrank::HelloWorld helloWorldApp;
    hackerrank::InputAndOutput inputAndOutputApp;
    hackerrank::BasicDataTypes basicDataTypesApp;
    hackerrank::ConditionalStatements conditionalStatementsApp;
    hackerrank::ForLoop forLoopApp;

    //helloWorldApp.run();
    //starter.run(inputAndOutputApp);
    //starter.run(conditionalStatementsApp);
    starter.run(forLoopApp);
    return 0;
}

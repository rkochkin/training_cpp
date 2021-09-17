#include "environment.h"
#include "helloworld.h"
#include "inputandoutput.h"
#include "basicdatatypes.h"
#include "conditionalstatements.h"
#include "forloop.h"
#include "variablesizedarrays.h"
#include "stringstream.h"
#include "boxit.h"
#include "lowerboundstl.h"
#include "printpretty.h"
#include "dequestl.h"

int main() {
    Starter starter;
    hackerrank::HelloWorld helloWorldApp;
    hackerrank::InputAndOutput inputAndOutputApp;
    hackerrank::BasicDataTypes basicDataTypesApp;
    hackerrank::ConditionalStatements conditionalStatementsApp;
    hackerrank::ForLoop forLoopApp;
    hackerrank::VariableSizedArrays variableSizedArraysApp;
    hackerrank::StringStream stringStream;
    hackerrank::BoxIt boxIt;
    hackerrank::LowerBoundStl lowerBoundStl;
    hackerrank::PrintPretty printPretty;
    hackerrank::DequeStl dequeStl;

    //helloWorldApp.run();
    //starter.run(inputAndOutputApp);
    //starter.run(conditionalStatementsApp);
    //starter.run(forLoopApp);
    //starter.run(variableSizedArraysApp);
    //starter.run(stringStream);
    //starter.run(boxIt);
    //starter.run(lowerBoundStl);
    //starter.run(printPretty);
    starter.run(dequeStl);
    return 0;
}

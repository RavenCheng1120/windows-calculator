/*
4105056005	鄭筠庭	第五次作業	12/5
4105056005	Yun-ting Cheng The fifth homework 12/5
*/

// wp_calculator_4105056005.cpp: 主要專案檔。

#include "stdafx.h"
#include "MyForm.h"

using namespace System;
using namespace wp_calculator_4105056005;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	MyForm^ f = gcnew MyForm;
	f->ShowDialog();
    return 0;
}

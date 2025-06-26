#include<iostream>
#include "Invoker.h"
#include "Reciever.h"

int main()
{
	Reciever rec_act;
	Invoker caller;

	caller.setCommand(&rec_act);
	caller.Action();
}
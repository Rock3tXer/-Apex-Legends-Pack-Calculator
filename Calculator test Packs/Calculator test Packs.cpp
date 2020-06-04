#include <iostream>
#include <windows.h>
#include <stdlib.h>


using namespace std;


//Decleration
int lvl, bp1, bp2, bp3, bp4, bp5, packs, tier, purch, event10, event20, event30, event40, q1, q10, final;
void level();
void battlepass1();
void battlepass2();
void battlepass3();
void battlepass4();
void battlepass5();
void quest1();
void buyed();
void event1();
void event2();
void event3();
void event4();
int restarting();
int main();


//Functions
void level() {
	packs = 0;
	//what level
	cout << "####################################################" << endl;
	cout << "                    Level Packs                     " << endl;
	cout << "Your in-game level: "; cin >> lvl;
	cout << "\n";

	//If 0 - 300
	if (lvl >= 0 && lvl <= 300) {

		if (lvl >= 2 && lvl <= 20) {
			//Add 1 pack every lvl
			for(int i = 2; i <= lvl; i++) {
				packs = packs + 1;
			}
			cout << "Packs from your level: " << packs << endl;
			cout << "####################################################" << endl;
		}

		if (lvl >= 22 && lvl <= 300) {
			//Add 1 pack every second lvl
			for (int i = 22; i <= lvl; i++) {
				if (i%2 == 0) {
					packs = packs + 1;
				}
				else {
					packs = packs + 0;
				}
			}
			packs = packs + 19;
			cout << "Packs from your level: "<< packs << endl;
			cout << "####################################################" << endl;
		}
	}

	//If 300 - 500
	if (lvl >= 300 && lvl <= 500) {
		if (lvl >= 305 && lvl <= 500) {
			//Add 1 pack every fifth lvl
			for (int i = 305; i <= lvl; i++) {
				if (i % 5 == 0) {
					packs = packs + 1;
				}
				else {
					packs = packs + 0;
				}
			}
			packs = packs + 19 + 140;
			cout << "Packs from your level: " << packs << endl;
			cout << "####################################################" << endl;
		}
	}

	//If more then 500
	if (lvl > 500) {
		packs = packs + 19 + 140 + 40;
		cout << "Packs from your level: " << packs << endl;
		cout << "####################################################" << endl;
	}
}
//BattlePass section

//BP1
void battlepass1() {
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	string buy;

	cout << "\n";
	tier = 0;
	cout << "####################################################" << endl;
	cout << "                BattlePass Season 1                 " << endl;
	cout << "\n";
	cout << "What tier you have? : "; cin >> tier;

	if (tier >= 0 && tier <= 110) {
		cout << "Did u buy this season BP? [y/n] : "; cin >> buy;
		if (buy == "y") {
			if (tier >= 93) {
				bp1 = 12;
			}
			else {
				if (tier >= 86) {
					bp1 = 11;
				}
				else {
					if (tier >= 83) {
						bp1 = 10;
					}
					else {
						if (tier >= 73) {
							bp1 = 9;
						}
						else {
							if (tier >= 53) {
								bp1 = 8;
							}
							else {
								if (tier >= 46) {
									bp1 = 7;
								}
								else {
									if (tier >= 43) {
										bp1 = 6;
									}
									else {
										if (tier >= 34) {
											bp1 = 5;
										}
										else {
											if (tier >= 26) {
												bp1 = 4;
											}
											else {
												if (tier >= 24) {
													bp1 = 3;
												}
												else {
													if (tier >= 12) {
														bp1 = 2;
													}
													else {
														if (tier >= 2) {
															bp1 = 1;
														}
														else {
															cout << "You don't have any packs from this season BP." << endl;
															cout << "####################################################" << endl;
															cout << "\n";
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			cout << "\n";
			cout << "Packs from Season 1 BP: " << bp1 << endl;
			cout << "####################################################" << endl;
			cout << "\n";
		}
		if (buy == "n") {
			if (tier >= 46) {
				bp1 = 5;
			}
			else {
				if (tier >= 34) {
					bp1 = 4;
				}
				else {
					if (tier >= 24) {
						bp1 = 3;
					}
					else {
						if (tier >= 12) {
							bp1 = 2;
						}
						else {
							if (tier >= 2) {
								bp1 = 1;
							}
							else {
								cout << "You don't have any packs from this season BP." << endl;
								cout << "####################################################" << endl;
								cout << "\n";
							}
						}
					}
				}
			}
			cout << "\n";
			cout << "Packs from Season 1 BP: " << bp1 << endl;
			cout << "####################################################" << endl;
			cout << "\n";

		}
	}
	if (tier > 110) {
		SetConsoleTextAttribute(color, 4);
		cout << "\n";
		cout << "Error max tier is 110!!" << endl;
		cout << "####################################################" << endl;
		restarting();
	}
}

//BP2
void battlepass2() {
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	string buy;

	tier = 0;
	cout << "####################################################" << endl;
	cout << "                BattlePass Season 2                 " << endl;
	cout << "\n";
	cout << "What tier you have? : "; cin >> tier;

	if (tier >= 0 && tier <= 110) {
		cout << "Did u buy this season BP? [y/n] : "; cin >> buy;
		if (buy == "y") {
			if (tier >= 92) {
				bp2 = 11;
			}
			else {
				if (tier >= 82) {
					bp2 = 10;
				}
				else {
					if (tier >= 50) {
						bp2 = 9;
					}
					else {
						if (tier >= 32) {
							bp2 = 8;
						}
						else {
							if (tier >= 22) {
								bp2 = 7;
							}
							else {
								if (tier >= 20) {
									bp2 = 6;
								}
								else {
									if (tier >= 18) {
										bp2 = 5;
									}
									else {
										if (tier >= 16) {
											bp2 = 4;
										}
										else {
											if (tier >= 14) {
												bp2 = 3;
											}
											else {
												if (tier >= 12) {
													bp2 = 2;
												}
												else {
													if (tier >= 5) {
														bp2 = 1;
													}
														else {
															cout << "You don't have any packs from this season BP." << endl;
															cout << "####################################################" << endl;
															cout << "\n";
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			cout << "\n";
			cout << "Packs from Season 2 BP: " << bp2 << endl;
			cout << "####################################################" << endl;
			cout << "\n";
		}
		if (buy == "n") {
			if (tier >= 20) {
				bp2 = 5;
			}
			else {
				if (tier >= 18) {
					bp2 = 4;
				}
				else {
					if (tier >= 16) {
						bp2 = 3;
					}
					else {
						if (tier >= 14) {
							bp2 = 2;
						}
						else {
							if (tier >= 12) {
								bp2 = 1;
							}
							else {
								cout << "You don't have any packs from this season BP." << endl;
								cout << "####################################################" << endl;
								cout << "\n";
							}
						}
					}
				}
			}
			cout << "\n";
			cout << "Packs from Season 2 BP: " << bp2 << endl;
			cout << "####################################################" << endl;
			cout << "\n";
	}
	if (tier > 110) {
		SetConsoleTextAttribute(color, 4);
		cout << "\n";
		cout << "Error max tier is 110!!" << endl;
		cout << "####################################################" << endl;
		restarting();
	}
}

//BP3
void battlepass3() {
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	string buy;

	tier = 0;
	cout << "####################################################" << endl;
	cout << "                BattlePass Season 3                 " << endl;
	cout << "\n";
	cout << "What tier you have? : "; cin >> tier;

	if (tier >= 0 && tier <= 110) {
		cout << "Did u buy this season BP? [y/n] : "; cin >> buy;
		if (buy == "y") {
			if (tier >= 77) {
				bp3 = 12;
			}
			else {
				if (tier >= 48) {
					bp3 = 11;
				}
				else {
					if (tier >= 40) {
						bp3 = 10;
					}
					else {
						if (tier >= 33) {
							bp3 = 9;
						}
						else {
							if (tier >= 30) {
								bp3 = 8;
							}
							else {
								if (tier >= 25) {
									bp3 = 7;
								}
								else {
									if (tier >= 21) {
										bp3 = 6;
									}
									else {
										if (tier >= 17) {
											bp3 = 5;
										}
										else {
											if (tier >= 16) {
												bp3 = 4;
											}
											else {
												if (tier >= 8) {
													bp3 = 3;
												}
												else {
													if (tier >= 6) {
														bp3 = 2;
													}
													else {
														if (tier >= 4) {
															bp3 = 1;
														}
														else {
															cout << "You don't have any packs from this season BP." << endl;
															cout << "####################################################" << endl;
															cout << "\n";
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout << "\n";
		cout << "Packs from Season 3 BP: " << bp3 << endl;
		cout << "####################################################" << endl;
		cout << "\n";
	}
	if (buy == "n") {
		if (tier >= 33) {
			bp3 = 5;
		}
		else {
			if (tier >= 30) {
				bp3 = 4;
			}
			else {
				if (tier >= 25) {
					bp3 = 3;
				}
				else {
					if (tier >= 21) {
						bp3 = 2;
					}
					else {
						if (tier >= 17) {
							bp3 = 1;
						}
						else {
							cout << "You don't have any packs from this season BP." << endl;
							cout << "####################################################" << endl;
							cout << "\n";
						}
					}
				}
			}
		}
		cout << "\n";
		cout << "Packs from Season 3 BP: " << bp3 << endl;
		cout << "####################################################" << endl;
		cout << "\n";
	}
	if (tier > 110) {
		SetConsoleTextAttribute(color, 4);
		cout << "\n";
		cout << "Error max tier is 110!!" << endl;
		cout << "####################################################" << endl;
		restarting();
	}
}

//BP4
void battlepass4() {
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	string buy;


	tier = 0;
	cout << "####################################################" << endl;
	cout << "                BattlePass Season 4                 " << endl;
	cout << "\n";
	cout << "What tier you have? : "; cin >> tier;

	if (tier >= 0 && tier <= 110) {
		cout << "Did u buy this season BP? [y/n] : "; cin >> buy;
		if (buy == "y") {
			if (tier >= 89) {
				bp4 = 12;
			}
			else {
				if (tier >= 69) {
					bp4 = 11;
				}
				else {
					if (tier >= 60) {
						bp4 = 10;
					}
					else {
						if (tier >= 31) {
							bp4 = 9;
						}
						else {
							if (tier >= 27) {
								bp4 = 8;
							}
							else {
								if (tier >= 23) {
									bp4 = 7;
								}
								else {
									if (tier >= 22) {
										bp4 = 6;
									}
									else {
										if (tier >= 19) {
											bp4 = 5;
										}
										else {
											if (tier >= 15) {
												bp4 = 4;
											}
											else {
												if (tier >= 9) {
													bp4 = 3;
												}
												else {
													if (tier >= 5) {
														bp4 = 2;
													}
													else {
														if (tier >= 3) {
															bp4 = 1;
														}
														else {
															cout << "You don't have any packs from this season BP." << endl;
															cout << "####################################################" << endl;
															cout << "\n";
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout << "\n";
		cout << "Packs from Season 4 BP: " << bp4 << endl;
		cout << "####################################################" << endl;
		cout << "\n";
	}
	if (buy == "n") {
		if (tier >= 31) {
			bp4 = 5;
		}
		else {
			if (tier >= 27) {
				bp4 = 4;
			}
			else {
				if (tier >= 23) {
					bp4 = 3;
				}
				else {
					if (tier >= 19) {
						bp4 = 2;
					}
					else {
						if (tier >= 15) {
							bp4 = 1;
						}
						else {
							cout << "You don't have any packs from this season BP." << endl;
							cout << "####################################################" << endl;
							cout << "\n";
						}
					}
				}
			}
		}
		cout << "\n";
		cout << "Packs from Season 4 BP: " << bp4 << endl;
		cout << "####################################################" << endl;
		cout << "\n";
	}
	if (tier > 110) {
		SetConsoleTextAttribute(color, 4);
		cout << "\n";
		cout << "Error max tier is 110!!" << endl;
		cout << "####################################################" << endl;
		restarting();
	}
}




//BP5
void battlepass5() {
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	string buy;


	tier = 0;
	cout << "####################################################" << endl;
	cout << "                BattlePass Season 5                 " << endl;
	cout << "\n";
	cout << "What tier you have? : "; cin >> tier;

	if (tier >= 0 && tier <= 110) {
		cout << "Did u buy this season BP? [y/n] : "; cin >> buy;
		if (buy == "y") {
			if (tier >= 97) {
				bp5 = 14;
			}
			else {
				if (tier >= 88) {
					bp5 = 13;
				}
				else {
					if (tier >= 81) {
						bp5 = 12;
					}
					else {
						if (tier >= 56) {
							bp5 = 11;
						}
						else {
							if (tier >= 45) {
								bp5 = 10;
							}
							else {
								if (tier >= 32) {
									bp5 = 9;
								}
								else {
									if (tier >= 26) {
										bp5 = 8;
									}
									else {
										if (tier >= 25) {
											bp5 = 7;
										}
										else {
											if (tier >= 17) {
												bp5 = 6;
											}
											else {
												if (tier >= 11) {
													bp5 = 5;
												}
												else {
													if (tier >= 7) {
														bp5 = 4;
													}
													else {
														if (tier >= 5) {
															bp5 = 3;
														}
														else {
															if (tier >= 3) {
																bp5 = 2;
															 }
															else {
																if (tier >= 2) {
																	bp5 = 1;
																}
																else {
		                                                         	cout << "You don't have any packs from this season BP." << endl;
			                                                        cout << "####################################################" << endl;
			                                                        cout << "\n";
																}
															}
														  
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout << "\n";
		cout << "Packs from Season 5 BP: " << bp5 << endl;
		cout << "####################################################" << endl;
		cout << "\n";
	}
	if (buy == "n") {
		if (tier >= 45) {
			bp5 = 7;
		}
		else {
			if (tier >= 32) {
				bp5 = 6;
			}
			else {
				if (tier >= 25) {
					bp5 = 5;
				}
				else {
					if (tier >= 17) {
						bp5 = 4;
					}
					else {
						if (tier >= 11) {
							bp5 = 3;
						}
						else {
							if (tier >= 7) {
								bp5 = 2;
							}
							else {
								if (tier >= 3) {
									bp5 = 1;
								}
								else {
									cout << "You don't have any packs from this season BP." << endl;
									cout << "####################################################" << endl;
									cout << "\n";
								}
							}
						}
					}
				}
			}
		}
		cout << "\n";
		cout << "Packs from Season 5 BP: " << bp5 << endl;
		cout << "####################################################" << endl;
		cout << "\n";
	}
	if (tier > 110) {
		SetConsoleTextAttribute(color, 4);
		cout << "\n";
		cout << "Error max tier is 110!!" << endl;
		cout << "####################################################" << endl;
		restarting();
	}
}

void quest1() {
	cout << "\n";
	cout << "####################################################" << endl;
	cout << "                 Broken ghost quest                 " << endl;
	cout << "                      Season 5                      " << endl;
	cout << "####################################################" << endl;
	cout << "How many quests did you unlock? : "; cin >> q1;
	if (q1 == 10) {
		q10 = 9;
	}
	else {
		if (q1 == 9) {
			q10 = 8;
		}
		else {
			if (q1 == 8) {
				q10 = 7;
			}
			else {
				if (q1 == 7) {
					q10 = 6;
				}
				else {
					if (q1 == 6) {
						q10 = 5;
					}
					else {
						if (q1 == 5) {
							q10 = 4;
						}
						else {
							if (q1 == 4) {
								q10 = 3;
							}
							else {
								if (q1 == 3) {
									q10 = 2;
								}
								else {
									if (q1 == 2) {
										q10 = 1;
									}
									else {
										cout << "You don't have any packs from this quest." << endl;
										cout << "####################################################" << endl;
										cout << "\n";
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (q1 > 10) {
		cout << "That's imposible! There was not that many quests." << endl;
		restarting();
	}
	else {
		cout << "You got " << q10 << " packs from this quest" << endl;
		cout << "####################################################" << endl;
		cout << "\n";
	}
}




void event1() {
	cout << "\n";
	cout << "####################################################" << endl;
	cout << "                  Iron Crown Event                  " << endl;
	cout << "####################################################" << endl;
	cout << "How many packs did you buy? : "; cin >> event10;
	if (event10 > 24) {
		cout << "That's imposible u could get max 24packs.";
		restarting();
	}
	cout << "####################################################" << endl;
	cout << "\n";
}

void event2() {
	cout << "\n";
	cout << "####################################################" << endl;
	cout << "         Fight or Fright Event (Halloween)          " << endl;
	cout << "####################################################" << endl;
	cout << "How many packs did you buy? : "; cin >> event20;
	if (event10 > 24) {
		cout << "That's imposible u could get max 24packs.";
		restarting();
	}
	cout << "####################################################" << endl;
	cout << "\n";
}

void event3() {
	cout << "\n";
	cout << "####################################################" << endl;
	cout << "            Hollo-Bash Event (Christmas)            " << endl;
	cout << "####################################################" << endl;
	cout << "How many packs did you buy? : "; cin >> event30;
	if (event10 > 24) {
		cout << "That's imposible u could get max 24packs.";
		restarting();
	}
	cout << "####################################################" << endl;
	cout << "\n";
}

void event4() {
	cout << "\n";
	cout << "####################################################" << endl;
	cout << "               System Overdrive Event               " << endl;
	cout << "####################################################" << endl;
	cout << "How many packs did you buy? : "; cin >> event40;
	if (event10 > 24) {
		cout << "That's imposible u could get max 24packs.";
		restarting();
	}
	cout << "####################################################" << endl;
	cout << "\n";
}

//All packs that u bought
void buyed() {
	cout << "\n";
	cout << "####################################################" << endl;
	cout << "                     Bought packs                   " << endl;
	cout << "####################################################" << endl;
	cout << "How many packs did you buy? : "; cin >> purch;
	cout << "####################################################" << endl;
	cout << "\n";
}

int restarting() {
	//Restart function
	cout << "\n";
	cout << "\n";
	string restart;
	cout << "Do you whish to restart? [y/n]" << endl;
	cin >> restart;
	if (restart == "y") {
		system("CLS");
		main();
	}
	else {
		exit(0);
	}
}


//Main Function
int main() {
	int heirloom;
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color, 10);
	cout << "####################################################" << endl;
	cout << "#               Apex Pack Calculator               #" << endl;
	cout << "####################################################" << endl;
	cout << "#  See how many packs u have until 100% heirloom   #" << endl;
	cout << "####################################################" << endl;
	
	cout << "\n";
	SetConsoleTextAttribute(color, 1);
    level();
	SetConsoleTextAttribute(color, 12);
	battlepass1();
	SetConsoleTextAttribute(color, 11);
	battlepass2();
	SetConsoleTextAttribute(color, 15);
	battlepass3();
	SetConsoleTextAttribute(color, 13);
	battlepass4();
	SetConsoleTextAttribute(color, 8);
	battlepass5();
	SetConsoleTextAttribute(color, 14);
	quest1();
	event1();
	event2();
	event3();
	event4();
	SetConsoleTextAttribute(color, 3);
	buyed();

	//Heirloom percentage
	final = (packs + bp1 + bp2 + bp3 + bp4 + purch + event10 + event20 + event30 + event40 + bp5 + q10);
	if (final >= 501) {
		SetConsoleTextAttribute(color, 5);
		final = final - 500;
		cout << "####################################################" << endl;
		cout << "#           You alredy had one heirloom            #" << endl;
		cout << "#      This means you opened more then 500 packs   #" << endl;
		cout << "####################################################" << endl;
		heirloom = (final / 5);
		SetConsoleTextAttribute(color, 10);
		cout << "####################################################" << endl;
		cout << "#                    Apex Packs                    #" << endl;
		cout << "####################################################" << endl;
		cout << "You already had " << final << " packs." << "That's " << heirloom << " % from 500" << endl;
		cout << "####################################################" << endl;
	}
	else {
		heirloom = (final / 5);
		SetConsoleTextAttribute(color, 10);
		cout << "####################################################" << endl;
		cout << "#                    Apex Packs                    #" << endl;
		cout << "####################################################" << endl;
		cout << "You already had " << final << " packs." << "That's " << heirloom << " % from 500" << endl;
		cout << "####################################################" << endl;
	}
	restarting();
}
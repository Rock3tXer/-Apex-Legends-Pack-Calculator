//Apex Pack Calculator v1.5
//By Rock3tXer

#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;

//Decleration
//Player Level, battlepass tier level, bought packs, All packs, final heirloom
int lvl, tier, bought, final_pack, final_count, heirloom;
//Battle pass packs
int bp1_pack, bp2_pack, bp3_pack, bp4_pack, bp5_pack, bp6_pack, bp7_pack, bp8_pack, bp9_pack;
//Events
int event01_pack, event02_pack, event03_pack, event04_pack, event05_pack, event06_pack, event07_pack, event08_pack, event09_pack;
//Quests
int quest_pack01, treasure01, quest_pack02, treasure02, quest_pack03, treasure03;

//Functions int
int main();
int restart();
//Functions void
void level();
//Battlepass
void battlepass1();
void battlepass2();
void battlepass3();
void battlepass4();
void battlepass5();
void battlepass6();
void battlepass7();
//Events
void event01();
void event02();
void event03();
void event04();
void event05();
void event06();
void event07();
void event08();
void event09();
//Quests
void quest01();
void quest02();
void quest03();
//Other
void bonus();


//Code

//Restart function
int restart() {
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color, 14);
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

//Level function
void level() {
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

	final_pack = 0;
	//Ask for level
	cout << "#######################################################" << endl;
	cout << "                    Apex Calculator                    " << endl;
	cout << "\n";
	cout << "Your in-game level: "; cin >> lvl;

	//If 0 - 300
	if (lvl >= 0 && lvl <= 300) {

		if (lvl >= 2 && lvl <= 20) {
			//Add 1 pack every lvl
			for (int i = 2; i <= lvl; i++) {
				final_pack = final_pack + 1;
			}
			SetConsoleTextAttribute(color, 2);
			cout << "[+" << final_pack << " pack/s from your level progress]" << endl;
		}

		if (lvl >= 22 && lvl <= 300) {
			//Add 1 pack every second lvl
			for (int i = 22; i <= lvl; i++) {
				if (i % 2 == 0) {
					final_pack = final_pack + 1;
				}
				else {
					final_pack = final_pack + 0;
				}
			}
			final_pack = final_pack + 19;
			SetConsoleTextAttribute(color, 2);
			cout << "[+" << final_pack << " pack/s from your level progress]" << endl;
		}
	}

	//If 300 - 500
	if (lvl >= 300 && lvl <= 500) {
		if (lvl >= 305 && lvl <= 500) {
			//Add 1 pack every fifth lvl
			for (int i = 305; i <= lvl; i++) {
				if (i % 5 == 0) {
					final_pack = final_pack + 1;
				}
				else {
					final_pack = final_pack + 0;
				}
			}
			final_pack = final_pack + 19 + 140;
			SetConsoleTextAttribute(color, 2);
			cout << "[+" << final_pack << " pack/s from your level progress]" << endl;
		}
	}

	//If more then 500
	if (lvl > 500) {
		final_pack = final_pack + 19 + 140 + 40;
		SetConsoleTextAttribute(color, 2);
		cout << "[+" << final_pack << " pack/s from your level progress]" << endl;

	}
	SetConsoleTextAttribute(color, 7);
}

//Battlepass 1
void battlepass1() {
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	string buy;

	tier = 0;
	cout << "\n";
	cout << "What was your Season 1 BattlePass tier? [max. 110]: "; cin >> tier;

	if (tier >= 0 && tier <= 110) {
		cout << "Did u buy Season 1 BattlePass? [y/n] : "; cin >> buy;
		if (buy == "y") {
			if (tier >= 93) {
				bp1_pack = 12;
			}
			else {
				if (tier >= 86) {
					bp1_pack = 11;
				}
				else {
					if (tier >= 83) {
						bp1_pack = 10;
					}
					else {
						if (tier >= 73) {
							bp1_pack = 9;
						}
						else {
							if (tier >= 53) {
								bp1_pack = 8;
							}
							else {
								if (tier >= 46) {
									bp1_pack = 7;
								}
								else {
									if (tier >= 43) {
										bp1_pack = 6;
									}
									else {
										if (tier >= 34) {
											bp1_pack = 5;
										}
										else {
											if (tier >= 26) {
												bp1_pack = 4;
											}
											else {
												if (tier >= 24) {
													bp1_pack = 3;
												}
												else {
													if (tier >= 12) {
														bp1_pack = 2;
													}
													else {
														if (tier >= 2) {
															bp1_pack = 1;
														}
														else {
															bp1_pack = 0;
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
			SetConsoleTextAttribute(color, 2);
			cout << "[+" << bp1_pack << " pack/s from Season 1 BattlePass]" << endl;
			cout << "\n";
		}
		if (buy == "n") {
			if (tier >= 46) {
				bp1_pack = 5;
			}
			else {
				if (tier >= 34) {
					bp1_pack = 4;
				}
				else {
					if (tier >= 24) {
						bp1_pack = 3;
					}
					else {
						if (tier >= 12) {
							bp1_pack = 2;
						}
						else {
							if (tier >= 2) {
								bp1_pack = 1;
							}
							else {
								bp1_pack = 0;
							}
						}
					}
				}
			}
			SetConsoleTextAttribute(color, 2);
			cout << "[+" << bp1_pack << " pack/s from Season 1 BattlePass]" << endl;
			cout << "\n";

		}
	}
	if (tier > 110) {
		SetConsoleTextAttribute(color, 4);
		cout << "\n";
		cout << "[Error 01 -> Final tier is 110]" << endl;
		cout << "#######################################################" << endl;
		restart();
	}
	SetConsoleTextAttribute(color, 7);
}

//BattlePass 2
void battlepass2() {
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	string buy;

	tier = 0;

	cout << "What was your Season 2 BattlePass tier? [max. 110]: "; cin >> tier;

	if (tier >= 0 && tier <= 110) {
		cout << "Did u buy Season 2 BattlePass? [y/n] : "; cin >> buy;
		if (buy == "y") {
			if (tier >= 92) {
				bp2_pack = 11;
			}
			else {
				if (tier >= 82) {
					bp2_pack = 10;
				}
				else {
					if (tier >= 50) {
						bp2_pack = 9;
					}
					else {
						if (tier >= 32) {
							bp2_pack = 8;
						}
						else {
							if (tier >= 22) {
								bp2_pack = 7;
							}
							else {
								if (tier >= 20) {
									bp2_pack = 6;
								}
								else {
									if (tier >= 18) {
										bp2_pack = 5;
									}
									else {
										if (tier >= 16) {
											bp2_pack = 4;
										}
										else {
											if (tier >= 14) {
												bp2_pack = 3;
											}
											else {
												if (tier >= 12) {
													bp2_pack = 2;
												}
												else {
													if (tier >= 5) {
														bp2_pack = 1;
													}
													else {
														bp2_pack = 0;
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
		SetConsoleTextAttribute(color, 2);
		cout << "[+" << bp2_pack << " pack/s from Season 2 BattlePass]" << endl;
		cout << "\n";
	}
	if (buy == "n") {
		if (tier >= 20) {
			bp2_pack = 5;
		}
		else {
			if (tier >= 18) {
				bp2_pack = 4;
			}
			else {
				if (tier >= 16) {
					bp2_pack = 3;
				}
				else {
					if (tier >= 14) {
						bp2_pack = 2;
					}
					else {
						if (tier >= 12) {
							bp2_pack = 1;
						}
						else {
							bp2_pack = 0;
						}
					}
				}
			}
		}
		SetConsoleTextAttribute(color, 2);
		cout << "[+" << bp2_pack << " pack/s from Season 2 BattlePass]" << endl;
		cout << "\n";
	}
	if (tier > 110) {
		SetConsoleTextAttribute(color, 4);
		cout << "\n";
		cout << "[Error 01 -> Final tier is 110]" << endl;
		cout << "#######################################################" << endl;
		restart();
	}
}

//BattlePass 3
void battlepass3() {
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	string buy;

	tier = 0;

	cout << "What was your Season 3 BattlePass tier? [max. 110]: "; cin >> tier;

	if (tier >= 0 && tier <= 110) {
		cout << "Did u buy Season 3 BattlePass? [y/n] : "; cin >> buy;
		if (buy == "y") {
			if (tier >= 77) {
				bp3_pack = 12;
			}
			else {
				if (tier >= 48) {
					bp3_pack = 11;
				}
				else {
					if (tier >= 40) {
						bp3_pack = 10;
					}
					else {
						if (tier >= 33) {
							bp3_pack = 9;
						}
						else {
							if (tier >= 30) {
								bp3_pack = 8;
							}
							else {
								if (tier >= 25) {
									bp3_pack = 7;
								}
								else {
									if (tier >= 21) {
										bp3_pack = 6;
									}
									else {
										if (tier >= 17) {
											bp3_pack = 5;
										}
										else {
											if (tier >= 16) {
												bp3_pack = 4;
											}
											else {
												if (tier >= 8) {
													bp3_pack = 3;
												}
												else {
													if (tier >= 6) {
														bp3_pack = 2;
													}
													else {
														if (tier >= 4) {
															bp3_pack = 1;
														}
														else {
															bp3_pack = 0;
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
		SetConsoleTextAttribute(color, 2);
		cout << "[+" << bp3_pack << " pack/s from Season 3 BattlePass]" << endl;
		cout << "\n";
	}
	if (buy == "n") {
		if (tier >= 33) {
			bp3_pack = 5;
		}
		else {
			if (tier >= 30) {
				bp3_pack = 4;
			}
			else {
				if (tier >= 25) {
					bp3_pack = 3;
				}
				else {
					if (tier >= 21) {
						bp3_pack = 2;
					}
					else {
						if (tier >= 17) {
							bp3_pack = 1;
						}
						else {
							bp3_pack = 0;
						}
					}
				}
			}
		}
		SetConsoleTextAttribute(color, 2);
		cout << "[+" << bp3_pack << " pack/s from Season 3 BattlePass]" << endl;
		cout << "\n";
	}
	if (tier > 110) {
		SetConsoleTextAttribute(color, 4);
		cout << "\n";
		cout << "[Error 01 -> Final tier is 110]" << endl;
		cout << "#######################################################" << endl;
		restart();
	}
}

//BattlePass 4
void battlepass4() {
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	string buy;


	tier = 0;

	cout << "What was your Season 4 BattlePass tier? [max. 110]: "; cin >> tier;

	if (tier >= 0 && tier <= 110) {
		cout << "Did u buy Season 4 BattlePass? [y/n] : "; cin >> buy;
		if (buy == "y") {
			if (tier >= 89) {
				bp4_pack = 12;
			}
			else {
				if (tier >= 69) {
					bp4_pack = 11;
				}
				else {
					if (tier >= 60) {
						bp4_pack = 10;
					}
					else {
						if (tier >= 31) {
							bp4_pack = 9;
						}
						else {
							if (tier >= 27) {
								bp4_pack = 8;
							}
							else {
								if (tier >= 23) {
									bp4_pack = 7;
								}
								else {
									if (tier >= 22) {
										bp4_pack = 6;
									}
									else {
										if (tier >= 19) {
											bp4_pack = 5;
										}
										else {
											if (tier >= 15) {
												bp4_pack = 4;
											}
											else {
												if (tier >= 9) {
													bp4_pack = 3;
												}
												else {
													if (tier >= 5) {
														bp4_pack = 2;
													}
													else {
														if (tier >= 3) {
															bp4_pack = 1;
														}
														else {
															bp4_pack = 0;
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
		SetConsoleTextAttribute(color, 2);
		cout << "[+" << bp4_pack << " pack/s from Season 4 BattlePass]" << endl;
		cout << "\n";
	}
	if (buy == "n") {
		if (tier >= 31) {
			bp4_pack = 5;
		}
		else {
			if (tier >= 27) {
				bp4_pack = 4;
			}
			else {
				if (tier >= 23) {
					bp4_pack = 3;
				}
				else {
					if (tier >= 19) {
						bp4_pack = 2;
					}
					else {
						if (tier >= 15) {
							bp4_pack = 1;
						}
						else {
							bp4_pack = 0;
						}
					}
				}
			}
		}
		SetConsoleTextAttribute(color, 2);
		cout << "[+" << bp4_pack << " pack/s from Season 4 BattlePass]" << endl;
		cout << "\n";
	}
	if (tier > 110) {
		SetConsoleTextAttribute(color, 4);
		cout << "\n";
		cout << "[Error 01 -> Final tier is 110]" << endl;
		cout << "#######################################################" << endl;
		restart();
	}
}

//BattlePass 5
void battlepass5() {
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	string buy;


	tier = 0;
	cout << "What was your Season 5 BattlePass tier? [max. 110]: "; cin >> tier;

	if (tier >= 0 && tier <= 110) {
		cout << "Did u buy Season 5 BattlePass? [y/n] : "; cin >> buy;
		if (buy == "y") {
			if (tier >= 97) {
				bp5_pack = 14;
			}
			else {
				if (tier >= 88) {
					bp5_pack = 13;
				}
				else {
					if (tier >= 81) {
						bp5_pack = 12;
					}
					else {
						if (tier >= 56) {
							bp5_pack = 11;
						}
						else {
							if (tier >= 45) {
								bp5_pack = 10;
							}
							else {
								if (tier >= 32) {
									bp5_pack = 9;
								}
								else {
									if (tier >= 26) {
										bp5_pack = 8;
									}
									else {
										if (tier >= 25) {
											bp5_pack = 7;
										}
										else {
											if (tier >= 17) {
												bp5_pack = 6;
											}
											else {
												if (tier >= 11) {
													bp5_pack = 5;
												}
												else {
													if (tier >= 7) {
														bp5_pack = 4;
													}
													else {
														if (tier >= 5) {
															bp5_pack = 3;
														}
														else {
															if (tier >= 3) {
																bp5_pack = 2;
															}
															else {
																if (tier >= 2) {
																	bp5_pack = 1;
																}
																else {
																	bp5_pack = 0;
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
		SetConsoleTextAttribute(color, 2);
		cout << "[+" << bp5_pack << " pack/s from Season 5 BattlePass]" << endl;
		cout << "\n";
	}
	if (buy == "n") {
		if (tier >= 45) {
			bp5_pack = 7;
		}
		else {
			if (tier >= 32) {
				bp5_pack = 6;
			}
			else {
				if (tier >= 25) {
					bp5_pack = 5;
				}
				else {
					if (tier >= 17) {
						bp5_pack = 4;
					}
					else {
						if (tier >= 11) {
							bp5_pack = 3;
						}
						else {
							if (tier >= 7) {
								bp5_pack = 2;
							}
							else {
								if (tier >= 3) {
									bp5_pack = 1;
								}
								else {
									bp5_pack = 0;
								}
							}
						}
					}
				}
			}
		}
		SetConsoleTextAttribute(color, 2);
		cout << "[+" << bp5_pack << " pack/s from Season 5 BattlePass]" << endl;
		cout << "\n";
	}
	if (tier > 110) {
		SetConsoleTextAttribute(color, 4);
		cout << "\n";
		cout << "[Error 01 -> Final tier is 110]" << endl;
		cout << "#######################################################" << endl;
		restart();
	}
}

//Quests
//Quest 1
void quest01() {
	quest_pack01 = 0;

	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "How many treasure packs have you claimed in Broken Ghost Quest [max. 45]: "; cin >> treasure01;
	if (treasure01 <= 45) {
		if (treasure01 >= 45) {
			quest_pack01 = 9;
		}
		else {
			if (treasure01 >= 40) {
				quest_pack01 = 8;
			}
			else {
				if (treasure01 >= 35) {
					quest_pack01 = 7;
				}
				else {
					if (treasure01 >= 30) {
						quest_pack01 = 6;
					}
					else {
						if (treasure01 >= 25) {
							quest_pack01 = 5;
						}
						else {
							if (treasure01 >= 20) {
								quest_pack01 = 4;
							}
							else {
								if (treasure01 >= 15) {
									quest_pack01 = 3;
								}
								else {
									if (treasure01 >= 10) {
										quest_pack01 = 2;
									}
									else {
										if (treasure01 >= 5) {
											quest_pack01 = 1;
										}
										else {
											quest_pack01 = 0;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		SetConsoleTextAttribute(color, 2);
		cout << "[+" << quest_pack01 << " pack/s from Broken Ghost Quest]" << endl;
		cout << "\n";
	}
	else {
		SetConsoleTextAttribute(color, 4);
		cout << "\n";
		cout << "[Error 02 -> The maximum amout of treasure packs is 45]" << endl;
		cout << "#######################################################" << endl;
		restart();
	}
}

//Events
//Event01
void event01() {
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "How many packs did you buy in the Iron Crown Event [max. 24]: "; cin >> event01_pack;
	if (event01_pack <= 24) {
		SetConsoleTextAttribute(color, 2);
		cout << "[+" << event01_pack << " pack/s from Iron Crown Event]" << endl;
		SetConsoleTextAttribute(color, 11);
		cout << "\n";
	}
	else {
		SetConsoleTextAttribute(color, 4);
		cout << "\n";
		cout << "[Error 03 -> The maximum amout of packs is 24]" << endl;
		cout << "#######################################################" << endl;
		restart();
	}

}

//Event02
void event02() {
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "How many packs did you buy in the Fight or Fright Event [max. 24]: "; cin >> event02_pack;
	if (event02_pack <= 24) {
		SetConsoleTextAttribute(color, 2);
		cout << "[+" << event02_pack << " pack/s from Fight or Fright Event]" << endl;
		SetConsoleTextAttribute(color, 11);
		cout << "\n";
	}
	else {
		SetConsoleTextAttribute(color, 4);
		cout << "\n";
		cout << "[Error 03 -> The maximum amout of packs is 24]" << endl;
		cout << "#######################################################" << endl;
		restart();
	}

}

//Event03
void event03() {
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "How many packs did you buy in the Holo-Day Bash Event [max. 24]: "; cin >> event03_pack;
	if (event03_pack <= 24) {
		SetConsoleTextAttribute(color, 2);
		cout << "[+" << event03_pack << " pack/s from Holo-Day Bash Event]" << endl;
		SetConsoleTextAttribute(color, 11);
		cout << "\n";
	}
	else {
		SetConsoleTextAttribute(color, 4);
		cout << "\n";
		cout << "[Error 03 -> The maximum amout of packs is 24]" << endl;
		cout << "#######################################################" << endl;
		restart();
	}

}

//Event04
void event04() {
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "How many packs did you buy in the System Override Event [max. 24]: "; cin >> event04_pack;
	if (event04_pack <= 24) {
		SetConsoleTextAttribute(color, 2);
		cout << "[+" << event04_pack << " pack/s from System Override Event]" << endl;
		SetConsoleTextAttribute(color, 11);
		cout << "\n";
	}
	else {
		SetConsoleTextAttribute(color, 4);
		cout << "\n";
		cout << "[Error 03 -> The maximum amout of packs is 24]" << endl;
		cout << "#######################################################" << endl;
		restart();
	}

}

//Event05
void event05() {
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "How many packs did you buy in the Lost Treasures Event [max. 24]: "; cin >> event05_pack;
	if (event05_pack <= 24) {
		SetConsoleTextAttribute(color, 2);
		cout << "[+" << event05_pack << " pack/s from Lost Treasures Event]" << endl;
		SetConsoleTextAttribute(color, 11);
		cout << "\n";
	}
	else {
		SetConsoleTextAttribute(color, 4);
		cout << "\n";
		cout << "[Error 03 -> The maximum amout of packs is 24]" << endl;
		cout << "#######################################################" << endl;
		restart();
	}

}


//Bonus ones
void bonus() {
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "How many apex packs did you buy: "; cin >> bought;
	SetConsoleTextAttribute(color, 2);
	cout << "[+" << bought << " pack/s from Transactions]" << endl;
	cout << "\n";
}








//Main function
int main() {
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color, 13);
	level();
	SetConsoleTextAttribute(color, 12);
	battlepass1();
	SetConsoleTextAttribute(color, 9);
	battlepass2();
	SetConsoleTextAttribute(color, 15);
	battlepass3();
	SetConsoleTextAttribute(color, 4);
	battlepass4();
	SetConsoleTextAttribute(color, 6);
	battlepass5();
	SetConsoleTextAttribute(color, 5);
	quest01();
	SetConsoleTextAttribute(color, 11);
	event01();
	event02();
	event03();
	event04();
	event05();
	SetConsoleTextAttribute(color, 1);
	bonus();

	//Heirloom final
	final_count = (final_pack + bp1_pack + bp2_pack + bp3_pack + bp4_pack + bp5_pack + quest_pack01 + event01_pack + event02_pack + event03_pack + event04_pack + event05_pack + bought);
	if (final_count >= 3501) {
		SetConsoleTextAttribute(color, 13);
		final_count = final_count - 3500;
		cout << "#######################################################" << endl;
		cout << "            You alredy have seven heirlooms            " << endl;
		cout << "       This means you opened more then 3500 packs      " << endl;
		cout << "#######################################################" << endl;
		heirloom = (final_count / 5);
		cout << "                     Apex Calculator                   " << endl;
		cout << "#######################################################" << endl;
		cout << "You already opened " << final_count << " packs." << "That's " << heirloom << " % from 500" << endl;
		cout << "#######################################################" << endl;
	}
	else {
		if (final_count >= 3001) {
			SetConsoleTextAttribute(color, 13);
			final_count = final_count - 3000;
			cout << "#######################################################" << endl;
			cout << "             You alredy have six heirlooms             " << endl;
			cout << "       This means you opened more then 3000 packs      " << endl;
			cout << "#######################################################" << endl;
			heirloom = (final_count / 5);
			cout << "                     Apex Calculator                   " << endl;
			cout << "#######################################################" << endl;
			cout << "You already opened " << final_count << " packs." << "That's " << heirloom << " % from 500" << endl;
			cout << "#######################################################" << endl;
		}
		else {
			if (final_count >= 2501) {
				SetConsoleTextAttribute(color, 13);
				final_count = final_count - 2500;
				cout << "#######################################################" << endl;
				cout << "             You alredy have five heirlooms            " << endl;
				cout << "       This means you opened more then 2500 packs      " << endl;
				cout << "#######################################################" << endl;
				heirloom = (final_count / 5);
				cout << "                     Apex Calculator                   " << endl;
				cout << "#######################################################" << endl;
				cout << "You already opened " << final_count << " packs." << "That's " << heirloom << " % from 500" << endl;
				cout << "#######################################################" << endl;
			}
			else {
				if (final_count >= 2001) {
					SetConsoleTextAttribute(color, 13);
					final_count = final_count - 2000;
					cout << "#######################################################" << endl;
					cout << "             You alredy have four heirlooms            " << endl;
					cout << "       This means you opened more then 2000 packs      " << endl;
					cout << "#######################################################" << endl;
					heirloom = (final_count / 5);
					cout << "                     Apex Calculator                   " << endl;
					cout << "#######################################################" << endl;
					cout << "You already opened " << final_count << " packs." << "That's " << heirloom << " % from 500" << endl;
					cout << "#######################################################" << endl;
				}
				else {
					if (final_count >= 1501) {
						SetConsoleTextAttribute(color, 13);
						final_count = final_count - 1500;
						cout << "#######################################################" << endl;
						cout << "            You alredy have three heirlooms            " << endl;
						cout << "       This means you opened more then 1500 packs      " << endl;
						cout << "#######################################################" << endl;
						heirloom = (final_count / 5);
						cout << "                     Apex Calculator                   " << endl;
						cout << "#######################################################" << endl;
						cout << "You already opened " << final_count << " packs." << "That's " << heirloom << " % from 500" << endl;
						cout << "#######################################################" << endl;
					}
					else {
						if (final_count >= 1001) {
							SetConsoleTextAttribute(color, 13);
							final_count = final_count - 1000;
							cout << "#######################################################" << endl;
							cout << "             You alredy have two heirlooms             " << endl;
							cout << "       This means you opened more then 1000 packs      " << endl;
							cout << "#######################################################" << endl;
							heirloom = (final_count / 5);
							cout << "                     Apex Calculator                   " << endl;
							cout << "#######################################################" << endl;
							cout << "You already opened " << final_count << " packs." << "That's " << heirloom << " % from 500" << endl;
							cout << "#######################################################" << endl;
						}
						else {
							if (final_count >= 501) {
								SetConsoleTextAttribute(color, 13);
								final_count = final_count - 500;
								cout << "#######################################################" << endl;
								cout << "              You alredy have one heirloom             " << endl;
								cout << "        This means you opened more then 500 packs      " << endl;
								cout << "#######################################################" << endl;
								heirloom = (final_count / 5);
								cout << "                     Apex Calculator                   " << endl;
								cout << "#######################################################" << endl;
								cout << "You already opened " << final_count << " packs." << "That's " << heirloom << " % from 500" << endl;
								cout << "#######################################################" << endl;
							}
							else {
								heirloom = (final_count / 5);
								SetConsoleTextAttribute(color, 13);
								cout << "#######################################################" << endl;
								cout << "                     Apex Calculator                   " << endl;
								cout << "#######################################################" << endl;
								cout << "You already opened " << final_count << " packs." << "That's " << heirloom << " % from 500" << endl;
								cout << "#######################################################" << endl;
							}
						}
					}
				}
			}
		}
	}



	//restart
	restart();
}

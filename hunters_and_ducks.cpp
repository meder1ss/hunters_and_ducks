#include <vector>
#include <iostream>
#include <string>
#include <ctime>
#include <list>
#include <stdio.h>
#include <iomanip>
#include <stdlib.h>
#include <typeinfo>
using namespace std;
string names[10] = {"Noah", "Liam", "William","Mason","James","Benjamin","Jacob","Michael","Elijah","Ethan"};
string size[10] = {"small", "big", "medium", "little", "large", "huge", "long", "short", "wide", "narrow"};
string form[10] = {"Octagon", "Square", "Triangle", "Rhombus", "Trapezium", "Heptagon","Pentagon", "Decagon", "Parallelogram", "Dodecagon"};
string colors[10] = {"Orange", "Red", "Green", "Blue", "Black", "Pink", "Yellow", "Hazel", "White", "Brown"};
string sex[2] = {"Woman", "Man"};
class Duck {
protected:
	string name;
	int weight;
	Duck *next;
	int catches;
public:
	friend class Lake;
	Duck() : name(names[rand()%10]), weight((rand()%3)+1), catches(0) {};
	virtual ~Duck() {};
	virtual void get_info() = 0;
	virtual int can_fly() = 0;
	virtual int can_migrate() = 0;
	virtual int can_swim() = 0;
	virtual int can_crawl() = 0;
	virtual int can_peck() = 0;
	virtual int can_play() = 0;
	virtual int can_fish() = 0;
	virtual int duck_got_caught(int i) = 0;
};
class Mramornye_chirki : public Duck {
	int fly;
	string form_of_wings;
	int size_of_tail;
public:
	Mramornye_chirki() : fly(1), form_of_wings(form[rand()%10]), size_of_tail((rand()%10)+1) {};
	virtual ~Mramornye_chirki() {};
	virtual int duck_got_caught(int i)
	{
	    if (fly = 1)
        {
            catches += 1;
            if (catches > 1)
            {
                fly = 0;
            }
        }
        return catches;
	}
	virtual void get_info()
	{
		cout << "Меня зовут: " << name << '\n' <<  endl;
		cout << "Я не знаю где я! " << '\n' <<  endl;
		cout << "Мой вес: " << weight << "кг" << '\n' <<  endl;
		if (fly)
			cout << "Я умею летать!" << '\n' <<  endl;
		else
			cout << "Я не умею летать!" << '\n' <<  endl;
		cout << "Моя форма крыльев: " << form_of_wings << '\n' <<  endl;
		cout << "Размер моего хвоста:  " << size_of_tail << "см" << '\n' <<  endl;
	}
	virtual int can_fly() {return (this->fly);}
	virtual int can_migrate() {return 0;}
	virtual int can_swim() {return 0;}
	virtual int can_crawl() {return 0;}
	virtual int can_peck() {return 0;}
	virtual int can_play() {return 0;}
	virtual int can_fish() {return 0;}

};
class Nyrki : public Duck {
	int migrate;
	string color_of_tale;
	int stamina;
public:
	Nyrki() : migrate(1), color_of_tale(colors[rand()%10]), stamina((rand()%10)) {};
	virtual ~Nyrki() {};
	virtual int duck_got_caught(int i)
	{
	    if (migrate = 1)
        {
            catches += 1;
            if (catches > 1)
            {
                migrate = 0;
            }
        }
        return catches;
	}
	virtual void get_info()
	{
		cout << "Меня зовут: " << name << '\n' <<  endl;
		cout << "Я не знаю где я! " << '\n' <<  endl;
		cout << "Мой вес: " << weight << "кг" << '\n' <<  endl;
		if (migrate)
			cout << "Я умею мигрировать!" << '\n' <<  endl;
		else
			cout << "Я не умею мигрировать!" << '\n' <<  endl;
		cout << "Моя окрас хвоста: " << color_of_tale << '\n' <<  endl;
		cout << "Моя выносливость:  " << stamina << '\n' <<  endl;
	}
	virtual int can_fly() {return 0;}
	virtual int can_migrate() {return (this->migrate);}
	virtual int can_swim() {return 0;}
	virtual int can_crawl() {return 0;}
	virtual int can_peck() {return 0;}
	virtual int can_play() {return 0;}
	virtual int can_fish() {return 0;}

};
class Shiloxvost : public Duck {
	int fish;
	string color_of_wings;
	int range_of_wings;
public:
	Shiloxvost() : fish(1), color_of_wings(colors[rand()%10]), range_of_wings((rand()%10)+1) {};
	virtual ~Shiloxvost() {};
	virtual int duck_got_caught(int i)
	{
	    if (fish = 1)
        {
            catches += 1;
            if (catches > 1)
            {
                fish = 0;
            }
        }
        return catches;
	}
	virtual void get_info()
	{
		cout << "Меня зовут: " << name << '\n' <<  endl;
		cout << "Я не знаю где я! " << '\n' <<  endl;
		cout << "Мой вес: " << weight << "кг" << '\n' <<  endl;
		if (fish)
			cout << "Я умею рыбачить!" << '\n' <<  endl;
		else
			cout << "Я не умею рыбачить!" << '\n' <<  endl;
		cout << "Мой окрас крыльев: " << color_of_wings << '\n' <<  endl;
		cout << "Мой размах крыльев:  " << range_of_wings << '\n' <<  endl;
	}
	virtual int can_fly() {return 0;}
	virtual int can_migrate() {return 0;}
	virtual int can_swim() {return 0;}
	virtual int can_crawl() {return 0;}
	virtual int can_peck() {return 0;}
	virtual int can_play() {return 0;}
	virtual int can_fish() {return (this->fish);}

};
class Shirokonoska_1 : public Duck {
	int swim;
    int height_in_holk;
	int power;
public:
	Shirokonoska_1() : swim(1), power(rand()%100), height_in_holk((rand()%3)+1) {};
	virtual ~Shirokonoska_1() {};
	virtual int duck_got_caught(int i)
	{
	    if (swim = 1)
        {
            catches += 1;
            if (catches > 1)
            {
                swim = 0;
            }
        }
        return catches;
	}
	virtual void get_info()
	{
		cout << "Меня зовут: " << name << '\n' <<  endl;
		cout << "Я не знаю где я! " << '\n' <<  endl;
		cout << "Мой вес: " << weight << "кг" << '\n' <<  endl;
		if (swim)
			cout << "Я умею плавать!" << '\n' <<  endl;
		else
			cout << "Я не умею плавать!" << '\n' <<  endl;
		cout << "Моя сила: " << power << '\n' <<  endl;
		cout << "Моя высота в холке:  " << height_in_holk << "см" << '\n' <<  endl;
	}
	virtual int can_fly() {return 0;}
	virtual int can_migrate() {return 0;}
	virtual int can_swim() {return (this->swim);}
	virtual int can_crawl() {return 0;}
	virtual int can_peck() {return 0;}
	virtual int can_play() {return 0;}
	virtual int can_fish() {return 0;}

};
class Shirokonoska_2 : public Duck {
	int migrate;
    string color;
	int health;
public:
	Shirokonoska_2() : migrate(1), health(rand()%100), color(colors[rand()%10]) {};
	virtual ~Shirokonoska_2() {};
	virtual int duck_got_caught(int i)
	{
	    if (migrate = 1)
        {
            catches += 1;
            if (catches > 1)
            {
                migrate = 0;
            }
        }
        return catches;
	}
	virtual void get_info()
	{
		cout << "Меня зовут: " << name << '\n' <<  endl;
		cout << "Я не знаю где я! " << '\n' <<  endl;
		cout << "Мой вес: " << weight << "кг" << '\n' <<  endl;
		if (migrate)
			cout << "Я умею мигрировать!" << '\n' <<  endl;
		else
			cout << "Я не умею мигрировать!" << '\n' <<  endl;
		cout << "Мой цвет: " << color << '\n' <<  endl;
		cout << "Моё здоровье:  " << health << '\n' <<  endl;
	}
	virtual int can_fly() {return 0;}
	virtual int can_migrate() {return (this -> migrate);}
	virtual int can_swim() {return 0;}
	virtual int can_crawl() {return 0;}
	virtual int can_peck() {return 0;}
	virtual int can_play() {return 0;}
	virtual int can_fish() {return 0;}

};
class Hohlataya_duck : public Duck {
	int play;
	int height;
	string pol;
public:
	Hohlataya_duck() : play(1), height((rand()%25)+1), pol(sex[rand()%2]) {};
	virtual ~Hohlataya_duck() {};
	virtual int duck_got_caught(int i)
	{
	    if (play = 1)
        {
            catches += 1;
            if (catches > 1)
            {
                play = 0;
            }
        }
        return catches;
	}
	virtual void get_info()
	{
		cout << "Меня зовут: " << name << '\n' <<  endl;
		cout << "Я не знаю где я! " << '\n' <<  endl;
		cout << "Мой вес: " << weight << "кг" << '\n' <<  endl;
		if (play)
			cout << "Я умею играть!" << '\n' <<  endl;
		else
			cout << "Я не умею играть!" << '\n' <<  endl;
		cout << "Мой пол: " << pol << '\n' <<  endl;
		cout << "Моя высота:  " << height << "см" << '\n' <<  endl;
	}
	virtual int can_fly() {return 0;}
	virtual int can_migrate() {return 0;}
	virtual int can_swim() {return 0;}
	virtual int can_crawl() {return 0;}
	virtual int can_peck() {return 0;}
	virtual int can_play() {return (this -> play);}
	virtual int can_fish() {return 0;}

};
class Golubokryli_chirok_1 : public Duck {
	int fly;
	string form_of_wings;
	string color_of_beak;
public:
	Golubokryli_chirok_1() : fly(1), form_of_wings(form[rand()%10]), color_of_beak(colors[rand()%10]) {};
	virtual ~Golubokryli_chirok_1() {};
	virtual int duck_got_caught(int i)
	{
	    if (fly = 1)
        {
            catches += 1;
            if (catches > 1)
            {
                fly = 0;
            }
        }
        if (i == 1) {
            fly = 1;
        }
        return catches;
	}
	virtual void get_info()
	{
		cout << "Меня зовут: " << name << '\n' <<  endl;
		cout << "Я знаю где я живу!" << '\n' <<  endl;
		cout << "Мой вес: " << weight << "кг" << '\n' <<  endl;
		if (fly)
			cout << "Я умею летать!" << '\n' <<  endl;
		else
			cout << "Я не умею летать!" << '\n' <<  endl;
		cout << "Моя форма крыльев: " << form_of_wings << '\n' <<  endl;
		cout << "Мой окрас клюва:  " << color_of_beak << '\n' <<  endl;
	}
	virtual int can_fly() {return (this->fly);}
	virtual int can_migrate() {return 0;}
	virtual int can_swim() {return 0;}
	virtual int can_crawl() {return 0;}
	virtual int can_peck() {return 0;}
	virtual int can_play() {return 0;}
	virtual int can_fish() {return 0;}

};
class Golubokryli_chirok_2 : public Duck {
	int crawl;
	string form_of_wings;
	int size_of_tail;
public:
	Golubokryli_chirok_2() : crawl(1), form_of_wings(form[rand()%10]), size_of_tail((rand()%10)+1) {};
	virtual ~Golubokryli_chirok_2() {};
	virtual int duck_got_caught(int i)
	{
	    if (crawl = 1)
        {
            catches += 1;
            if (catches > 1)
            {
                crawl = 0;
            }
        }
        return catches;
	}
	virtual void get_info()
	{
		cout << "Меня зовут: " << name << '\n' <<  endl;
		cout << "Я не знаю где я! " << '\n' <<  endl;
		cout << "Мой вес: " << weight << "кг" << '\n' <<  endl;
		if (crawl)
			cout << "Я умею ползать!" << '\n' <<  endl;
		else
			cout << "Я не умею ползать!" << '\n' <<  endl;
		cout << "Моя форма крыльев: " << form_of_wings << '\n' <<  endl;
		cout << "Мой размер хвоста:  " << size_of_tail << "см" << '\n' <<  endl;
	}
	virtual int can_fly() {return 0;}
	virtual int can_migrate() {return 0;}
	virtual int can_swim() {return 0;}
	virtual int can_crawl() {return (this->crawl);}
	virtual int can_peck() {return 0;}
	virtual int can_play() {return 0;}
	virtual int can_fish() {return 0;}

};
class Lysanskaya_cryakva : public Duck {
	int peck;
	string form_of_tail;
	string form_of_beak;
public:
	Lysanskaya_cryakva() : peck(1), form_of_tail(form[rand()%10]), form_of_beak(form[rand()%10]) {};
	virtual ~Lysanskaya_cryakva() {};
	virtual int duck_got_caught(int i)
	{
	    if (peck = 1)
        {
            catches += 1;
            if (catches > 1)
            {
                peck = 0;
            }
        }
        else
            catches = 2;
        return catches;
	}
	virtual void get_info()
	{
		cout << "Меня зовут: " << name << '\n' <<  endl;
		cout << "Я не знаю где я! " << '\n' <<  endl;
		cout << "Мой вес: " << weight << "кг" << '\n' <<  endl;
		if (peck)
			cout << "Я умею клеваться!" << '\n' <<  endl;
		else
			cout << "Я не умею клеваться!" << '\n' <<  endl;
		cout << "Моя форма клюва: " << form_of_beak << '\n' <<  endl;
		cout << "Моя форма хвоста:  " << form_of_tail << '\n' <<  endl;
	}
	virtual int can_fly() {return 0;}
	virtual int can_migrate() {return 0;}
	virtual int can_swim() {return 0;}
	virtual int can_crawl() {return 0;}
	virtual int can_peck() {return (this->peck);}
	virtual int can_play() {return 0;}
	virtual int can_fish() {return 0;}

};
class Lake {
	Duck *head;
	int size_of_list;
	int count_swim;
	int count_fly;
	int count_play;
	int count_fish;
	int count_crawl;
	int count_peck;
	int count_migrate;
	int effect;
public:
    friend void *escaping_lake(Lake *a, Lake *b);
    friend void *hunter(Lake *a, Lake *b, vector <int> num);
	Lake() : head(NULL), size_of_list(0), count_swim(0), count_fly(0), count_migrate(0), count_peck(0), count_crawl(0), count_fish(0), count_play(0), effect(0) {};
	~Lake()
	{
		Duck *prev = NULL;
		if (head)
		{
			while (head->next)
			{
				prev = head;
				head = head->next;
				delete prev;
				prev = NULL;
			}
			delete head;
		}
	}
	void add_v_list(Duck *node)
	{
		Duck *prev = NULL;
		if (head == NULL)
		{
			head = node;
			head->next = NULL;
			size_of_list++;
			count_swim+=(node->can_swim());
			count_fly+=(node->can_fly());
		    count_play += (node->can_play());
		    count_fish += (node->can_fish());
		    count_crawl += (node->can_crawl());
		    count_peck += (node->can_peck());
		    count_migrate += (node->can_migrate());
		}
		else
		{
			prev = head;
			while ((prev)&&(prev->next))
				prev=prev->next;
			if ((prev)&&((prev->next)==NULL))
				prev->next = node;
			size_of_list++;
			count_swim+=(node->can_swim());
			count_fly+=(node->can_fly());
			count_play += (node->can_play());
		    count_fish += (node->can_fish());
		    count_crawl += (node->can_crawl());
		    count_peck += (node->can_peck());
		    count_migrate += (node->can_migrate());
		}
	}
	int super_effect(int i) {
	    if (i == 1)
        {
            effect = 1;
        }
        else
        {
            effect = 0;
        }

	}
	void print_list()
	{
		Duck *prev = head;
		int count_all = count_swim + count_fly + count_play + count_fish + count_crawl + count_peck + count_migrate;
		cout << "Всего уток на озере: " << count_all << endl;
		cout << "Количество плавающих уток: " << count_swim << endl;
		cout << "Количество летающих уток: " << count_fly << endl;
		cout << "Количество играющих уток: " << count_play << endl;
		cout << "Количество рыбачащих уток: " << count_fish << endl;
		cout << "Количество ползающих уток: " << count_crawl << endl;
		cout << "Количество клюющихся уток: " << count_peck << endl;
		cout << "Количество мигрирующих уток: " << count_migrate << endl;
		int count_of_ducks = 0;
		while (prev)
		{
		    count_of_ducks++;
		    cout << setw(59) << count_of_ducks << setw(59) << "\n" << endl;
			prev->get_info();
			prev=prev->next;
		}
	}

	int get_size_of_list() { return size_of_list;}
	int get_count_fly() {return count_fly;}
	int get_count_swim(){return count_swim;}
	int get_count_play() {return count_play;}
	int get_count_fish() {return count_fish;}
	int get_count_crawl() {return count_crawl;}
	int get_count_peck() {return count_peck;}
	int get_count_migrate() {return count_migrate;}
	Duck *delete_duck(int i)
	{
		Duck *prev, *tmp;
		tmp=head;
		if (!i)
		{
			head = head->next;
			tmp->next = NULL;
			size_of_list--;
			count_fly-=(tmp->can_fly());
			count_swim-=(tmp->can_swim());
			count_play -= (tmp->can_play());
		    count_fish -= (tmp->can_fish());
		    count_crawl -= (tmp->can_crawl());
		    count_peck -= (tmp->can_peck());
		    count_migrate -= (tmp->can_migrate());
			return tmp;
		}
		while (i!=1)
		{
			tmp=tmp->next;
			i--;
		}
		prev = tmp;
		tmp=tmp->next;
		prev->next = tmp->next;
		tmp->next = NULL;
		size_of_list--;
		count_fly-=(tmp->can_fly());
		count_swim-=(tmp->can_swim());
		count_play -= (tmp->can_play());
		count_fish -= (tmp->can_fish());
		count_crawl -= (tmp->can_crawl());
		count_peck -= (tmp->can_peck());
		count_migrate -= (tmp->can_migrate());
		return tmp;
	}
};
 void print_menu() {
    system("cls");
    cout << "------------------------------------------------------------------------------------------------------------------------ \n" << endl;
    cout << "|"<<" Что вы хотите сделать?"<<setw(98)<<"| \n" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------ \n" << endl;
    cout << "| 1. Просмотреть информацию по озеру 'Большое Невольничье озеро' "<<setw(57) <<"| \n" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------ \n" << endl;
    cout << "| 2. Просмотреть информацию по озеру 'Киву'"<<setw(79) <<"| \n" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------ \n" << endl;
    cout << "| 3. Просмотреть информацию по озеру 'Сарезское озеро'"<<setw(68) <<"| \n" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------ \n" << endl;
    cout << "| 4. Просмотреть информацию по ферме 'YYWAPIYI'"<<setw(75) <<"| \n" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------ \n" << endl;
    cout << "| 5. Просмотреть информацию по уткам"<<setw(86) <<"| \n" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------ \n" << endl;
    cout << "| 6. Начать новый день"<<setw(100) <<"| \n" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------ \n" << endl;
    cout << "| 7. Выйти"<<setw(112) <<"| \n" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------ \n" << endl;
    cout << "Введите цифру >>>" << endl;
}
void print_menu_superkryak() {
    cout << "------------------------------------------------------------------------------------------------------------------------ \n" << endl;
    cout << "|"<<" Выберите один из эффектов Всемогущего Кряка: "<<setw(75)<<"| \n" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------ \n" << endl;
    cout << "| 1. Присвоить всем уткам на текущем озере способность прятаться от охотников. "<<setw(43) <<"| \n" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------ \n" << endl;
    cout << "| 2. Освободить всех уток с фермы. "<<setw(87) <<"| \n" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------ \n" << endl;
    cout << "| 3. Вылечить всех уток на ферме, чтобы они могли сбежать. "<<setw(63) <<"| \n" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------ \n" << endl;
    cout << "Введите цифру >>>" << endl;
}

int get_variant(int count) {
    int variant;
    char s[100];
    cin >> s;
    while (sscanf(s, "%d", &variant) != 1 || variant < 1 || variant > count) {
        cout << "Ошибка. Попробуйте ввести цифру снова ->" << endl;
        cin >> s;
    }
    return variant;
}
void *hunter(Lake *a, Lake *b, vector <int> num){
            Lysanskaya_cryakva Duck_for_comparing;
            int count_of_ducks = a->get_size_of_list();
            if (a->effect != 1) {
                if ((count_of_ducks) > 1)
                {
                    vector <int> num_new;
                    for (int i=0; i < num.size(); i++)
                    {
                        if (num[i]<=count_of_ducks)
                        {
                            num_new.push_back(num[i]);
                        }
                    }
                    if (num_new.size() > 0) {
                        int victims = num_new[rand()%(num_new.size())];
                        for (int k=0; k<victims; k++) {
                            int random_victim = rand()%(a->get_size_of_list());
                            Duck *random_duck = a->delete_duck(random_victim);
                            if (typeid(*random_duck).name() == typeid(Duck_for_comparing).name()) {
                                if (rand()%2 == 1) {
                                    b->add_v_list(random_duck);
                                }
                                else {
                                    victims--;
                                    a->add_v_list(random_duck);
                                    continue;
                                }
                            }
                            else {
                                b->add_v_list(random_duck);
                            }
                        }
                        if (victims < 5 && victims > 1){
                            cout << "-> Он поймал: "<< victims << " утки!"<< endl;
                        }
                        else {
                            cout << "-> Он поймал: "<< victims << " уток!"<< endl;
                        }

                    }
                    else
                        cout << "-> Охотник не поймал ни одной утки!" << endl;

                }
                else
                {
                    vector <int> num_new;
                    for (int i=0; i < num.size(); i++)
                    {
                        if (num[i]<=count_of_ducks)
                        {
                            num_new.push_back(num[i]);
                        }
                    }
                    if (num_new[0] == 1)
                    {
                        int victims = rand()%2;
                        if (victims = 1)
                        {
                            cout << "-> Он поймал: "<<victims << " утку!"<< endl;
                            b->add_v_list(a->delete_duck(0));
                        }
                    }
                    else{
                        cout << "-> Охотник не поймал ни одной утки!" << endl;
                    }
                }
            }
            else {
                cout << "Озеро заколдовано! Охотник не может поймать ни одну утку!" << endl;
            }
}
void *escaping_lake(Lake *a, Lake *b, int lake_number)
{
    Golubokryli_chirok_1 Duck_for_comparing;
    if (a->get_size_of_list()!=0)
	{
    	int kolichestvo_utok = a->get_size_of_list();
    	for (int i = 0; i < kolichestvo_utok; i++)
        {
            int random_escaper = i;
            if (random_escaper <=  (a->get_size_of_list() - 1))
            {
                Duck *duck_escaper = a->delete_duck(random_escaper);
                if (typeid(*duck_escaper).name() == typeid(Duck_for_comparing).name())
                {
                    if (duck_escaper->duck_got_caught(0)!=2)
                    {
                        cout << "-> На " << lake_number << " озеро сбежала утка номер " << random_escaper + 1 << endl;
                        b->add_v_list(duck_escaper);
                    }
                    else
                    {
                        a->add_v_list(duck_escaper);
                    }
                }
                else
                {
                    a->add_v_list(duck_escaper);
                }
            }
            else
                break;
        }
	}
}
void *migrating_lake(Lake *a, Lake *b, int lake_number)
{
    Shirokonoska_2 Duck_for_comparing1;
    Nyrki Duck_for_comparing2;
    if (a->get_size_of_list()!=0)
	{
    	int kolichestvo_utok = a->get_size_of_list();
    	for (int i = 0; i < kolichestvo_utok; i++)
        {
            int random_migrant = i;
            if (random_migrant <=  (a->get_size_of_list() - 1))
            {
                Duck *duck_migrant = a->delete_duck(random_migrant);
                if (typeid(*duck_migrant).name() == typeid(Duck_for_comparing1).name() || typeid(*duck_migrant).name() == typeid(Duck_for_comparing2).name())
                {
                    if (rand()%100 == 1) { //вероятность 1 процент, что утка, которая мигрирует, решит перелететь на другое озеро
                        cout << "-> На " << lake_number << " озеро мигрировала утка номер " << random_migrant + 1 << endl;
                        b->add_v_list(duck_migrant);
                    }
                    else {
                        a->add_v_list(duck_migrant);
                    }
                }
                else
                {
                    a->add_v_list(duck_migrant);
                }
            }
            else
                break;
        }
	}
}

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    /*Mramornye_chirki Nyrki Shiloxvost Shirokonoska_1 Shirokonoska_2 Hohlataya_duck Golubokryli_chirok_1 Golubokryli_chirok_2 Lysanskaya_cryakva */
    Lake first_lake, second_lake, third_lake, farm;
	for (int i = 0; i<95; i++)
	{
	    int random_lake = rand()%3;
	    if (random_lake == 0)
	    {
	            int random_duck = rand()%3;
	            if (random_duck == 0)
	                first_lake.add_v_list(new Mramornye_chirki);
	            if (random_duck == 1)
	                first_lake.add_v_list(new Shiloxvost);
	            if (random_duck == 2)
		            first_lake.add_v_list(new Nyrki);
	    }
		if (random_lake == 1)
		{
	            int random_duck = rand()%3;
	            if (random_duck == 0)
	                second_lake.add_v_list(new Shirokonoska_1);
	            if (random_duck == 1)
	                second_lake.add_v_list(new Shirokonoska_2);
	            if (random_duck == 2)
		            second_lake.add_v_list(new Hohlataya_duck);
	    }

		if (random_lake == 2)
		{
	            int random_duck = rand()%3;
	            if (random_duck == 0)
	                third_lake.add_v_list(new Golubokryli_chirok_1);
	            if (random_duck == 1)
	                third_lake.add_v_list(new Golubokryli_chirok_2);
	            if (random_duck == 2)
		            third_lake.add_v_list(new Lysanskaya_cryakva);
	    }

	}
	int day_count = 0;
	int variant;
	vector <int> victims_hunter1 = {1,2,3,4,5};
	vector <int> victims_hunter2 = {4,5};
    do {
        print_menu();

        variant = get_variant(7);

        switch (variant) {
            case 1:
                cout << "<----------------------------------------------'Большое Невольничье озеро'--------------------------------------------->\n" << endl;
	            first_lake.print_list();
	            break;
            case 2:
	            cout << "<------------------------------------------------------'Озеро Киву'---------------------------------------------------->\n" << endl;
	            second_lake.print_list();
	            break;
            case 3:
	            cout << "<---------------------------------------------------'Сарезское озеро'-------------------------------------------------->\n" << endl;
	            third_lake.print_list();
                break;
            case 4:
                cout << "<----------------------------------------------------Ферма 'YYWAPIYI'-------------------------------------------------->\n" << endl;
	            farm.print_list();
                break;
            case 5:
                cout << "Количество уток на трёх озёрах: " << first_lake.get_size_of_list() + second_lake.get_size_of_list() + third_lake.get_size_of_list() << endl;
                cout << "Количество уток на ферме: " << farm.get_size_of_list() << endl;
                cout << "Общее количество уток на ферме и на трёх озёрах: " << farm.get_size_of_list() + first_lake.get_size_of_list() + second_lake.get_size_of_list() + third_lake.get_size_of_list() << endl;
                cout << "<----------------------------------------------'Большое Невольничье озеро'--------------------------------------------->\n" << endl;
	            first_lake.print_list();
	            cout << "<------------------------------------------------------'Озеро Киву'---------------------------------------------------->\n" << endl;
	            second_lake.print_list();
	            cout << "<---------------------------------------------------'Сарезское озеро'-------------------------------------------------->\n" << endl;
	            third_lake.print_list();
	            break;
            case 6:
                day_count++;
                cout <<"<------------------------------------------------- Сегодня " << day_count << " день охоты! ----------------------------------------------> \n" << endl;
                if (rand()%4 == 1) {
                        //25 процентов, что появится креативный кряк
                        int superkryak_variant;
                        int random_lake = rand()%3;
                        if (random_lake == 0)
                        {
                            cout << "Ого! На 'Большом Невольничьем озере' появился Всемогущий Кряк!" << endl;
                            print_menu_superkryak();
                            superkryak_variant = get_variant(3);
                            switch (superkryak_variant){
                                case 1:
                                    first_lake.super_effect(1);
                                    cout << "Готово! Теперь 'Большое Невольничье озеро' заколдовано на день!" << endl;
                                    break;
                                case 2:
                                    if (farm.get_size_of_list()!=0)
                                    {
                                        int kolichestvo_utok = farm.get_size_of_list();
                                        for (int i = 0; i < kolichestvo_utok; i++)
                                        {
                                            int escaper = i;
                                            if (escaper <= (farm.get_size_of_list() - 1))
                                            {
                                                Duck *duck_escaper = farm.delete_duck(escaper);
                                                int random_lake1 = rand()%3;
                                                if (random_lake1 == 0) {
                                                    first_lake.add_v_list(duck_escaper);
                                                }
                                                if (random_lake1 == 1){
                                                    second_lake.add_v_list(duck_escaper);
                                                }
                                                if (random_lake1 == 2) {
                                                    third_lake.add_v_list(duck_escaper);
                                                }
                                            }
                                            else {
                                                break;
                                            }
                                        }
                                    }
                                    cout << "Готово! Все утки с фермы разбежались по разным озерам!" << endl;
                                    break;
                                case 3:
                                    Golubokryli_chirok_1 Duck_for_comparing;
                                    if (farm.get_size_of_list()!=0)
                                    {
                                        int kolichestvo_utok = farm.get_size_of_list();
                                        for (int i = 0; i < kolichestvo_utok; i++)
                                        {
                                            int patient = i;
                                            if (patient <=  (farm.get_size_of_list() - 1))
                                            {
                                                Duck *duck_patient = farm.delete_duck(patient);
                                                if (typeid(*duck_patient).name() == typeid(Duck_for_comparing).name())
                                                {
                                                    duck_patient->duck_got_caught(1);
                                                }
                                                else
                                                    continue;
                                            }
                                            else
                                                break;
                                        }
                                    }
                                    cout << "Готово! Все утки вылечены и снова могут устраивать побеги! " << endl;
                                    break;
                            }
                        }
                        if (random_lake == 1)
                        {
                            cout << "Ого! На озере 'Киву' появился Всемогущий Кряк!" << endl;
                            print_menu_superkryak();
                            superkryak_variant = get_variant(3);
                            switch (superkryak_variant){
                                case 1:
                                    second_lake.super_effect(1);
                                    cout << "Готово! Теперь озеро 'Киву' заколдовано на день!" << endl;
                                    break;
                                case 2:
                                    if (farm.get_size_of_list()!=0)
                                    {
                                        int kolichestvo_utok = farm.get_size_of_list();
                                        for (int i = 0; i < kolichestvo_utok; i++)
                                        {
                                            int escaper = i;
                                            if (escaper <= (farm.get_size_of_list() - 1))
                                            {
                                                Duck *duck_escaper = farm.delete_duck(escaper);
                                                int random_lake1 = rand()%3;
                                                if (random_lake1 == 0) {
                                                    first_lake.add_v_list(duck_escaper);
                                                }
                                                if (random_lake1 == 1){
                                                    second_lake.add_v_list(duck_escaper);
                                                }
                                                if (random_lake1 == 2) {
                                                    third_lake.add_v_list(duck_escaper);
                                                }
                                            }
                                            else {
                                                break;
                                            }
                                        }
                                    }
                                    cout << "Готово! Все утки с фермы разбежались по разным озерам!";
                                    break;
                                case 3:
                                    Golubokryli_chirok_1 Duck_for_comparing;
                                    if (farm.get_size_of_list()!=0)
                                    {
                                        int kolichestvo_utok = farm.get_size_of_list();
                                        for (int i = 0; i < kolichestvo_utok; i++)
                                        {
                                            int patient = i;
                                            if (patient <=  (farm.get_size_of_list() - 1))
                                            {
                                                Duck *duck_patient = farm.delete_duck(patient);
                                                if (typeid(*duck_patient).name() == typeid(Duck_for_comparing).name())
                                                {
                                                    duck_patient->duck_got_caught(1);
                                                }
                                                else
                                                    continue;
                                            }
                                            else
                                                break;
                                        }
                                    }
                                    cout << "Готово! Все утки вылечены и снова могут устраивать побеги! " << endl;
                                    break;


                            }
                        }
                        if (random_lake == 2)
                        {
                            cout << "Ого! На 'Сарезском озере' появился Всемогущий Кряк!" << endl;
                            print_menu_superkryak();
                            superkryak_variant = get_variant(3);
                            switch (superkryak_variant){
                                case 1:
                                    third_lake.super_effect(1);
                                    cout << "Готово! Теперь 'Сарезское озеро' заколдовано на день!" << endl;
                                    break;
                                case 2:
                                    if (farm.get_size_of_list()!=0)
                                    {
                                        int kolichestvo_utok = farm.get_size_of_list();
                                        for (int i = 0; i < kolichestvo_utok; i++)
                                        {
                                            int escaper = i;
                                            if (escaper <= (farm.get_size_of_list() - 1))
                                            {
                                                Duck *duck_escaper = farm.delete_duck(escaper);
                                                int random_lake1 = rand()%3;
                                                if (random_lake1 == 0) {
                                                    first_lake.add_v_list(duck_escaper);
                                                }
                                                if (random_lake1 == 1){
                                                    second_lake.add_v_list(duck_escaper);
                                                }
                                                if (random_lake1 == 2) {
                                                    third_lake.add_v_list(duck_escaper);
                                                }
                                            }
                                            else {
                                                break;
                                            }
                                        }
                                    }
                                    cout << "Готово! Все утки с фермы разбежались по разным озерам!";
                                    break;
                                case 3:
                                    Golubokryli_chirok_1 Duck_for_comparing;
                                    if (farm.get_size_of_list()!=0)
                                    {
                                        int kolichestvo_utok = farm.get_size_of_list();
                                        for (int i = 0; i < kolichestvo_utok; i++)
                                        {
                                            int patient = i;
                                            if (patient <=  (farm.get_size_of_list() - 1))
                                            {
                                                Duck *duck_patient = farm.delete_duck(patient);
                                                if (typeid(*duck_patient).name() == typeid(Duck_for_comparing).name())
                                                {
                                                    duck_patient->duck_got_caught(1);
                                                }
                                                else
                                                    continue;
                                            }
                                            else
                                                break;
                                        }
                                    }
                                    cout << "Готово! Все утки вылечены и снова могут устраивать побеги! " << endl;
                                    break;

                            }

                        }
                    }
                for (int i=0; i<2; i++)
                {
                    int count_of_lakes = 0;
                    bool j = true;
                    while(j)
                    {
                        int random_lake = rand()%3;
                        if (random_lake == 0)
                        {
                            if (first_lake.get_size_of_list()!=0)
                            {
                                if (i == 0) {
                                    cout << "Первый охотник решил пойти на 'Большое Невольничье озеро' ..." << endl;
                                    hunter(&first_lake, &farm, victims_hunter1);
                                    j = false;
                                }
                                else{
                                    cout << "Второй охотник решил пойти на 'Большое Невольничье озеро' ..." << endl;
                                    hunter(&first_lake, &farm, victims_hunter2);
                                    j = false;
                                }
                            }
                            else {
                                j = true;
                                count_of_lakes++;
                            }
                        }
                        if (random_lake == 1)
                        {
                            if (second_lake.get_size_of_list()!=0)
                            {
                                if (i == 0) {
                                    cout << "Первый охотник решил пойти на озеро 'Киву'..." << endl;
                                    hunter(&second_lake, &farm, victims_hunter1);
                                    j = false;
                                }
                                else {
                                    cout << "Второй охотник решил пойти на озеро 'Киву'..." << endl;
                                    hunter(&second_lake, &farm, victims_hunter2);
                                    j = false;
                                }
                            }
                            else {
                                j = true;
                                count_of_lakes++;
                            }
                        }

                        if (random_lake == 2)
                        {
                            if (third_lake.get_size_of_list()!=0)
                            {
                                if (j == 0) {
                                    cout << "Первый охотник решил пойти на 'Сарезское озеро'..." << endl;
                                    hunter(&third_lake, &farm, victims_hunter1);
                                    j = false;
                                }
                                else {
                                    cout << "Второй охотник решил пойти на 'Сарезское озеро'..." << endl;
                                    hunter(&third_lake, &farm, victims_hunter2);
                                    j = false;
                                }
                            }
                            else {
                                j = true;
                                count_of_lakes++;
                            }
                        }
                        if (count_of_lakes==3)
                        {
                            if (i == 0)
                            {
                                cout << "Первый  охотник обошел все озера, но не нашел ни одной утки!" << endl;
                                j = false;

                            }
                            else
                            {
                                cout << "Второй охотник обошел все озера, но не нашел ни одной утки!" << endl;
                                j = false;
                            }
                        }
                    }
                }
                    if (farm.get_size_of_list() > 0)
                    {
                        cout << "Ночью, пока охотники спали, пойманные утки попытались сбежать с фермы 'YYWAPIYI'..." << endl;
                        for (int i = 0; i < farm.get_size_of_list(); i++)
                        {
                            int random_lake = rand()%3;
                            if (farm.get_size_of_list() == 0) {
                                break;
                            }
                            if (random_lake == 0)
                            {
                                    escaping_lake(&farm, &first_lake, 1);
                            }
                            if (random_lake == 1)
                            {
                                    escaping_lake(&farm, &second_lake, 2);
                            }
                             if (random_lake == 2)
                            {
                                    escaping_lake(&farm, &third_lake, 3);
                            }
                        }

                    }
                    if (first_lake.get_size_of_list() > 0) {
                        for (int i = 0; i < first_lake.get_size_of_list(); i++)
                        {
                            int random_lake = rand()%2;
                            if (first_lake.get_size_of_list() == 0) {
                                break;
                            }
                            if (random_lake == 0)
                            {
                                    migrating_lake(&first_lake, &second_lake, 2);
                            }
                             if (random_lake == 1)
                            {
                                    migrating_lake(&first_lake, &third_lake, 3);
                            }
                        }
                    }
                    if (second_lake.get_size_of_list() > 0) {
                        for (int i = 0; i < second_lake.get_size_of_list(); i++)
                        {
                            int random_lake = rand()%2;
                            if (second_lake.get_size_of_list() == 0) {
                                break;
                            }
                            if (random_lake == 0)
                            {
                                    migrating_lake(&second_lake, &first_lake, 1);
                            }
                             if (random_lake == 1)
                            {
                                    migrating_lake(&second_lake, &third_lake, 3);
                            }
                        }
                    }
                    if (third_lake.get_size_of_list() > 0) {
                        for (int i = 0; i < third_lake.get_size_of_list(); i++)
                        {
                            int random_lake = rand()%2;
                            if (third_lake.get_size_of_list() == 0) {
                                break;
                            }
                            if (random_lake == 0)
                            {
                                    migrating_lake(&third_lake, &first_lake, 1);
                            }
                             if (random_lake == 1)
                            {
                                    migrating_lake(&third_lake, &second_lake, 2);
                            }
                        }
                    }
                    first_lake.super_effect(0);
                    second_lake.super_effect(0);
                    third_lake.super_effect(0);
                    if (day_count == 9){
                        cout << "<------------------------------------Игра закончена! Прошло все девять дней охоты!------------------------------------->" << endl;
                        if (first_lake.get_size_of_list() == 0 and second_lake.get_size_of_list() == 0 and third_lake.get_size_of_list() == 0)
                        {
                        cout << "-> Охотникам удалось поймать всех уток! :) " << endl;
                        }
                        else {
                            cout << "-> Oхотникам не удалось поймать всех уток! :( " << endl;
                        }
                    }
                    break;
        }

        if (variant != 7)
            system("pause");
    } while (variant != 7);
}

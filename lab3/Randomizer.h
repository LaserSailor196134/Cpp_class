#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class Randomizer {
	public:
		static Randomizer& getInstance();
		int nextInt(int high);
		int nextInt(int low, int high);
		int die(int sides);
		double nextDouble();
		char randomChar(const string& s);
	
	protected:
		Randomizer(const Randomizer&);
		Randomizer& operator=(const Randomizer&);

	private:
		Randomizer();
		static Randomizer* instance_;
		
};

#include <string>

namespace TelCoColorCoder
{
	enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
	
	const char* MajorColorNames[];
	const char* MinorColorNames[];
	
	int numberOfMajorColors;
	int numberOfMinorColors;
	
	class ColorPair {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor);
            MajorColor getMajor();
            MinorColor getMinor(); 
            std::string ToString();
    };
	
	ColorPair GetColorFromPairNumber(int pairNumber);
	int GetPairNumberFromColor(MajorColor major, MinorColor minor);
	std::string ColorPairReferenceManual();
}
#include <iostream>
#include <string>
using namespace std;

class Camera
{
public:
    int camera_megapixels;
};

class MusicPlayer
{
public:
    int speaker_power;
};

class SmartPhone : public Camera, public MusicPlayer
{
public:
    string brand_name;

    void readData()
    {
        getline(cin, brand_name);
        cin >> camera_megapixels >> speaker_power;
    }

    void displayData()
    {
        cout << "Brand: " << brand_name << endl;
        cout << "Camera: " << camera_megapixels << " MP" << endl;
        cout << "Speaker Power: " << speaker_power << " W" << endl;
    }
};

int main()
{
    SmartPhone s;
    s.readData();
    s.displayData();
    return 0;
}

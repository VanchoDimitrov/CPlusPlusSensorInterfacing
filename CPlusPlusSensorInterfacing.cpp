#include <iostream>
using namespace std;

class RFIDSensorInterface {
public:
	virtual void Initialize() {
		cout << "Sensor Initialized" << endl;
	}

	virtual void ReadingProcess() {
		cout << "Reading of information in process..." << endl;
	}

	virtual void Processing() {
		cout << "Processing information" << endl;
	}

	virtual void WriteInformation() {
		cout << "Information saved for future analyze." << endl;
	}
};

class Detection :public RFIDSensorInterface {
public:
	virtual void Initialize() override {
		cout << "Overriden initialisation complete!" << endl;
	}
};

class TemperatureMeasurement :public RFIDSensorInterface {

};

class DistanceMeasurement :public RFIDSensorInterface {

};

class Result :public RFIDSensorInterface {
public:
	void GetResult() {
		cout << "Result returned" << endl;
	}
};

int main()
{
	Detection detection;
	detection.Initialize();

	Result result;
	result.GetResult();

	cin.get();
}
/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

typedef void (^CDUnknownBlockType)(void);

struct CLAssertionInternal {
    id _field1;
    struct CLConnectionClient *_field2;
};

struct CLConnectionClient;

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct _CLLocationManagerStateTrackerState {
    double distanceFilter;
    double desiredAccuracy;
    _Bool updatingLocation;
    _Bool requestingLocation;
    _Bool requestingRanging;
    _Bool updatingRanging;
    _Bool updatingHeading;
    double headingFilter;
    _Bool allowsLocationPrompts;
    _Bool allowsAlteredAccessoryLocations;
    _Bool dynamicAccuracyReductionEnabled;
    _Bool previousAuthorizationStatusValid;
    int previousAuthorizationStatus;
    long long activityType;
    int pausesLocationUpdatesAutomatically;
    _Bool paused;
    _Bool allowsBackgroundLocationUpdates;
    _Bool showsBackgroundLocationIndicator;
    _Bool allowsMapCorrection;
    _Bool batchingLocation;
    _Bool updatingVehicleSpeed;
    _Bool updatingVehicleHeading;
    _Bool matchInfoEnabled;
    _Bool groundAltitudeEnabled;
    _Bool courtesyPromptNeeded;
};

struct os_state_hints_s {
    unsigned int _field1;
    char *_field2;
    unsigned int _field3;
    unsigned int _field4;
};

typedef struct {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    _Bool _field5;
    _Bool _field6;
    unsigned char _field7;
    float _field8;
    char _field9;
    unsigned short _field10;
} CDStruct_63e0ae22;

typedef struct {
    unsigned long long _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
} CDStruct_b7b5e951;

typedef struct {
    double x;
    double y;
    double z;
    double magneticHeading;
    double trueHeading;
    double accuracy;
    double timestamp;
    double temperature;
    double magnitude;
    double inclination;
    int calibration;
} CDStruct_b560b707;

typedef struct {
    double speed;
    double timestamp;
    double machContinuousTime;
    double machAbsoluteTime;
} CDStruct_6a5f25ec;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
} CDStruct_869f9c67;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    float _field6;
    float _field7;
    float _field8;
    _Bool _field9;
    int _field10;
    struct {
        double _field1;
        double _field2;
    } _field11;
    double _field12;
    int _field13;
    int _field14;
    _Bool _field15;
    struct {
        double _field1;
        double _field2;
        _Bool _field3;
        _Bool _field4;
    } _field16;
    struct {
        double _field1;
        double _field2;
    } _field17;
    float _field18;
    struct {
        double _field1;
        double _field2;
    } _field19;
    double _field20;
    double _field21;
    int _field22;
    _Bool _field23;
    double _field24;
    double _field25;
    double _field26;
    double _field27;
} CDStruct_f185aced;

typedef struct {
    int suitability;
    CDStruct_2c43369c coordinate;
    double horizontalAccuracy;
    double altitude;
    double verticalAccuracy;
    double speed;
    double speedAccuracy;
    double course;
    double courseAccuracy;
    double timestamp;
    int confidence;
    double lifespan;
    int type;
    CDStruct_2c43369c rawCoordinate;
    double rawCourse;
    int floor;
    unsigned int integrity;
    int referenceFrame;
    int rawReferenceFrame;
    int signalEnvironmentType;
} CDStruct_4d1fbe9a;

typedef struct {
    CDStruct_869f9c67 _field1;
    int _field2;
} CDStruct_1e3bbe6d;

typedef struct {
    char identifier[512];
    char onBehalfOfIdentifier[512];
    int type;
    _Bool notifyOnEntry;
    _Bool notifyOnExit;
    _Bool conservativeEntry;
    _Bool emergency;
    union {
        struct {
            char proximityUUID[512];
            unsigned short major;
            unsigned short minor;
            int definitionMask;
            _Bool notifyEntryStateOnDisplay;
        } beaconAttributes;
        struct {
            CDStruct_2c43369c center;
            double radius;
            double desiredAccuracy;
            int referenceFrame;
            _Bool allowMonitoringWhileNearby;
        } circularAttributes;
        struct {
            CDStruct_2c43369c vertices[101];
            int verticesCount;
            int referenceFrame;
            _Bool allowMonitoringWhileNearby;
        } polygonalAttributes;
    } ;
} CDStruct_4c505072;

typedef struct {
    int _field1;
    double _field2;
    union {
        struct {
            CDStruct_869f9c67 _field1;
            CDStruct_869f9c67 _field2;
        } _field1;
        struct {
            _Bool _field1;
            char _field2[246];
        } _field2;
    } _field3;
} CDStruct_4d1f5584;

// Ambiguous groups
typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;

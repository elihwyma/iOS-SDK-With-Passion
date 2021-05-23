/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

typedef void (^CDUnknownBlockType)(void);

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct LineSegment<double, 2> {
    Matrix_2bdd42a3 _origin;
    Matrix_2bdd42a3 _direction;
};

struct Matrix<double, 2, 1> {
    double _e[2];
};

struct NSDictionary {
    Class _field1;
};

struct PolylineCoordinate {
    unsigned int index;
    float offset;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

typedef struct {
    _Bool _field1;
    long long _field2;
    _Bool _field3;
    _Bool _field4;
    _Bool _field5;
    double _field6;
} CDStruct_ef0b40be;

typedef struct {
    unsigned int index;
    float offset;
} CDStruct_3f2a7a20;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
} CDStruct_39925896;

typedef struct {
    float _field1;
    float _field2;
} CDStruct_b2fbf00d;

typedef struct {
    long long context;
    double distance;
    _Bool usePrimaryName;
    _Bool useSecondaryName;
    _Bool useDistanceForSecondary;
    _Bool useContinueForSecondary;
    int numPrimarySigns;
    int numSecondarySigns;
} CDStruct_61a83fd4;

typedef struct {
    int _field1;
    struct {
        double _field1;
        double _field2;
    } _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    int _field11;
    double _field12;
    int _field13;
    struct {
        double _field1;
        double _field2;
    } _field14;
    double _field15;
    int _field16;
    unsigned int _field17;
    int _field18;
    int _field19;
    int _field20;
} CDStruct_88736aa7;

typedef struct {
    struct {
        id _field1;
        char *_field2;
        unsigned long long _field3;
        unsigned long long _field4;
        unsigned long long _field5;
        unsigned long long _field6;
        unsigned int _field7;
        unsigned long long _field8;
        _Bool _field9;
        unsigned long long _field10;
        float _field11;
        unsigned long long _field12;
        id _field13;
        int _field14;
    } _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    int _field4;
    int _field5;
    int _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    union {
        struct {
            CDStruct_b2fbf00d _field1;
            CDStruct_b2fbf00d _field2;
        } _field1;
        struct {
            float _field1;
            float _field2;
            float _field3;
            float _field4;
        } _field2;
    } _field9;
    struct *_field10;
    struct {
        unsigned short _field1[2];
        unsigned short _field2[2];
    } _field11;
    unsigned char _field12;
    _Bool _field13;
    unsigned char _field14;
    _Bool _field15;
    _Bool _field16;
    unsigned char _field17;
    _Bool _field18;
    unsigned short _field19;
    struct _NSRange _field20;
    _Bool _field21;
    unsigned int _field22;
} CDStruct_123780e2;

// Ambiguous groups
typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;

typedef struct {
    double remainingTime;
    double remainingDistance;
} CDStruct_a70066d4;

typedef struct LineSegment<double, 2> {
    Matrix_2bdd42a3 _origin;
    Matrix_2bdd42a3 _direction;
} LineSegment_ede69d4d;

typedef struct Matrix<double, 2, 1> {
    double _e[2];
} Matrix_2bdd42a3;

/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class MISSING_TYPE;

typedef void (^CDUnknownBlockType)(void);

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CGVector {
    double dx;
    double dy;
};

struct NSDirectionalEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct NSHashTable {
    Class _field1;
};

struct NSMutableDictionary {
    Class _field1;
};

struct NSObject {
    Class _field1;
};

struct NSString {
    Class _field1;
};

struct PHDisplayVelocity {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct PUAlbumListCellContentView {
    Class _field1;
};

struct PUBarAnimationSettings {
    long long _field1;
    double _field2;
};

struct PUDisplayVelocity {
    double x;
    double y;
    double scale;
    double rotation;
};

struct PUFeedSeparatorMetrics {
    struct CGSize _field1;
    struct UIEdgeInsets _field2;
};

struct PUGridCoordinates {
    long long row;
    long long column;
};

struct PUSimpleIndexPath {
    long long _field1;
    long long _field2;
};

struct PXAssetBadgeInfo {
    unsigned long long badges;
    double duration;
    long long count;
};

struct PXAssetMediaTypeCount {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
};

struct PXDisplayVelocity {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct PXSimpleIndexPath {
    unsigned long long dataSourceIdentifier;
    long long section;
    long long item;
    long long subitem;
};

struct TransformMetadataItemPair {
    id _field1;
    id _field2;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIOffset {
    double horizontal;
    double vertical;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _PUSectionedTilingLayoutSectionInfo {
    _Bool _field1;
    long long _field2;
    struct CGRect _field3;
};

typedef struct {
    _Bool isEnabled;
    double startTime;
    double endTime;
} CDStruct_3139860e;

typedef struct {
    MISSING_TYPE *columns[3];
} CDStruct_8e0628e6;

typedef struct {
    double left;
    double right;
    double top;
    double bottom;
} CDStruct_6c514524;

typedef struct {
    long long privateInteger;
    float privateFloat;
} CDStruct_910f5d27;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    CDStruct_1b6d18a9 start;
    CDStruct_1b6d18a9 duration;
} CDStruct_e83c9415;

typedef struct {
    struct CGSize _field1;
    unsigned long long _field2;
} CDStruct_5706cf93;

typedef struct {
    struct CGRect _field1;
    struct CGPoint _field2;
    struct CGAffineTransform _field3;
} CDStruct_d54ccef3;

// Ambiguous groups
typedef struct {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
} CDStruct_2a4d9400;

typedef struct {
    _Bool excludeLiveness;
    _Bool excludeLocation;
    _Bool includeAllOriginalResources;
} CDStruct_7f880b36;

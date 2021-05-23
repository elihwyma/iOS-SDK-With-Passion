/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

typedef void (^CDUnknownBlockType)(void);

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

struct NSDirectionalEdgeInsets {
    double top;
    double leading;
    double bottom;
    double trailing;
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

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

typedef struct {
    unsigned int _hasManagedAccounts:1;
    unsigned int _hasUnmanagedAccounts:1;
} CDStruct_9a98c240;

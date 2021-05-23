/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
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

struct CNPair {
    Class _field1;
    id _field2;
    id _field3;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

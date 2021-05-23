/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

typedef void (*CDUnknownFunctionPointerType)(void);
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

struct ReaderAvailabilityController;

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct WebProcessPlugInReaderJSController;

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct unique_ptr<SafariServices::ReaderAvailabilityController, std::__1::default_delete<SafariServices::ReaderAvailabilityController>> {
    struct __compressed_pair<SafariServices::ReaderAvailabilityController *, std::__1::default_delete<SafariServices::ReaderAvailabilityController>> {
        struct ReaderAvailabilityController *__value_;
    } __ptr_;
};

struct unique_ptr<SafariServices::WebProcessPlugInReaderJSController, std::__1::default_delete<SafariServices::WebProcessPlugInReaderJSController>> {
    struct __compressed_pair<SafariServices::WebProcessPlugInReaderJSController *, std::__1::default_delete<SafariServices::WebProcessPlugInReaderJSController>> {
        struct WebProcessPlugInReaderJSController *__value_;
    } __ptr_;
};

typedef struct {
    id foregroundNotificationObserver;
    id backgroundNotificationObserver;
    _Bool needsDeferredContentUpdate;
    _Bool sceneIsForeground;
} CDStruct_4e0a34f2;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    int _field1;
    unsigned long long _field2;
} CDStruct_fca5f1f5;

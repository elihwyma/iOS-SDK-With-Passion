/*
 Image: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HSHIDDevice : NSObject

{
    unsigned char _reportCallbackBuffer[16384];
    _Bool _active;
    _Bool _cancelled;
    struct __IOHIDDevice *_deviceRef;
    CDUnknownBlockType _deviceRemovedCallback;
    CDUnknownBlockType _inputReportCallback;
}

@property (nonatomic) struct __IOHIDDevice *deviceRef;
@property (copy, nonatomic) CDUnknownBlockType deviceRemovedCallback;
@property (copy, nonatomic) CDUnknownBlockType inputReportCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)valueForProperty:(struct __CFString *)arg1;
- (_Bool)setValue:(id)arg1 forProperty:(struct __CFString *)arg2;
- (id)initWithService:(unsigned int)arg1;
- (_Bool)open:(id *)arg1;
- (_Bool)close:(id *)arg1;
- (id)initWithDeviceRef:(struct __IOHIDDevice *)arg1;
- (_Bool)_setReportWithID:(long long)arg1 type:(int)arg2 data:(id)arg3 error:(id *)arg4;
- (_Bool)setOutputReportWithID:(long long)arg1 data:(id)arg2 error:(id *)arg3;
- (_Bool)setFeatureReportWithID:(long long)arg1 data:(id)arg2 error:(id *)arg3;
- (id)featureReportWithID:(long long)arg1 error:(id *)arg2;
- (void)scheduleWithRunLoop:(struct __CFRunLoop *)arg1 mode:(const struct __CFString *)arg2;
- (void)unscheduleFromRunLoop:(struct __CFRunLoop *)arg1 mode:(struct __CFString *)arg2;

@end

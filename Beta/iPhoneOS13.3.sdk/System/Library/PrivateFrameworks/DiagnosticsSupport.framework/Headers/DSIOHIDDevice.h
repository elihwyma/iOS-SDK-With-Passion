/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

#import <Foundation/NSObject.h>

@interface DSIOHIDDevice : NSObject

{
    struct __IOHIDManager *_manager;
    struct __IOHIDDevice *_device;
}

+ (id)deviceWithDeviceIdentifier:(CDStruct_7523a67d)arg1;

- (void)dealloc;
- (id)serialNumber;
- (id)_sharedSerialQueue;
- (id)initWithDeviceIdentifier:(CDStruct_7523a67d)arg1;
- (id)stringFromHIDReport:(long long)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@interface AKPeripheralAvailabilityManager_iOS : NSObject

{
    struct __IOHIDManager *stylusHidManager;
    unsigned long long _currentAvailability;
}

@property unsigned long long currentAvailability;

+ (_Bool)onlyDrawWithApplePencil;

- (id)init;
- (void)dealloc;
- (void)teardown;
- (void)stopMonitoringForPeripheralConnection;
- (void)postConnectionStatusNotification;
- (void)startMonitoringForPeripheralConnection;

@end

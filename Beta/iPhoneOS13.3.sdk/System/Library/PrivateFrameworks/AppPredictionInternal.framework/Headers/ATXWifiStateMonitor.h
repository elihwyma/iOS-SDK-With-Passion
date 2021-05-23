/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@protocol OS_dispatch_queue;

@interface ATXWifiStateMonitor : NSObject

{
    struct __WiFiManagerClient *_manager;
    struct __WiFiDeviceClient *_device;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_lastSeenSSID;
    NSDate *_lastSeenDate;
    _Bool _isActive;
}

@property (nonatomic, readonly) NSString *SSID;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_start;

@end

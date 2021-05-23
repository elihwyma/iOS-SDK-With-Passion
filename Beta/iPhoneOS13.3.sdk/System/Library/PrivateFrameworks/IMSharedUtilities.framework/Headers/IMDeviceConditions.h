/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@interface IMDeviceConditions : NSObject

@property (readonly) _Bool isDeviceCharging;
@property (readonly) _Bool isDeviceOnWifi;

+ (id)sharedInstance;

- (id)_mobileNetworkManager;
- (id)_batteryStatus;

@end

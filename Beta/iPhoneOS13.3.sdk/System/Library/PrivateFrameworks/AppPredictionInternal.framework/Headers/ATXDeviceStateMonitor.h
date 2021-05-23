/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface ATXDeviceStateMonitor : NSObject

+ (_Bool)airplaneMode;
+ (void)setAirplaneMode:(_Bool)arg1;
+ (id)SSID;
+ (_Bool)onWifi;
+ (void)startMockingSystem;
+ (void)stopMockingSystem;
+ (void)setSSID:(id)arg1;

@end

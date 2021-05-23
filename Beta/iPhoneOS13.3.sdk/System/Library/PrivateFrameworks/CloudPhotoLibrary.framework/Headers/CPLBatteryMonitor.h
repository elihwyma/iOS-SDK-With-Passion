/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@interface CPLBatteryMonitor : NSObject

+ (void)_updateBatteryWithBatteryEntry:(unsigned int)arg1;
+ (void)startMonitoringPowerEvents;
+ (id)powerStatus;

@end

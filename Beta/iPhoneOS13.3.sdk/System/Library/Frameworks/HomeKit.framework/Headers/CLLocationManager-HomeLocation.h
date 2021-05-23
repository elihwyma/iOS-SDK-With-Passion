/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <CoreLocation/CLLocationManager.h>

@interface CLLocationManager (HomeLocation)

+ (id)referenceFrameDescription:(int)arg1;
+ (_Bool)convertAuthStatusToBool:(int)arg1;
+ (id)locationAuthorizationDescription:(int)arg1;
+ (id)regionStateDescription:(long long)arg1;
+ (id)regionDescription:(id)arg1;
+ (int)convertToHMDLocationAuthorization:(int)arg1;
+ (id)hmdLocationAuthorizationAsString:(int)arg1;
+ (int)convertToHMDRegionState:(long long)arg1;
+ (id)hmdRegionStateAsString:(int)arg1;

@end

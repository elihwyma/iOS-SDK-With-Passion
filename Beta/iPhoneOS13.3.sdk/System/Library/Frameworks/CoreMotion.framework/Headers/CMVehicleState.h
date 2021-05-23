/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@interface CMVehicleState : NSObject

+ (_Bool)isAvailable;
+ (id)mostRecentVehicleConnection;
+ (id)mostRecentInVehicle;
+ (unsigned long long)isVehicleBasedOnDeviceId:(id)arg1 deviceType:(int)arg2;
+ (unsigned long long)vehicularState;
+ (unsigned long long)vehicularHints;
+ (unsigned long long)vehicularOperatorState;

@end

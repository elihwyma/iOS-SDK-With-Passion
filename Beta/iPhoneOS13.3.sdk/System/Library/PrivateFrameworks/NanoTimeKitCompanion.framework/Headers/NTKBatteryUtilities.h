/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@interface NTKBatteryUtilities : NSObject

+ (id)colorForLevel:(float)arg1 andState:(long long)arg2;
+ (id)modularRingColorForLevel:(float)arg1;
+ (id)chargingStringForState:(long long)arg1 longText:(_Bool)arg2;
+ (_Bool)chargingForState:(long long)arg1;
+ (id)chargingStringForState:(long long)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@interface MCBatterySaverMode : NSObject

+ (_Bool)isBatterySaverModeActive;
+ (id)batterySaverRestrictions;
+ (_Bool)isBatterySaverModeActive:(int)arg1;
+ (id)currentBatterySaverRestrictions;
+ (id)currentBatterySaverRestrictions:(int)arg1;
+ (id)setOfActiveRestrictionUUIDs;

@end

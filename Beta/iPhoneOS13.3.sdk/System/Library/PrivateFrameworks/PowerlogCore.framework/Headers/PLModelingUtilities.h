/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@interface PLModelingUtilities : NSObject

+ (_Bool)internalBuild;
+ (_Bool)isHomePod;
+ (double)defaultBatteryEnergyCapacity;
+ (double)duetDiscretionaryBudget;
+ (_Bool)isiPhone;
+ (_Bool)isiPad;
+ (_Bool)isWatch;
+ (_Bool)isMac;
+ (id)valueForMobileGestaltCapability:(id)arg1;
+ (_Bool)isiPod;
+ (_Bool)shouldShowBatteryGraphs;
+ (_Bool)carrierBuild;
+ (_Bool)alsCurveHigherThanDefault;
+ (double)networkingEnergyWithBytes:(int)arg1 withDuration:(double)arg2;
+ (_Bool)isPercentageSupported;
+ (_Bool)isLowPowerModeSupported;
+ (_Bool)isNarrowScreen;
+ (_Bool)isHeySiriAlwaysOn;

@end

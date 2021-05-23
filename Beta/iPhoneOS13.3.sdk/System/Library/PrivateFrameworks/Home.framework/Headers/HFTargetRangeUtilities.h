/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@interface HFTargetRangeUtilities : NSObject

+ (id)targetRelativePercentValueWithTargetMode:(unsigned long long)arg1 currentMode:(unsigned long long)arg2 rawTargetResponse:(id)arg3 minimumThresholdResponse:(id)arg4 maximumThresholdResponse:(id)arg5;
+ (unsigned long long)rangeModeForTargetHumidifierDehumidifierState:(long long)arg1;
+ (unsigned long long)rangeModeForCurrentHumidifierDehumidifierState:(long long)arg1;
+ (id)targetValueForService:(id)arg1 valueProvider:(CDUnknownBlockType)arg2;
+ (id)targetRelativePercentValueWithTargetMode:(unsigned long long)arg1 currentMode:(unsigned long long)arg2 rawTargetRelativePercentValue:(id)arg3 minimumThresholdRelativePercentValue:(id)arg4 maximumThresholdRelativePercentValue:(id)arg5;
+ (unsigned long long)rangeModeForHeatingCoolingMode:(long long)arg1;
+ (unsigned long long)rangeModeForTargetHeaterCoolerState:(long long)arg1;
+ (unsigned long long)rangeModeForCurrentHeaterCoolerState:(long long)arg1;
+ (id)targetValueWithTargetMode:(unsigned long long)arg1 currentMode:(unsigned long long)arg2 rawTargetResponse:(id)arg3 minimumThresholdResponse:(id)arg4 maximumThresholdResponse:(id)arg5;

@end

/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLMultiKeyEntry.h>

@class NSArray;

@interface PLEventForwardPowerStateEntry : PLMultiKeyEntry

@property (readonly) short state;
@property (readonly) short event;
@property (readonly) NSArray *reason;
@property (readonly) _Bool isBasebandWake;

+ (void)load;
+ (id)entryKey;

- (id)initEntryWithState:(short)arg1 withEvent:(short)arg2 withReason:(id)arg3 withKernelSleepDate:(id)arg4 withDate:(id)arg5;
- (id)initEntryWithState:(short)arg1 withEvent:(short)arg2 withReason:(id)arg3 withCurrentMachWakeTime:(unsigned long long)arg4 withDate:(id)arg5;
- (id)initEntryWithState:(short)arg1 withEvent:(short)arg2 withReason:(id)arg3 withDate:(id)arg4;
- (id)initEntryWithIOMessage:(unsigned int)arg1;
- (id)initEntryWithState:(short)arg1 withEvent:(short)arg2 withReason:(id)arg3 withCurrentKernelWakeTime:(unsigned long long)arg4 withCapabilities:(unsigned int)arg5 withWakeTriggerSubclass:(id)arg6 withDate:(id)arg7;

@end

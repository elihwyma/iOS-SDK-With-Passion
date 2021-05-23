/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMTimerTrigger.h>

@class NSString;

@interface HMTimerTrigger (HFTimerTriggerAdditions)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)hf_naturalLanguageNameWithHome:(id)arg1 fireDate:(id)arg2 recurrences:(id)arg3 type:(unsigned long long)arg4;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 significantEvent:(id)arg2 offset:(id)arg3 recurrences:(id)arg4 type:(unsigned long long)arg5;
+ (id)_hf_naturalLanguageNameWithHome:(id)arg1 timeString:(id)arg2 fireDate:(id)arg3 recurrences:(id)arg4 type:(unsigned long long)arg5;

- (id)hf_naturalLanguageNameWithHome:(id)arg1 type:(unsigned long long)arg2;
- (unsigned long long)hf_triggerType;

@end

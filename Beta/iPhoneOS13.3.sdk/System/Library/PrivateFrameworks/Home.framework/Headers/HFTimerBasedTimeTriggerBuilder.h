/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFConcreteTimeTriggerBuilder.h>

@interface HFTimerBasedTimeTriggerBuilder : HFConcreteTimeTriggerBuilder

- (id)_updateTimeZone;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (void)_setupWithExistingTrigger:(id)arg1;
- (id)_updateRecurrences;

@end

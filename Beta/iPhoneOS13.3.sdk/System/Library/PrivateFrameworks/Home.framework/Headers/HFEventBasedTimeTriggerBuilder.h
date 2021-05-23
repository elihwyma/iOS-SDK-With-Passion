/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFConcreteTimeTriggerBuilder.h>

@class NSSet;

@interface HFEventBasedTimeTriggerBuilder : HFConcreteTimeTriggerBuilder

{
    NSSet *_stagedEvents;
}

@property (retain, nonatomic) NSSet *stagedEvents;

- (void)setRecurrences:(id)arg1;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)_updateEvents;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (void)_setupWithExistingTrigger:(id)arg1;
- (id)_updateRecurrences;
- (id)_updateExecuteOnce;

@end

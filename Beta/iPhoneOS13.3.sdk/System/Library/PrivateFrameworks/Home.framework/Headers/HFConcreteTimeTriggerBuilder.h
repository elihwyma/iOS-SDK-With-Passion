/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemBuilder.h>

@class HFEventBuilder, HMTrigger, NSArray, NSString, NSTimeZone;

@protocol HFTimeEventBuilder;

@interface HFConcreteTimeTriggerBuilder : HFItemBuilder

{
    NSString *_name;
    HFEventBuilder<HFTimeEventBuilder> *_eventBuilder;
    NSArray *_recurrences;
    NSTimeZone *_timeZone;
}

@property (retain, nonatomic) HMTrigger *trigger;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HFEventBuilder<HFTimeEventBuilder> *eventBuilder;
@property (copy, nonatomic) NSArray *recurrences;
@property (copy, nonatomic) NSTimeZone *timeZone;

+ (id)builderForExistingTrigger:(id)arg1 inHome:(id)arg2;

- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)commitItem;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (void)copyCurrentStateFromTriggerBuilder:(id)arg1;
- (void)triggerEnabledStateDidChange:(_Bool)arg1;

@end

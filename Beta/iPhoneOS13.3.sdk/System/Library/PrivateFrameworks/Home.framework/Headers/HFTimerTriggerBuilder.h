/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFTriggerBuilder.h>

@class HFConcreteTimeTriggerBuilder, HFEventBuilder, NSArray, NSTimeZone;

@protocol HFTimeEventBuilder;

@interface HFTimerTriggerBuilder : HFTriggerBuilder

{
    unsigned long long _preferredHomeKitObjectType;
    HFConcreteTimeTriggerBuilder *_concreteTriggerBuilder;
}

@property (retain, nonatomic) HFConcreteTimeTriggerBuilder *concreteTriggerBuilder;
@property (retain, nonatomic) HFEventBuilder<HFTimeEventBuilder> *eventBuilder;
@property (copy, nonatomic) NSArray *recurrences;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) unsigned long long preferredHomeKitObjectType;

- (void)setEnabled:(_Bool)arg1;
- (void)setName:(id)arg1;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2 context:(id)arg3;
- (id)_performValidation;
- (_Bool)supportsConditions;
- (_Bool)supportsEndEvents;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1;
- (void)_createConcreteTriggerBuilder;
- (_Bool)_supportsEventBasedTimeTriggers;
- (_Bool)_currentStateRequiresEventBasedTimeTriggers;

@end

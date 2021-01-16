//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFTriggerBuilder.h>

@class NSMutableSet, NSSet;

@interface HFCharacteristicTriggerBuilder : HFTriggerBuilder
{
    BOOL _markTriggerAsHomeAppCreated;
    NSMutableSet *_triggerEvents;
}

@property(retain, nonatomic) NSMutableSet *triggerEvents; // @synthesize triggerEvents=_triggerEvents;
@property(nonatomic) BOOL markTriggerAsHomeAppCreated; // @synthesize markTriggerAsHomeAppCreated=_markTriggerAsHomeAppCreated;
// - (void).cxx_destruct;
- (id)_lazilyMarkTriggerAsHomeAppCreated;
- (id)_allTriggerValuesForCharacteristic:(id)arg1 similarToValue:(id)arg2;
- (id)_performValidation;
- (id)_updateEvents;
- (id)thresholdValueForCharacteristic:(id)arg1 thresholdValueRange:(id)arg2;
- (BOOL)wouldFireForCharacteristic:(id)arg1 value:(id)arg2;
@property(readonly, nonatomic) NSSet *characteristics;
- (id)_existingEventsForCharacteristic:(id)arg1;
- (void)removeAllCharacteristics;
- (void)removeCharacteristic:(id)arg1;
- (void)setCharacteristic:(id)arg1 triggerValueRange:(id)arg2;
- (void)setCharacteristic:(id)arg1 triggerValue:(id)arg2;
- (id)deleteTrigger;
- (id)commitItem;
- (id)naturalLanguageNameOfType:(NSUInteger)arg1;
- (id)commitEditTrigger;
- (id)commitCreateTrigger;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2 context:(id)arg3;
- (BOOL)supportsEndEvents;
- (BOOL)supportsConditions;

@end

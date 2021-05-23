/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFTriggerBuilder.h>

@class NSMutableSet, NSSet;

@interface HFCharacteristicTriggerBuilder : HFTriggerBuilder

{
    _Bool _markTriggerAsHomeAppCreated;
    NSMutableSet *_triggerEvents;
}

@property (retain, nonatomic) NSMutableSet *triggerEvents;
@property (nonatomic, readonly) NSSet *characteristics;
@property (nonatomic) _Bool markTriggerAsHomeAppCreated;

- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2 context:(id)arg3;
- (id)_performValidation;
- (id)_updateEvents;
- (id)_lazilyMarkTriggerAsHomeAppCreated;
- (id)commitItem;
- (void)removeCharacteristic:(id)arg1;
- (id)_allTriggerValuesForCharacteristic:(id)arg1 similarToValue:(id)arg2;
- (id)_existingEventsForCharacteristic:(id)arg1;
- (_Bool)supportsConditions;
- (_Bool)supportsEndEvents;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1;
- (id)deleteTrigger;
- (void)setCharacteristic:(id)arg1 triggerValue:(id)arg2;
- (void)setCharacteristic:(id)arg1 triggerValueRange:(id)arg2;
- (void)removeAllCharacteristics;
- (_Bool)wouldFireForCharacteristic:(id)arg1 value:(id)arg2;
- (id)thresholdValueForCharacteristic:(id)arg1 thresholdValueRange:(id)arg2;

@end

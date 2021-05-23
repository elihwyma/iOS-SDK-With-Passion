/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItem.h>

@class HMCharacteristic, HMNumberRange, NSArray, NSNumber, NSSet;

@protocol NSCopying;

@interface HUCharacteristicEventOptionItem : HFItem

{
    NSSet *_characteristics;
    id <NSCopying> _triggerValue;
    HMNumberRange *_triggerValueRange;
    HMNumberRange *_thresholdValueRange;
    HUCharacteristicEventOptionItem *_childItem;
    NSNumber *_thresholdValue;
}

@property (nonatomic, readonly) NSSet *characteristics;
@property (copy, nonatomic, readonly) HMCharacteristic *mainCharacteristic;
@property (copy, nonatomic, readonly) id <NSCopying> triggerValue;
@property (copy, nonatomic, readonly) HMNumberRange *triggerValueRange;
@property (copy, nonatomic, readonly) HMNumberRange *thresholdValueRange;
@property (retain, nonatomic) HUCharacteristicEventOptionItem *childItem;
@property (retain, nonatomic) NSNumber *thresholdValue;
@property (copy, nonatomic, readonly) HMNumberRange *triggerValueRangeByApplyingThreshold;
@property (copy, nonatomic, readonly) NSArray *validTriggerValues;
@property (nonatomic, readonly) id representativeTriggerValue;

- (id)init;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithCharacteristics:(id)arg1 triggerValue:(id)arg2;
- (id)initWithCharacteristics:(id)arg1 triggerValueRange:(id)arg2;
- (id)initWithCharacteristics:(id)arg1 thresholdValueRange:(id)arg2;
- (_Bool)isValidThresholdValue:(id)arg1;
- (id)localizedDescriptionForThresholdValue:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUCharacteristicEventOptionItem.h>

@class HMCharacteristic;

@protocol HFCharacteristicValueSource;

@interface HUProgrammableSwitchEventOptionItem : HUCharacteristicEventOptionItem

{
    id <HFCharacteristicValueSource> _valueSource;
}

@property (retain, nonatomic) id <HFCharacteristicValueSource> valueSource;
@property (nonatomic, readonly) HMCharacteristic *characteristic;

+ (id)_buildOutTriggerEditorOptionsForCharacteristic:(id)arg1 triggerValue:(id)arg2 latestResults:(id)arg3;
+ (id)_shortformTitleForLatestResults:(id)arg1;
+ (id)_sectionTitleForCharacteristic:(id)arg1 latestResults:(id)arg2;
+ (id)_triggerBuilderContextAwareTitleForCharacteristic:(id)arg1 latestResults:(id)arg2;
+ (id)_longformTitleForCharacteristic:(id)arg1 latestResults:(id)arg2;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithCharacteristics:(id)arg1 triggerValue:(id)arg2;
- (id)initWithCharacteristics:(id)arg1 triggerValueRange:(id)arg2;
- (id)initWithCharacteristics:(id)arg1 thresholdValueRange:(id)arg2;
- (id)initWithCharacteristic:(id)arg1 triggerValue:(id)arg2 valueSource:(id)arg3;

@end

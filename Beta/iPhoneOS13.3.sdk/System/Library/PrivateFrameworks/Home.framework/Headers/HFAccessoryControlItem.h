/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFControlItem.h>

@class HMAccessory;

@interface HFAccessoryControlItem : HFControlItem

{
    HMAccessory *_accessory;
}

@property (nonatomic, readonly) HMAccessory *accessory;

+ (Class)valueClass;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (_Bool)supportsItemRepresentingServices:(id)arg1;
- (id)normalizedValueForValue:(id)arg1;
- (id)initWithValueSource:(id)arg1 parentAccessory:(id)arg2 displayResults:(id)arg3;

@end

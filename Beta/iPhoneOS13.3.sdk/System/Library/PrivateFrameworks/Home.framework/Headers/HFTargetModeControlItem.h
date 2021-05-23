/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFMultiStateControlItem.h>

#import <Home/Swift-Protocol.h>

@class HFMultiStateValueSet, HFPowerStateControlItem, NSString;

@interface HFTargetModeControlItem : HFMultiStateControlItem <Swift>

{
    NSString *_targetModeCharacteristicType;
    HFMultiStateValueSet *_targetModeValueSet;
    HFPowerStateControlItem *_primaryPowerStateControlItem;
}

@property (nonatomic, readonly) NSString *targetModeCharacteristicType;
@property (nonatomic, readonly) HFMultiStateValueSet *targetModeValueSet;
@property (nonatomic, readonly) HFPowerStateControlItem *primaryPowerStateControlItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)updateWithOptions:(id)arg1;
- (id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 possibleValueSet:(id)arg3 displayResults:(id)arg4;
- (id)toggleValue;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)initWithValueSource:(id)arg1 targetModeCharacteristicType:(id)arg2 targetModeValueSet:(id)arg3 primaryPowerStateControlItem:(id)arg4 displayResults:(id)arg5;

@end

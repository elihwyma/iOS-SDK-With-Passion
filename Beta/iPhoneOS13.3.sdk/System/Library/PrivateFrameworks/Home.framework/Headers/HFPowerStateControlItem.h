/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFPrimaryStateControlItem.h>

@class NSSet, NSString;

@interface HFPowerStateControlItem : HFPrimaryStateControlItem

{
    NSSet *_auxiliaryTargetValueTuples;
}

@property (nonatomic, readonly) NSSet *auxiliaryTargetValueTuples;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)valueClass;
+ (id)_powerStateTargetValues;

- (id)initWithValueSource:(id)arg1 displayResults:(id)arg2;
- (id)initWithValueSource:(id)arg1 auxiliaryTargetValueTuples:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 auxiliaryTargetValueTuples:(id)arg2 additionalCharacteristicOptions:(id)arg3 displayResults:(id)arg4;
- (id)toggleValue;
- (id)writePrimaryState:(long long)arg1;
- (id)_allTargetValues;
- (id)togglePrimaryState;
- (id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3;
- (_Bool)canCopyWithCharacteristicOptions:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (_Bool)supportsItemRepresentingServices:(id)arg1;

@end

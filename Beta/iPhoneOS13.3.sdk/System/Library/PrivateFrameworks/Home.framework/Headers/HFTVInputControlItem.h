/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFControlItem.h>

@class NSArray;

@interface HFTVInputControlItem : HFControlItem

{
    NSArray *_inputs;
}

@property (copy, nonatomic, readonly) NSArray *inputs;

+ (Class)valueClass;
+ (id)inputCharacteristicTypes;
+ (id)readOnlyOptionalInputCharacteristicTypes;
+ (CDUnknownBlockType)_inputSourceValueComparatorForTelevisionProfile:(id)arg1;

- (id)initWithValueSource:(id)arg1 displayResults:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)writeValue:(id)arg1;
- (id)readValueAndPopulateStandardResults;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (_Bool)supportsItemRepresentingServices:(id)arg1;
- (id)valueForCharacteristicType:(id)arg1 inBatchReadResponse:(id)arg2;

@end

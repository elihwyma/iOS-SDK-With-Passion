/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFControlItem.h>

@class HFNumberValueConstraints, NSNumber, NSSet, NSString;

@interface HFRangeControlItem : HFControlItem

{
    NSSet *_targetCharacteristicTypes;
    NSString *_minimumCharacteristicType;
    NSString *_maximumCharacteristicType;
}

@property (copy, nonatomic, readonly) NSSet *targetCharacteristicTypes;
@property (copy, nonatomic, readonly) NSString *minimumCharacteristicType;
@property (copy, nonatomic, readonly) NSString *maximumCharacteristicType;
@property (nonatomic, readonly) HFNumberValueConstraints *minimumValueConstraints;
@property (nonatomic, readonly) HFNumberValueConstraints *maximumValueConstraints;
@property (nonatomic, readonly) HFNumberValueConstraints *targetValueConstraints;
@property (copy, nonatomic, readonly) NSNumber *maximumValue;
@property (copy, nonatomic, readonly) NSNumber *minimumValue;
@property (copy, nonatomic, readonly) NSNumber *stepValue;

+ (Class)valueClass;
+ (id)readOnlyCharacteristicTypes;
+ (_Bool)_hasWritableCharacteristicsOfType:(id)arg1 valueSource:(id)arg2;

- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)resultsForBatchReadResponse:(id)arg1;
- (id)initWithValueSource:(id)arg1 targetCharacteristicTypes:(id)arg2 minimumCharacteristicType:(id)arg3 maximumCharacteristicType:(id)arg4 displayResults:(id)arg5;
- (id)targetCharacteristicTypeWithCharacteristicValuesKeyedByType:(id)arg1;
- (unsigned long long)rangeModeWithCharacteristicValuesKeyedByType:(id)arg1;
- (id)numberValueFormatter;
- (id)_minimumCharacteristicTypeMetadata;
- (id)_maximumCharacteristicTypeMetadata;
- (id)_targetCharacteristicTypeMetadataWithCharacteristicValuesKeyedByType:(id)arg1;
- (id)minimumCharacteristicTypeStepValue;
- (id)maximumCharacteristicTypeStepValue;

@end

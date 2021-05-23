/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

#import <Home/Swift-Protocol.h>

@class HFControlItemCharacteristicOptions, NSDictionary, NSSet, NSString;

@protocol HFAggregatedCharacteristicValueSource;

@interface HFControlItem : HFItem <Swift>

{
    id <HFAggregatedCharacteristicValueSource> _valueSource;
    HFControlItemCharacteristicOptions *_characteristicOptions;
    NSDictionary *_displayResults;
}

@property (copy, nonatomic, readonly) NSDictionary *displayResults;
@property (nonatomic, readonly) id <HFAggregatedCharacteristicValueSource> valueSource;
@property (nonatomic, readonly) HFControlItemCharacteristicOptions *characteristicOptions;
@property (nonatomic, readonly) long long sortPriority;
@property (nonatomic, readonly) NSSet *characteristicTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)valueClass;
+ (id)na_identity;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_tintColor;
- (id)copyWithValueSource:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)metadataForCharacteristicType:(id)arg1;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)writeValue:(id)arg1;
- (id)readValueAndPopulateStandardResults;
- (id)normalizedCharacteristicValuesForValues:(id)arg1;
- (id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3;
- (_Bool)canCopyWithCharacteristicOptions:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (_Bool)supportsItemRepresentingServices:(id)arg1;
- (id)valueForCharacteristicType:(id)arg1 inBatchReadResponse:(id)arg2;
- (id)normalizedValueForValue:(id)arg1;
- (id)servicePredicateForCharacteristicType:(id)arg1 withUsage:(unsigned long long)arg2;
- (id)resultsForBatchReadResponse:(id)arg1;
- (id)characteristicValuesByTypeForBatchReadResponse:(id)arg1;
- (id)_standardResultsForResultValue:(id)arg1 characteristicValuesByType:(id)arg2;
- (id)normalizedValueForCharacteristicValue:(id)arg1 ofType:(id)arg2;
- (id)_descriptionWithCharacteristicOptions:(_Bool)arg1 includeResults:(_Bool)arg2;
- (long long)_primaryStateForValue:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFControlItem.h>

@class NSNumber, NSString;

@interface HFSimpleIncrementalControlItem : HFControlItem

{
    NSString *_incrementalCharacteristicType;
}

@property (copy, nonatomic, readonly) NSString *incrementalCharacteristicType;
@property (nonatomic, readonly) NSNumber *minValue;
@property (nonatomic, readonly) NSNumber *maxValue;
@property (nonatomic, readonly) NSNumber *stepValue;

+ (Class)valueClass;

- (id)_metadata;
- (id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)writeValue:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;

@end

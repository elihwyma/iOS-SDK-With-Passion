/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFControlItem.h>

@class HFMultiStateValueSet, NSString;

@interface HFMultiStateControlItem : HFControlItem

{
    NSString *_multiStateCharacteristicType;
    HFMultiStateValueSet *_possibleValueSet;
}

@property (copy, nonatomic, readonly) NSString *multiStateCharacteristicType;
@property (copy, nonatomic, readonly) HFMultiStateValueSet *possibleValueSet;

+ (Class)valueClass;
+ (id)na_identity;

- (id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 possibleValueSet:(id)arg3 displayResults:(id)arg4;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)initWithValueSource:(id)arg1 multiStateCharacteristicType:(id)arg2 allCharacteristicOptions:(id)arg3 possibleValueSet:(id)arg4 displayResults:(id)arg5;

@end

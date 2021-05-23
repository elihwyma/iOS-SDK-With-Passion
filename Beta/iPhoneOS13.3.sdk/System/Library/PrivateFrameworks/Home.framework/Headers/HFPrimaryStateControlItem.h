/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFControlItem.h>

@class HFValueTransformer, NSString;

@interface HFPrimaryStateControlItem : HFControlItem

{
    NSString *_primaryStateCharacteristicType;
    HFValueTransformer *_valueTransformer;
}

@property (copy, nonatomic, readonly) NSString *primaryStateCharacteristicType;
@property (nonatomic, readonly) HFValueTransformer *valueTransformer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)valueClass;

- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)writeValue:(id)arg1;
- (id)toggleValue;
- (id)writePrimaryState:(long long)arg1;
- (id)togglePrimaryState;
- (_Bool)canCopyWithCharacteristicOptions:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 valueTransformer:(id)arg3 displayResults:(id)arg4;

@end

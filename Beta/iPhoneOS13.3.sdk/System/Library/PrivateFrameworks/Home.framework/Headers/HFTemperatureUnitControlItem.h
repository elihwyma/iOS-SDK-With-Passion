/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFControlItem.h>

@class NSString;

@interface HFTemperatureUnitControlItem : HFControlItem

{
    NSString *_temperatureUnitCharacteristicType;
}

@property (copy, nonatomic, readonly) NSString *temperatureUnitCharacteristicType;

+ (Class)valueClass;

- (id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;

@end

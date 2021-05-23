/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFRangeControlItem.h>

@interface HFHumidifierDehumidifierThresholdControlItem : HFRangeControlItem

+ (id)readOnlyCharacteristicTypes;

- (id)initWithValueSource:(id)arg1 displayResults:(id)arg2;
- (id)targetCharacteristicTypeWithCharacteristicValuesKeyedByType:(id)arg1;
- (unsigned long long)rangeModeWithCharacteristicValuesKeyedByType:(id)arg1;
- (id)numberValueFormatter;

@end

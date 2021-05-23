/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFIncrementalStateControlItem.h>

@interface HFLightbulbControlItem : HFIncrementalStateControlItem

+ (id)optionsForPrimaryStateControlItem:(id)arg1 incrementalCharacteristicType:(id)arg2;
+ (id)readOnlyCharacteristicTypes;

- (id)readValueAndPopulateStandardResults;
- (id)_tintColorFromResults:(id)arg1;
- (_Bool)supportsRGBColor;

@end

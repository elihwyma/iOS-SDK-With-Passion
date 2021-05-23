/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFControlItem.h>

@class HFHomeKitSettingsValueManager;

@protocol HFMediaProfileContainer;

@interface HFHomePodAlarmControlItem : HFControlItem

{
    id <HFMediaProfileContainer> _mediaProfileContainer;
}

@property (nonatomic, readonly) HFHomeKitSettingsValueManager *valueManager;
@property (nonatomic, readonly) id <HFMediaProfileContainer> mediaProfileContainer;

+ (Class)valueClass;

- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)readValueAndPopulateStandardResults;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)initWithMediaProfileContainer:(id)arg1 displayResults:(id)arg2;
- (id)normalizedValueForValue:(id)arg1;

@end

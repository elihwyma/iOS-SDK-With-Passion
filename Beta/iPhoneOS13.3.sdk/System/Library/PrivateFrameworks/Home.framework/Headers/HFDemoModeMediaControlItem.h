/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFControlItem.h>

#import <Home/Swift-Protocol.h>

@class HFNullValueSource, HMAccessory, NSString;

@interface HFDemoModeMediaControlItem : HFControlItem <Swift>

{
    HFNullValueSource *_mediaValueSource;
    HMAccessory *_accessory;
}

@property (nonatomic, readonly) HFNullValueSource *mediaValueSource;
@property (weak, nonatomic) HMAccessory *accessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)valueClass;

- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)toggleValue;
- (id)readValueAndPopulateStandardResults;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)normalizedValueForValue:(id)arg1;
- (id)initWithDisplayResults:(id)arg1;

@end

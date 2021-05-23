/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFControlItem.h>

#import <Home/Swift-Protocol.h>

@class HFMediaActionSetting, NSString;

@protocol HFMediaProfileContainer, HFMediaValueSource;

@interface HFMediaControlItem : HFControlItem <Swift>

{
    id <HFMediaValueSource> _mediaValueSource;
    id <HFMediaProfileContainer> _mediaProfileContainer;
    long long _mediaAccessoryItemType;
    HFMediaActionSetting *_mediaActionSetting;
}

@property (nonatomic, readonly) id <HFMediaValueSource> mediaValueSource;
@property (nonatomic, readonly) id <HFMediaProfileContainer> mediaProfileContainer;
@property (nonatomic, readonly) long long mediaAccessoryItemType;
@property (retain, nonatomic) HFMediaActionSetting *mediaActionSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)valueClass;

- (long long)sortPriority;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)writeValue:(id)arg1;
- (id)toggleValue;
- (id)readValueAndPopulateStandardResults;
- (id)writePrimaryState:(long long)arg1;
- (id)togglePrimaryState;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)normalizedValueForValue:(id)arg1;
- (id)initWithValueSource:(id)arg1 mediaProfileContainer:(id)arg2 mediaAccessoryItemType:(long long)arg3 displayResults:(id)arg4;
- (long long)toggledSceneStateFromPrimaryState:(long long)arg1;
- (long long)mapToHMMediaPlaybackState:(long long)arg1;

@end

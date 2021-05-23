/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class WorldClockCity;

@interface NTKWorldClockTimelineEntryModel : NTKTimelineEntryModel

{
    _Bool _showIdealizedTime;
    WorldClockCity *_city;
}

@property (retain, nonatomic) WorldClockCity *city;
@property (nonatomic) _Bool showIdealizedTime;

+ (id)_analogImageProvider;

- (id)init;
- (id)_timeZone;
- (double)_timeZoneOffset;
- (id)_newSmallModularTemplate;
- (id)_newLargeModularTemplate;
- (id)_newCircularSmallTemplate;
- (id)_newSmallFlatUtilityTemplate;
- (id)_newExtraLargeTemplate;
- (id)_newCircularMediumTemplate;
- (id)templateForComplicationFamily:(long long)arg1;
- (id)_newLargeUtilityTemplate;
- (id)_newSignatureCircularTemplate;
- (id)_newSignatureBezelTemplate;
- (id)_signatureCorner;
- (id)_abbreviationTextProvider;
- (id)_timeAndAbbreviationTextProvider;
- (id)_timeTextProvider;
- (id)_cityNameTextProvider;
- (id)_timeAndDayOffsetTextProvider;
- (id)_differenceTextProvider;
- (id)_timeAndCityNameOffsetTextProvider;
- (id)_timeAndDifferenceOffsetTextProvider;
- (id)_timeCityNameTimeZoneOffsetTextProvider;
- (id)_differenceTextProviderWithSize:(long long)arg1 andCaps:(_Bool)arg2;
- (id)_dayOffsetTextProvider;

@end

/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@interface NTKTimerTimelineEntry : NTKTimelineEntryModel

{
    double _remainingTime;
    unsigned long long _state;
    double _countdownDuration;
}

@property (nonatomic) double remainingTime;
@property (nonatomic) unsigned long long state;
@property (nonatomic) double countdownDuration;

+ (id)companionModel;
+ (id)_modularRectangularImageProvider;
+ (id)_cornerSmallImageProvider;
+ (id)_modularSmallImageProvider;
+ (id)_circularSmallImageProvider;
+ (id)_circularMediumImageProvider;
+ (id)_utilitarianSmallImageProvider;
+ (id)_extraLargeImageProvider;

- (id)_newSmallModularTemplate;
- (id)_newLargeModularTemplate;
- (id)_newCircularSmallTemplate;
- (id)_newSmallFlatUtilityTemplate;
- (id)_newLargeFlatUtilityTemplate;
- (id)_newExtraLargeTemplate;
- (id)_newSignatureCornerGaugeImageTemplate;
- (id)_newSignatureRectangular;
- (id)_newCircularMediumTemplate;
- (id)_newSimpleTextTemplate;
- (id)_countdownTextProvider;
- (id)_headerTextProviderForTimeAtState:(unsigned long long)arg1;
- (id)_textProviderForTimeAtState:(unsigned long long)arg1 withUnknownText:(id)arg2 twoDigitMinuteZeroPadding:(_Bool)arg3;
- (id)_gaugeProviderForTimeAtState:(unsigned long long)arg1 tintColor:(id)arg2;
- (id)_textProviderForTimeAtState:(unsigned long long)arg1 withUnknownText:(id)arg2;
- (id)_textProviderForTimeAtState:(unsigned long long)arg1;
- (id)_relativeDateGaugeProviderForTimeInterval:(double)arg1 fullDuration:(double)arg2 paused:(_Bool)arg3 tintColor:(id)arg4;
- (id)_relativeDateTextProviderForTimeInterval:(double)arg1 paused:(_Bool)arg2 twoDigitMinuteZeroPadding:(_Bool)arg3;
- (id)templateForComplicationFamily:(long long)arg1;

@end

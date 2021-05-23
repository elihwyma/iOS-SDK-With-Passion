/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <NSObject.h>

@class UIFont;

@interface WATodayPadViewStyle : NSObject

{
    long long _orientation;
    unsigned long long _format;
    UIFont *_locationFont;
    UIFont *_temperatureFont;
    UIFont *_conditionsFont;
    double _labelLeadingMargin;
    double _conditionsImageLeadingMargin;
    double _temperatureLabelBaselineToConditionsImageViewBottom;
    double _locationLabelBaselineToTemperatureLabelBaseline;
    double _conditionsLabelBaselineToLocationLabelBaseline;
    double _conditionsLabelBaselineToBottom;
}

@property (nonatomic) long long orientation;
@property (nonatomic) unsigned long long format;
@property (copy, nonatomic) UIFont *locationFont;
@property (copy, nonatomic) UIFont *temperatureFont;
@property (copy, nonatomic) UIFont *conditionsFont;
@property (nonatomic) double labelLeadingMargin;
@property (nonatomic) double conditionsImageLeadingMargin;
@property (nonatomic) double temperatureLabelBaselineToConditionsImageViewBottom;
@property (nonatomic) double locationLabelBaselineToTemperatureLabelBaseline;
@property (nonatomic) double conditionsLabelBaselineToLocationLabelBaseline;
@property (nonatomic) double conditionsLabelBaselineToBottom;

+ (id)styleForScreenWithSize:(struct CGSize)arg1 orientation:(long long)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFormat:(unsigned long long)arg1 orientation:(long long)arg2;
- (void)_setupForDefaultWithOrientation:(long long)arg1;
- (void)_setupForGigantorWithOrientation:(long long)arg1;

@end

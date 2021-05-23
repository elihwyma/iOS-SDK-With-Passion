/*
 Image: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, UIStackView;

@protocol CLKMonochromeFilterProvider, NWMDataFormatter;

@interface NWCFiveHourForecastView : UIView

{
    id <CLKMonochromeFilterProvider> _filterProvider;
    NSArray *_hourlyForecastViews;
    UIStackView *_horizontalStackView;
}

@property (retain, nonatomic) UIStackView *horizontalStackView;
@property (retain, nonatomic) NSArray *hourlyForecastViews;
@property (nonatomic, readonly) Class hourlyForecastViewClass;
@property (nonatomic, readonly) id <NWMDataFormatter> dataFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CLKMonochromeFilterProvider> filterProvider;

+ (unsigned long long)maximumHourlyConditionCount;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)_applyConstraints;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (id)initFullColorImageViewWithDevice:(id)arg1;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)configureWithImageProvider:(id)arg1 reason:(long long)arg2;
- (void)_addHourlyForecastViewsToStackView:(id)arg1;
- (void)processHourlyForecastedConditions:(id)arg1 forTimeZone:(id)arg2;

@end

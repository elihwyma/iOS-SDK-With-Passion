/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <UIView.h>

@class City, NSLocale, NSString;

@interface WeatherView : UIView

{
    City *_city;
    _Bool _showingDay;
    _Bool _showWind;
    UIView *_windView;
    NSLocale *_lastLocale;
}

@property (retain, nonatomic, setter=showCity:) City *city;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)bundle;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)resetLocale:(id)arg1;
- (void)cleanupWindView;
- (_Bool)updateWeatherDisplayForCity:(id)arg1;
- (_Bool)_setCity:(id)arg1 associateAsDelegate:(_Bool)arg2;
- (void)cityDidStartWeatherUpdate:(id)arg1;
- (void)cityDidFinishWeatherUpdate:(id)arg1;
- (void)refreshLocalization;

@end

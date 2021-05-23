/*
 Image: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSObject, UIImageView, WUIDynamicWeatherBackground, WUIDynamicWeatherBackgroundInteractiveTransaction, WUIWeatherCondition;

@protocol OS_dispatch_source;

@interface WUIWeatherConditionBackgroundView : UIView

{
    long long _activeIndex;
    _Bool _hidesConditions;
    _Bool _hasViewAppeared;
    WUIDynamicWeatherBackground *_background;
    double _scrollOffset;
    NSArray *_cities;
    WUIDynamicWeatherBackgroundInteractiveTransaction *_crossfadeTransaction;
    NSObject<OS_dispatch_source> *_crossfadeEffectTimer;
    UIImageView *_introductionImageView;
    WUIWeatherCondition *_leftCondition;
    WUIWeatherCondition *_rightCondition;
}

@property (retain, nonatomic) NSArray *cities;
@property (retain, nonatomic) WUIDynamicWeatherBackgroundInteractiveTransaction *crossfadeTransaction;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *crossfadeEffectTimer;
@property (retain, nonatomic) UIImageView *introductionImageView;
@property (retain, nonatomic) WUIWeatherCondition *leftCondition;
@property (retain, nonatomic) WUIWeatherCondition *rightCondition;
@property (nonatomic, readonly) NSArray *conditions;
@property (nonatomic, readonly) WUIDynamicWeatherBackground *background;
@property (nonatomic) _Bool hidesConditions;
@property (nonatomic) _Bool hasViewAppeared;
@property (nonatomic) double scrollOffset;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_conditions;
- (void)didTransitionToSize:(struct CGSize)arg1;
- (void)_cityDidUpdate:(id)arg1;
- (void)animateTransitionToSize:(struct CGSize)arg1;
- (void)setCities:(id)arg1 activeCityIndex:(long long)arg2 activeCityLiveConditionOnly:(_Bool)arg3 animationDuration:(double)arg4;
- (void)_setCondition:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_conditionAtIndex:(unsigned long long)arg1;
- (void)_removeSideLayers;
- (void)_addBackAllLayers;
- (void)setCities:(id)arg1 activeCityIndex:(long long)arg2;
- (void)setCities:(id)arg1 activeCityIndex:(long long)arg2 animationDuration:(double)arg3;
- (void)updateConditionIfNeededWithCities:(id)arg1 activeCityIndex:(long long)arg2;
- (void)updateConditionsAboutCityIndex:(long long)arg1;
- (void)setScrollEnded;
- (id)relinquishConditionViewForCityAtIndex:(long long)arg1;
- (void)useConditionView:(id)arg1 activeCityIndex:(unsigned long long)arg2;
- (void)prepareToSuspend;
- (void)prepareToResume;
- (void)saveImageForKeyCondition;

@end

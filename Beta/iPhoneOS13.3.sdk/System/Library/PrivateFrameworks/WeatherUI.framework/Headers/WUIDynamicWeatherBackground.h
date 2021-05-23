/*
 Image: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
 */

#import <UIKit/UIView.h>

@class CALayer, NSCache, NSNumber, WUIGradientLayer, WUIWeatherCondition;

@interface WUIDynamicWeatherBackground : UIView

{
    WUIWeatherCondition *_condition;
    CALayer *_rootLayer;
    WUIGradientLayer *_gradientLayer;
    CALayer *_darkeningLayer;
    NSCache *_backgroundCache;
    CALayer *_currentBackground;
    CALayer *_transitionBackground;
    NSNumber *_sunHeightOverride;
}

@property (retain, nonatomic) CALayer *rootLayer;
@property (retain, nonatomic) WUIGradientLayer *gradientLayer;
@property (retain, nonatomic) CALayer *darkeningLayer;
@property (retain, nonatomic) NSCache *backgroundCache;
@property (weak, nonatomic) CALayer *currentBackground;
@property (weak, nonatomic) CALayer *transitionBackground;
@property (copy, nonatomic) NSNumber *sunHeightOverride;
@property (retain, nonatomic) WUIWeatherCondition *condition;

+ (void)initialize;
+ (id)dequeueBackgroundForCity:(id)arg1;
+ (void)enqueueBackground:(id)arg1;
+ (void)handleMemoryWarning;
+ (void)beginReuseRestrictionForCity:(id)arg1;
+ (void)endReuseRestriction;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)addSublayer:(id)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)setCity:(id)arg1;
- (void)setCity:(id)arg1 animationDuration:(double)arg2;
- (void)animateTransitionToSize:(struct CGSize)arg1;
- (void)setCity:(id)arg1 animate:(_Bool)arg2;
- (void)completeTransitionWithSuccess:(_Bool)arg1;
- (id)updateFromCity:(id)arg1 toCity:(id)arg2;
- (void)darkerSystemColorsStatusDidChange:(id)arg1;
- (void)updateForDarkerSystemColors;
- (CDStruct_818bb265)mixedColorsForIndex:(long long)arg1 solarHeight:(float)arg2 condition:(long long)arg3 latitude:(float)arg4;
- (CDStruct_9b5b21f5)mixedGradientForSunheight:(double)arg1 hourAngle:(double)arg2 condition:(long long)arg3 latitude:(float)arg4;
- (void)getTopColor:(id *)arg1 middleColor:(id *)arg2 bottomColor:(id *)arg3 gradientStopPoint:(double *)arg4 forCity:(id)arg5 date:(id)arg6;
- (double)darkeningLayerOpacityForDay:(_Bool)arg1;
- (id)imageLayerFromConditon:(long long)arg1 isDay:(_Bool)arg2;
- (id)springAnimationForKeyPath:(id)arg1 mass:(double)arg2 fromValue:(id)arg3 toValue:(id)arg4;
- (_Bool)hasSublayer:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class CLKDevice, CLKGaugeProvider, NSArray, NSString, NTKRichComplicationShapeView;

@protocol CLKMonochromeFilterProvider;

@interface NTKRichComplicationProgressView : UIView <Swift>

{
    CLKDevice *_device;
    struct NSNumber *_updateToken;
    float _currentBackgroundViewAlphaPercentage;
    _Bool _enabled;
    id <CLKMonochromeFilterProvider> _filterProvider;
    NSArray *_gradientColors;
    double _progress;
    long long _style;
    CLKGaugeProvider *_gaugeProvider;
    NTKRichComplicationShapeView *_backgroundView;
    NTKRichComplicationShapeView *_foregroundView;
    UIView *_ringView;
}

@property (nonatomic, readonly) NTKRichComplicationShapeView *backgroundView;
@property (nonatomic, readonly) NTKRichComplicationShapeView *foregroundView;
@property (nonatomic, readonly) UIView *ringView;
@property (retain, nonatomic) NSArray *gradientColors;
@property (nonatomic) double progress;
@property (nonatomic) _Bool enabled;
@property (nonatomic) long long style;
@property (retain, nonatomic) CLKGaugeProvider *gaugeProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CLKMonochromeFilterProvider> filterProvider;

- (void)dealloc;
- (void)layoutSubviews;
- (void)_applyStyle;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (id)filterForView:(id)arg1 style:(long long)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (id)colorForView:(id)arg1 accented:(_Bool)arg2;
- (void)_createRingView;
- (id)overrideBackgroundGradientColorsForGradientColors:(id)arg1;
- (id)overrideBackgroundGradientColorsForGradientColors:(id)arg1 locations:(id)arg2;
- (void)setGradientColors:(id)arg1 locations:(id)arg2;
- (void)_updateUIFromGaugeProvider;
- (void)animateToProgress:(float)arg1 duration:(double)arg2;
- (void)_adjustBackgroundViewAlphaWithPercentage:(float)arg1;
- (id)initForDevice:(id)arg1 backgroundShapeView:(id)arg2 foregroundShapeView:(id)arg3;

@end

/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CALayer, CLKDevice, NSArray, NTKWhistlerAnalogColorPalette;

@interface NTKCircularAnalogDialView : UIView

{
    CLKDevice *_device;
    unsigned long long _numberOfTicks;
    CALayer *_dialBackgroundLayer;
    CALayer *_ticksLayer;
    NSArray *_allSmallTicks;
    NSArray *_allHourTicks;
    NSArray *_smallMatchingHourTicks;
    double _tickPadding;
    NTKWhistlerAnalogColorPalette *_colorPalette;
    CDStruct_cba134e1 _options;
}

+ (id)_disabledLayerActions;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;
- (void)cleanupAfterZoom;
- (void)prepareForEdit;
- (void)cleanupAfterEdit;
- (void)prepareForZoom;
- (void)transitTicksWithInitialBezelTextWidthInRadius:(double)arg1 finalBezelTextWidthInRadius:(double)arg2 fraction:(double)arg3;
- (void)applyZoomFraction:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1 options:(CDStruct_cba134e1)arg2 device:(id)arg3;
- (void)showAllTicksInDial;
- (void)applyColorTransitionFraction:(double)arg1 fromColorPalette:(id)arg2 toColorPalette:(id)arg3;
- (void)transitInvisibleTicksAlphaWithBezelTextWidthInRadius:(double)arg1 invisbleTicksAlpha:(double)arg2;
- (void)applyColorTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3;
- (void)_toggleRasterization:(_Bool)arg1;
- (double)_tickOpactiyAtIndex:(long long)arg1 bezelTextWidthInRadius:(double)arg2 invisibleTicksAlpha:(double)arg3;
- (id)_instantaneousAnimationForKeyPath:(id)arg1 value:(id)arg2;
- (void)fillDialTransitionWithFraction:(double)arg1 bezelTextWidthRadians:(double)arg2;
- (_Bool)isTickIndexForHour:(unsigned long long)arg1;
- (void)layoutLayerTicks:(id)arg1 rotationAngleInDegree:(double)arg2 smallTicks:(_Bool)arg3;
- (double)_tickOpactiyAtIndex:(long long)arg1 bezelTextWidthInRadius:(double)arg2 invisibleTicksAlpha:(double)arg3 visibleTicksAlpha:(double)arg4;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2 smallTicksMatchingMinutes:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2 hideHourTicks:(_Bool)arg3;
- (void)setDialBackgroundColor:(id)arg1;
- (void)setHideHourTicks:(_Bool)arg1;
- (void)setHourTicksOpacity:(double)arg1 bezelTextWidthRadians:(double)arg2;

@end

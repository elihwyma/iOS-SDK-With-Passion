/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CALayer, CLKDevice, NSArray;

@interface NTKSpectrumAnalogDialView : UIView

{
    CLKDevice *_device;
    CALayer *_ticksLayer;
    NSArray *_allTicks;
    double _tickPadding;
}

+ (id)_disabledLayerActions;

- (void)setColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;
- (void)cleanupAfterZoom;
- (void)prepareForEdit;
- (void)cleanupAfterEdit;
- (void)prepareForZoom;
- (void)transitTicksWithInitialBezelTextWidthInRadius:(double)arg1 finalBezelTextWidthInRadius:(double)arg2 fraction:(double)arg3;
- (void)applyZoomFraction:(double)arg1;
- (void)showAllTicksInDial;
- (void)transitInvisibleTicksAlphaWithBezelTextWidthInRadius:(double)arg1 invisbleTicksAlpha:(double)arg2;
- (void)applyColorTransitionFraction:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3;
- (void)_toggleRasterization:(_Bool)arg1;
- (double)_tickOpactiyAtIndex:(long long)arg1 bezelTextWidthInRadius:(double)arg2 invisibleTicksAlpha:(double)arg3;
- (id)_instantaneousAnimationForKeyPath:(id)arg1 value:(id)arg2;
- (void)fillDialTransitionWithFraction:(double)arg1 bezelTextWidthRadians:(double)arg2;

@end

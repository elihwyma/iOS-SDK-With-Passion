/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class HFColorPalette, HFColorPaletteColor, HUQuickControlColorViewProfile, NSArray, NSNumber, NSString, UILongPressGestureRecognizer;

@protocol HUQuickControlColorPaletteViewInteractionDelegate;

@interface HUColorPaletteView : UIView

{
    _Bool _userInteractionActive;
    _Bool _colorPaletteHasChanged;
    HUQuickControlColorViewProfile *_profile;
    id <HUQuickControlColorPaletteViewInteractionDelegate> _interactionDelegate;
    HFColorPalette *_colorPalette;
    double _circleRadius;
    NSArray *_colorSwatchViews;
    HFColorPalette *_calibratedColorPalette;
    HFColorPaletteColor *_selectedColor;
    NSNumber *_trackingColorIndex;
    NSNumber *_selectedColorBiasIndex;
    UILongPressGestureRecognizer *_gestureRecognizer;
    UILongPressGestureRecognizer *_changePresetRecognizer;
}

@property (copy, nonatomic) NSArray *colorSwatchViews;
@property (retain, nonatomic) HFColorPalette *calibratedColorPalette;
@property (retain, nonatomic) HFColorPaletteColor *selectedColor;
@property (retain, nonatomic) NSNumber *trackingColorIndex;
@property (retain, nonatomic) NSNumber *selectedColorBiasIndex;
@property (nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive;
@property (nonatomic) _Bool colorPaletteHasChanged;
@property (retain, nonatomic) UILongPressGestureRecognizer *gestureRecognizer;
@property (retain, nonatomic) UILongPressGestureRecognizer *changePresetRecognizer;
@property (weak, nonatomic) id <HUQuickControlColorPaletteViewInteractionDelegate> interactionDelegate;
@property (retain, nonatomic) HFColorPalette *colorPalette;
@property (nonatomic) double circleRadius;
@property (copy, nonatomic) HUQuickControlColorViewProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) id secondaryValue;
@property (nonatomic) unsigned long long reachabilityState;

- (id)initWithProfile:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)layoutSubviews;
- (void)_handleGesture:(id)arg1;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (id)initWithProfile:(id)arg1 colorPalette:(id)arg2;
- (void)_updateCalibratedColorPalette;
- (void)_setColorPalette:(id)arg1 notifyDelegate:(_Bool)arg2;
- (unsigned long long)_indexForSelectedColor:(id)arg1 includeBias:(_Bool)arg2;
- (void)_buildColorSwatchViews;
- (void)_handleGestureForVeryLongPress:(id)arg1;
- (void)_updateColorSelectionAnimated:(_Bool)arg1;
- (void)_updateColorSwatchViewsWithAnimations:(_Bool)arg1;
- (id)_swatchIndexForGestureRecognizer:(id)arg1;
- (void)_setSelectedColor:(id)arg1 notifyDelegate:(_Bool)arg2 updateSelectionState:(_Bool)arg3;
- (double)radiusFittingSize:(struct CGSize)arg1;

@end

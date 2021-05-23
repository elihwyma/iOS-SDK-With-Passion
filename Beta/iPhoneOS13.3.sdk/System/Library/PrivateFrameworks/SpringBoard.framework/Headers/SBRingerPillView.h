/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class BSUICAPackageView, MTMaterialShadowView, MTVisualStylingProvider, NSArray, SBRingerVolumeSliderView, UIColor, UILabel;

@interface SBRingerPillView : UIView

{
    float _sliderValue;
    unsigned long long _state;
    MTMaterialShadowView *_materialView;
    MTVisualStylingProvider *_stylingProvider;
    BSUICAPackageView *_glyphView;
    UILabel *_silentModeLabel;
    UILabel *_ringerLabel;
    UILabel *_onLabel;
    UILabel *_offLabel;
    SBRingerVolumeSliderView *_slider;
    UIColor *_glyphTintColor;
    NSArray *_glyphTintBackgroundLayers;
    NSArray *_glyphTintShapeLayers;
}

@property (retain, nonatomic) MTMaterialShadowView *materialView;
@property (retain, nonatomic) MTVisualStylingProvider *stylingProvider;
@property (retain, nonatomic) BSUICAPackageView *glyphView;
@property (retain, nonatomic) UILabel *silentModeLabel;
@property (retain, nonatomic) UILabel *ringerLabel;
@property (retain, nonatomic) UILabel *onLabel;
@property (retain, nonatomic) UILabel *offLabel;
@property (retain, nonatomic) SBRingerVolumeSliderView *slider;
@property (retain, nonatomic) UIColor *glyphTintColor;
@property (copy, nonatomic) NSArray *glyphTintBackgroundLayers;
@property (copy, nonatomic) NSArray *glyphTintShapeLayers;
@property (nonatomic) unsigned long long state;
@property (nonatomic) float sliderValue;

- (id)init;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_setGlyphTintColor:(id)arg1 animationDuration:(double)arg2;
- (id)_visibleViewsForState:(unsigned long long)arg1;
- (void)_updateGlyphWithStaticColor:(id)arg1 animationSettings:(id)arg2;

@end

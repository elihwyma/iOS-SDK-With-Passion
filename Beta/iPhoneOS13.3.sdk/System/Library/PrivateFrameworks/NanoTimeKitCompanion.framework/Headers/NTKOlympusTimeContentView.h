/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CLKDevice, CLKTimeFormatter, NSString, NTKOlympusColorPalette, NTKVictoryLabel, NTKVictoryTimeLabel, UIButton, UIColor;

@protocol NTKOlympusContentViewDelegate;

@interface NTKOlympusTimeContentView : UIView

{
    _Bool frozen;
    _Bool _invertedColors;
    id <NTKOlympusContentViewDelegate> _delegate;
    CLKDevice *_device;
    UIButton *_fullscreenLogoButton;
    UIButton *_circularLogoButton;
    NTKVictoryTimeLabel *_fullscreenHybridUpperTimeLabel;
    NTKVictoryLabel *_fullscreenHybridLowerTimeLabel;
    NTKVictoryLabel *_fullscreenDigitalUpperTimeLabel;
    NTKVictoryLabel *_fullscreenDigitalLowerTimeLabel;
    NTKVictoryLabel *_circularUpperTimeLabel;
    NTKVictoryLabel *_circularLowerTimeLabel;
    UIView *_contentView;
    UIView *_fullscreenDigitsContainerView;
    UIView *_circularDigitsContainerView;
    CLKTimeFormatter *_timeFormatter;
    unsigned long long _style;
    unsigned long long _dial;
    unsigned long long _color;
    NTKOlympusColorPalette *_palette;
    UIColor *_currentForegroundColor;
    UIColor *_currentBackgroundColor;
    UIColor *_currentLogoColor;
    double _dialFraction;
    double _digitalStyleFraction;
    double _olympusDigitalStyleFraction;
    double _olympusAnalogStyleFraction;
    double _analogStyleFraction;
    double _olympusDigitalLabelsPositionFraction;
    double _analogStyleSwooshPositionFraction;
    struct CGSize _logoImageSizeForCircularDial;
}

@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) UIButton *fullscreenLogoButton;
@property (retain, nonatomic) UIButton *circularLogoButton;
@property (retain, nonatomic) NTKVictoryTimeLabel *fullscreenHybridUpperTimeLabel;
@property (retain, nonatomic) NTKVictoryLabel *fullscreenHybridLowerTimeLabel;
@property (retain, nonatomic) NTKVictoryLabel *fullscreenDigitalUpperTimeLabel;
@property (retain, nonatomic) NTKVictoryLabel *fullscreenDigitalLowerTimeLabel;
@property (retain, nonatomic) NTKVictoryLabel *circularUpperTimeLabel;
@property (retain, nonatomic) NTKVictoryLabel *circularLowerTimeLabel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *fullscreenDigitsContainerView;
@property (retain, nonatomic) UIView *circularDigitsContainerView;
@property (retain, nonatomic) CLKTimeFormatter *timeFormatter;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long dial;
@property (nonatomic) unsigned long long color;
@property (retain, nonatomic) NTKOlympusColorPalette *palette;
@property (retain, nonatomic) UIColor *currentForegroundColor;
@property (retain, nonatomic) UIColor *currentBackgroundColor;
@property (retain, nonatomic) UIColor *currentLogoColor;
@property (nonatomic) double dialFraction;
@property (nonatomic) double digitalStyleFraction;
@property (nonatomic) double olympusDigitalStyleFraction;
@property (nonatomic) double olympusAnalogStyleFraction;
@property (nonatomic) double analogStyleFraction;
@property (nonatomic) double olympusDigitalLabelsPositionFraction;
@property (nonatomic) double analogStyleSwooshPositionFraction;
@property (nonatomic) struct CGSize logoImageSizeForCircularDial;
@property (weak, nonatomic) id <NTKOlympusContentViewDelegate> delegate;
@property (nonatomic) _Bool invertedColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isFrozen) _Bool frozen;

+ (double)scaleForViewDuringColorChangeTransitionWithFraction:(double)arg1;

- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setTimeOffset:(double)arg1;
- (void)updateColors;
- (void)timeFormatterTextDidChange:(id)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (void)createAndRemoveViewsForCurrentStateIfNeeded;
- (id)initWithDevice:(id)arg1 dial:(unsigned long long)arg2 style:(unsigned long long)arg3 color:(unsigned long long)arg4;
- (void)prepareForEditing;
- (void)cleanupAfterEditing;
- (void)applyTransitionFraction:(double)arg1 fromColorPalette:(id)arg2 toColorPalette:(id)arg3 animateElements:(_Bool)arg4;
- (void)applyTransitionFraction:(double)arg1 fromDial:(unsigned long long)arg2 toDial:(unsigned long long)arg3;
- (void)setLogoButtonHighlighted:(_Bool)arg1;
- (void)configureViewsForEditing;
- (void)createCircularViewsIfNeeded;
- (void)removeFullscreenViews;
- (void)removeCircularViews;
- (void)createFullscreenLogoIfNeeded;
- (void)createFullscreenDigitalViewsIfNeeded;
- (void)createFullscreenHybridViewsIfNeeded;
- (id)createLogoButtonWithBackgroundImage:(id)arg1;
- (id)circularLogoImage;
- (id)fontForCircularDial;
- (void)handleLogoButtonHighlighted:(id)arg1;
- (void)handleLogoButtonResetHighlight:(id)arg1;
- (void)handleLogoButtonTouchUpInside:(id)arg1;
- (id)fontForDigitalFullscreen;
- (id)fontForHybridFullscreen;
- (id)createTimeLabelWithFont:(id)arg1 option:(unsigned long long)arg2;
- (id)styleWithFont:(id)arg1;
- (void)updateLogosFrame;
- (void)updateTimeLabelsFrame;
- (void)setViewsVisibilityForDial:(unsigned long long)arg1 style:(unsigned long long)arg2;
- (void)updateStylesFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (id)circularLogoImageWithoutText;
- (void)setViewsVisibleForDialTransition;
- (void)setViewsVisibleForStyleTransition;
- (void)ensureVisibleIfNeeded:(id)arg1;
- (void)_applyTransitionFraction:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3 fromBackgroundColor:(id)arg4 toBackgroundColor:(id)arg5 fromLogoColor:(id)arg6 toLogoColor:(id)arg7;
- (void)_applyAnimationPopTransitionWithFraction:(double)arg1;
- (void)_applyTransitionFraction:(double)arg1 fromTextColor:(id)arg2 toTextColor:(id)arg3;
- (id)monospacedFontForCircularDial;
- (id)victoryFontWithSize:(double)arg1;
- (void)setLabelOutlineAlpha:(double)arg1;
- (void)setLabelOutlineColor:(id)arg1;
- (_Bool)containsSubview:(id)arg1;

@end

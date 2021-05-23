/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@class AVCABackdropLayerView, NSArray, UIStackView, UIView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface AVBackdropView

{
    NSArray *_temporaryArrangedSubviews;
    _Bool _prefersLowQualityEffects;
    _Bool _disablesAutoLayout;
    long long _axis;
    unsigned long long _shapeStyle;
    UIView *_targetViewForSecondaryMaterialOverlay;
    UIStackView *_stackView;
    UIVisualEffectView *_secondaryMaterialOverlayView;
    NSArray *_secondaryMaterialOverlayViewConstraints;
    AVCABackdropLayerView *_backdropLayerView;
}

@property (nonatomic, readonly) UIStackView *stackView;
@property (retain, nonatomic) UIVisualEffectView *secondaryMaterialOverlayView;
@property (retain, nonatomic) NSArray *secondaryMaterialOverlayViewConstraints;
@property (nonatomic) _Bool disablesAutoLayout;
@property (retain, nonatomic) AVCABackdropLayerView *backdropLayerView;
@property (nonatomic, readonly) long long axis;
@property (nonatomic) struct NSDirectionalEdgeInsets contentLayoutMargins;
@property (nonatomic) unsigned long long shapeStyle;
@property (retain, nonatomic) UIView *targetViewForSecondaryMaterialOverlay;
@property (nonatomic) _Bool prefersLowQualityEffects;

+ (id)secondaryMaterialOverlayView;
+ (void)removeAllFiltersFromView:(id)arg1;
+ (void)applyPrimaryGlyphTintToView:(id)arg1;
+ (void)applySecondaryGlyphTintToView:(id)arg1;
+ (void)applyGlyphTintColor:(id)arg1 toView:(id)arg2;
+ (void)configureSlider:(id)arg1 thumbView:(id)arg2 loadedTrackView:(id)arg3;
+ (void)applyBaseTrackTintToView:(id)arg1;
+ (void)applyCompletedTrackTintToView:(id)arg1;
+ (void)applyLoadedTrackTintToView:(id)arg1;
+ (void)configureView:(id)arg1 forTintEffectWithColor:(id)arg2 filterType:(id)arg3;
+ (void)configureView:(id)arg1 withBackgroundFillOfColor:(id)arg2 opacity:(double)arg3 filter:(id)arg4;
+ (id)secondaryGlyphTintColor;

- (void)dealloc;
- (void)setHidden:(_Bool)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)arrangedSubviews;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)initWithArrangedSubviews:(id)arg1;
- (void)setCustomSpacing:(double)arg1 afterView:(id)arg2;
- (double)customSpacingAfterView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 disablingAutoLayout:(_Bool)arg2;
- (_Bool)hasVisibleArrangedSubview;
- (void)setArrangedSubviews:(id)arg1 axis:(long long)arg2;
- (void)setCustomSpacing:(double)arg1 afterViews:(id)arg2;
- (id)_stackViewIfLoaded;
- (void)_applyShapeStyle;

@end

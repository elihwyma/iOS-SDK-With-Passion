/*
 Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
 */

#import <UIKit/UIControl.h>

#import <CameraEditKit/Swift-Protocol.h>

@class CEKEdgeGradientView, CEKSelectionFeedbackGenerator, CEKSliderDotView, CEKSliderTickMarksView, NSString, UIColor, UILabel, UIScrollView, UIView;

@protocol CEKSliderDelegate, CEKTickMarksConfiguration;

@interface CEKSlider : UIControl <Swift>

{
    struct {
        _Bool respondsToWillBeginScrolling;
        _Bool respondsToDidScroll;
        _Bool respondsToWillEndScrolling;
        _Bool respondsToDidEndScrolling;
        _Bool respondsToWillUpdateValue;
    } _delegateFlags;
    _Bool __animating;
    _Bool __overscrolling;
    _Bool __active;
    _Bool __reAdjustingOffsets;
    _Bool __dimmed;
    double _labelVerticalPadding;
    long long _sliderVerticalAlignment;
    double _sliderVerticalOffset;
    long long _textOrientation;
    unsigned long long _fontStyle;
    id <CEKSliderDelegate> _delegate;
    double _animationDuration;
    double _maximumValue;
    double _minimumValue;
    double _value;
    double _defaultValue;
    double _markedValue;
    long long _tickMarkCount;
    UIColor *_tickMarkColor;
    UIColor *_prominentTickMarkColor;
    NSString *_title;
    long long _valueLabelVisibility;
    UIScrollView *__contentScrollView;
    CEKSliderTickMarksView *__tickMarksView;
    UIView *__levelIndicatorView;
    CEKSliderDotView *__dotView;
    CEKEdgeGradientView *__edgeGradientView;
    unsigned long long __tickMarkIndex;
    CEKSelectionFeedbackGenerator *__feedbackGenerator;
    UILabel *__titleLabel;
    UILabel *__valueLabel;
    UIView *__levelIndicatorBackgroundView;
    CDStruct_ae5a35ae _gradientInsets;
    struct CGSize _tickMarkSize;
}

@property (nonatomic, readonly) UIScrollView *_contentScrollView;
@property (nonatomic, readonly) CEKSliderTickMarksView *_tickMarksView;
@property (nonatomic, readonly) UIView *_levelIndicatorView;
@property (nonatomic, readonly) CEKSliderDotView *_dotView;
@property (retain, nonatomic, setter=_setEdgeGradientView:) CEKEdgeGradientView *_edgeGradientView;
@property (nonatomic, getter=_isAnimating, setter=_setAnimating:) _Bool _animating;
@property (nonatomic, getter=_isOverscrolling, setter=_setOverscrolling:) _Bool _overscrolling;
@property (nonatomic, setter=_setTickMarkIndex:) unsigned long long _tickMarkIndex;
@property (nonatomic, readonly) CEKSelectionFeedbackGenerator *_feedbackGenerator;
@property (nonatomic, getter=_isActive, setter=_setActive:) _Bool _active;
@property (retain, nonatomic) UILabel *_titleLabel;
@property (retain, nonatomic) UILabel *_valueLabel;
@property (nonatomic, getter=_isreAdjustingOffsets) _Bool _reAdjustingOffsets;
@property (nonatomic, getter=_isDimmed, setter=_setDimmed:) _Bool _dimmed;
@property (retain, nonatomic) UIView *_levelIndicatorBackgroundView;
@property (weak, nonatomic) id <CEKSliderDelegate> delegate;
@property (nonatomic, readonly) id <CEKTickMarksConfiguration> tickMarksConfiguration;
@property (nonatomic) double animationDuration;
@property (nonatomic) double maximumValue;
@property (nonatomic) double minimumValue;
@property (nonatomic) double value;
@property (nonatomic) double defaultValue;
@property (nonatomic) double markedValue;
@property (nonatomic) long long mainTickMarkInterval;
@property (nonatomic) long long tickMarkCount;
@property (nonatomic) double tickMarkSpacing;
@property (nonatomic) struct CGSize tickMarkSize;
@property (retain, nonatomic) UIColor *tickMarkColor;
@property (retain, nonatomic) UIColor *prominentTickMarkColor;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic) long long valueLabelVisibility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long sliderVerticalAlignment;
@property (nonatomic) double sliderVerticalOffset;
@property (nonatomic) double labelVerticalPadding;
@property (nonatomic) _Bool useLegibilityShadows;
@property (nonatomic) _Bool useTickMarkLegibilityShadows;
@property (nonatomic) long long textOrientation;
@property (nonatomic) long long titleAlignment;
@property (nonatomic) CDStruct_ae5a35ae gradientInsets;
@property (nonatomic) unsigned long long fontStyle;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateFonts;
- (void)resetToDefault;
- (void)tickMarksViewDidChangeWidthForTickMarkCount:(id)arg1;
- (void)_updateColorsAnimated:(_Bool)arg1;
- (void)_createGradientIfNeeded;
- (void)setTextOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)removeGradients;
- (void)setTransparentGradients;
- (void)setOpaqueGradientsWithColor:(id)arg1;
- (double)_xOffsetForMarkedValue;
- (void)_updateScrollViewPosition;
- (void)_setValue:(double)arg1 shouldSendActions:(_Bool)arg2 shouldUpdateScrollPosition:(_Bool)arg3;
- (void)_clampValuesAndUpdateScrollPosition:(_Bool)arg1;
- (void)setMarkedValue:(double)arg1 animated:(_Bool)arg2;
- (void)_updateMarkedViewAnimated:(_Bool)arg1;
- (void)_updateLegibilityBackground;
- (void)setEnabled:(_Bool)arg1 dimmed:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_setDimmed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateEnableAppearanceStateAnimated:(_Bool)arg1;
- (void)_setActive:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setShowValueLabel:(_Bool)arg1 animated:(_Bool)arg2;
- (double)xOffsetForValue:(double)arg1;
- (void)_updateValueLabel;
- (void)_setNormalizedValue:(double)arg1;
- (void)_sliderDidEndScrolling;

@end

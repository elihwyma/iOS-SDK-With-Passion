/*
 Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
 */

#import <UIKit/UIControl.h>

#import <CameraEditKit/Swift-Protocol.h>

@class CEKAnimationGenerator, CEKEdgeGradientView, CEKSelectionFeedbackGenerator, CEKSliderDotView, CEKSliderTickMarksView, NSString, UIColor, UIImageView, UILabel, UIScrollView, UIView;

@protocol CEKTickMarksConfiguration;

@interface CEKDiscreteSlider : UIControl <Swift>

{
    _Bool _useTextLegibilityShadows;
    _Bool __needsUpdateContentOffset;
    _Bool __overscrolling;
    double _labelVerticalPadding;
    long long _sliderVerticalAlignment;
    double _sliderVerticalOffset;
    long long _textOrientation;
    long long _titleAlignment;
    unsigned long long _fontStyle;
    UIScrollView *__contentScrollView;
    UIView *__levelIndicatorView;
    UILabel *__titleLabel;
    UILabel *__valueLabel;
    CEKEdgeGradientView *__edgeGradientView;
    UIImageView *__valueBackground;
    UIImageView *__titleBackground;
    UIView *__indicatorBackground;
    CEKSliderTickMarksView *__tickMarksView;
    CEKSliderDotView *__dotView;
    CEKSelectionFeedbackGenerator *__feedbackGenerator;
    CEKAnimationGenerator *__animationGenerator;
    unsigned long long _indexCount;
    unsigned long long _selectedIndex;
    unsigned long long _markedIndex;
    unsigned long long _tickMarkCountBetweenIndexes;
    double _tickMarksHeight;
    unsigned long long _colorHighlight;
    NSString *_titleText;
    CDStruct_ae5a35ae _gradientInsets;
}

@property (nonatomic, readonly) UIScrollView *_contentScrollView;
@property (nonatomic, readonly) UIView *_levelIndicatorView;
@property (retain, nonatomic) UILabel *_titleLabel;
@property (retain, nonatomic) UILabel *_valueLabel;
@property (retain, nonatomic) CEKEdgeGradientView *_edgeGradientView;
@property (retain, nonatomic) UIImageView *_valueBackground;
@property (retain, nonatomic) UIImageView *_titleBackground;
@property (retain, nonatomic) UIView *_indicatorBackground;
@property (nonatomic, readonly) CEKSliderTickMarksView *_tickMarksView;
@property (retain, nonatomic) CEKSliderDotView *_dotView;
@property (nonatomic, readonly) CEKSelectionFeedbackGenerator *_feedbackGenerator;
@property (retain, nonatomic, setter=_setAnimationGenerator:) CEKAnimationGenerator *_animationGenerator;
@property (nonatomic, setter=_setNeedsUpdateContentOffset:) _Bool _needsUpdateContentOffset;
@property (nonatomic, getter=_isOverscrolling, setter=_setOverscrolling:) _Bool _overscrolling;
@property (nonatomic, readonly, getter=_isScrollActive) _Bool _scrollActive;
@property (nonatomic, readonly) _Bool _shouldUseHighlightColor;
@property (nonatomic, readonly) id <CEKTickMarksConfiguration> tickMarksConfiguration;
@property (nonatomic) unsigned long long indexCount;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic) unsigned long long markedIndex;
@property (nonatomic) unsigned long long tickMarkCountBetweenIndexes;
@property (nonatomic) double tickMarksHeight;
@property (nonatomic) unsigned long long colorHighlight;
@property (copy, nonatomic) NSString *titleText;
@property (nonatomic) _Bool useLegibilityBackgrounds;
@property (nonatomic) _Bool useTextLegibilityShadows;
@property (retain, nonatomic) UIColor *gradientColor;
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

- (void)setEnabled:(_Bool)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)_updateFonts;
- (id)valueText;
- (void)tickMarksViewDidChangeWidthForTickMarkCount:(id)arg1;
- (void)_updateColorsAnimated:(_Bool)arg1;
- (void)updateValueLabel;
- (void)_layoutSubviewsWithLabelRotation:(double)arg1;
- (void)_layoutSubviewsWithNoRotation;
- (void)_updateTextLegibilityBackground;
- (void)_createGradientIfNeeded;
- (void)setSelectedIndex:(unsigned long long)arg1 animatedDuration:(double)arg2 animatedCurve:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setSelectedIndex:(unsigned long long)arg1 shouldDelegate:(_Bool)arg2 shouldEmitFeedback:(_Bool)arg3 shouldScroll:(_Bool)arg4 scrollDuration:(double)arg5 scrollCurve:(id)arg6 scrollCompletion:(CDUnknownBlockType)arg7;
- (void)_updateScrollViewContentOffset;
- (void)setMarkedIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_updateMarkedIndexViewAnimated:(_Bool)arg1;
- (void)setTickMarksHeight:(double)arg1 animated:(_Bool)arg2;
- (void)setColorHighlight:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_layoutSliderContentAtY:(double)arg1 withHorizontalPadding:(double)arg2;
- (double)horizontalValueLabelOffset;
- (struct CGPoint)_contentOffsetForIndex:(unsigned long long)arg1;
- (id)_createLegibilityImage;
- (unsigned long long)_tickMarkIndexForIndex:(unsigned long long)arg1;
- (double)_interpolatedIndexForContentOffset:(struct CGPoint)arg1;
- (void)_updateAppearanceForActiveScrolling;
- (unsigned long long)_biasedIndexForContentOffset:(struct CGPoint)arg1;
- (unsigned long long)_nearestIndexForContentOffset:(struct CGPoint)arg1;
- (void)setTextOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)removeGradients;
- (void)setTransparentGradients;
- (void)setOpaqueGradientsWithColor:(id)arg1;
- (void)removeMarkedIndex;

@end

/*
 Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
 */

#import <UIKit/UIButton.h>

@class NSNumberFormatter, UIImageView, UILabel;

@protocol CEKApertureButtonDelegate;

@interface CEKApertureButton : UIButton

{
    _Bool _shouldShowApertureValue;
    _Bool _wantsBackground;
    _Bool __rightToLeftFormatting;
    id <CEKApertureButtonDelegate> _delegate;
    double _apertureValue;
    long long _expansionDirection;
    long long _orientation;
    UIImageView *__circleOutlineView;
    UILabel *__symbolLabel;
    UILabel *__valueLabel;
    UIImageView *__circleBackgroundView;
    NSNumberFormatter *__decimalFormatter;
    NSNumberFormatter *__wholeNumberFormatter;
    double __cachedSpaceWidth;
    double __cachedSymbolLabelWidth;
    double __cachedValueLabelWidth;
    struct UIEdgeInsets _tappableEdgeInsets;
}

@property (nonatomic, readonly) UIImageView *_circleOutlineView;
@property (nonatomic, readonly) UILabel *_symbolLabel;
@property (nonatomic, readonly) UILabel *_valueLabel;
@property (retain, nonatomic) UIImageView *_circleBackgroundView;
@property (nonatomic, readonly) NSNumberFormatter *_decimalFormatter;
@property (nonatomic, readonly) NSNumberFormatter *_wholeNumberFormatter;
@property (nonatomic, readonly, getter=_isRightToLeftFormatting) _Bool _rightToLeftFormatting;
@property (nonatomic, readonly) double _cachedSpaceWidth;
@property (nonatomic, readonly) double _cachedSymbolLabelWidth;
@property (nonatomic, setter=_setCachedValueLabelWidth:) double _cachedValueLabelWidth;
@property (weak, nonatomic) id <CEKApertureButtonDelegate> delegate;
@property (nonatomic) double apertureValue;
@property (nonatomic) _Bool shouldShowApertureValue;
@property (nonatomic) long long expansionDirection;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic) _Bool wantsBackground;
@property (nonatomic) struct UIEdgeInsets tappableEdgeInsets;
@property (nonatomic) long long orientation;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)_updateBackgroundView;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateColorsAnimated:(_Bool)arg1;
- (void)_updateValueLabel;
- (id)_circleImageWithColor:(id)arg1;
- (void)setShouldShowApertureValue:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateSymbolLabelOrientationAnimated:(_Bool)arg1;
- (struct UIEdgeInsets)_expansionInsets;
- (void)_setCenterAndBoundsForView:(id)arg1 frame:(struct CGRect)arg2;
- (void)_setLayer:(id)arg1 highlighted:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_rotateView:(id)arg1 withInterfaceOrientation:(long long)arg2 animated:(_Bool)arg3;

@end

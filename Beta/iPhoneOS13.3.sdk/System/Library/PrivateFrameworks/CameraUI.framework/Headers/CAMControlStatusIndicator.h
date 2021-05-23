/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIControl.h>

@class NSString, UIImageView, UILabel;

@protocol CAMControlStatusIndicatorDelegate;

@interface CAMControlStatusIndicator : UIControl

{
    _Bool _showingValue;
    _Bool __needsUpdateValueText;
    id <CAMControlStatusIndicatorDelegate> _delegate;
    long long _orientation;
    UIImageView *__imageView;
    UIImageView *__outlineView;
    UILabel *__valueLabel;
    struct CGSize __valueLabelSize;
}

@property (nonatomic, readonly) UIImageView *_imageView;
@property (nonatomic, readonly) UIImageView *_outlineView;
@property (nonatomic, readonly) UILabel *_valueLabel;
@property (nonatomic, setter=_setValueLabelSize:) struct CGSize _valueLabelSize;
@property (nonatomic, setter=_setNeedsUpdateValueText:) _Bool _needsUpdateValueText;
@property (weak, nonatomic) id <CAMControlStatusIndicatorDelegate> delegate;
@property (nonatomic) long long orientation;
@property (nonatomic, readonly) _Bool canShowValue;
@property (nonatomic, getter=isShowingValue) _Bool showingValue;
@property (nonatomic, readonly) _Bool canAnimate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)decimalFormatter;
+ (id)integerFormatter;
+ (id)_createStretchableCircleImageFilled:(_Bool)arg1;
+ (id)_outlineImage;
+ (id)_filledOutlineImage;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)startAnimating;
- (void)stopAnimating;
- (void)updateImage;
- (id)valueText;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (_Bool)shouldUseOutline;
- (id)imageNameForCurrentState;
- (void)setNeedsUpdateValueText;
- (_Bool)shouldUseActiveTintForCurrentState;
- (_Bool)shouldShowOutlineForCurrentState;
- (_Bool)shouldFillOutlineForCurrentState;
- (void)setShowingValue:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateValueLabelVisibilityAnimated:(_Bool)arg1;
- (double)_additionalWidthForValue;
- (id)imageForCurrentState;
- (void)_updateValueText;
- (id)imageAnimationFramesForCurrentState;
- (void)_updateImageOrientationAnimated:(_Bool)arg1;

@end

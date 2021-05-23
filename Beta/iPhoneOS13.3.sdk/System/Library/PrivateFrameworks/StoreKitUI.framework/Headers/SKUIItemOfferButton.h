/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIControl.h>

@class NSMutableAttributedString, NSString, SKUIButtonViewElement, SKUIBuyButtonDescriptor, SKUICircleProgressIndicator, SKUIFocusedTouchGestureRecognizer, UIColor, UIImage, UIImageView, UILabel, UIView;

@protocol SKUIItemOfferButtonDelegate;

@interface SKUIItemOfferButton : UIControl

{
    UIColor *_backgroundColor;
    _Bool _borderCornerRadiusMatchesHalfBoundingDimension;
    UIView *_borderView;
    SKUIFocusedTouchGestureRecognizer *_cancelGestureRecognizer;
    UIImage *_cloudImage;
    UIColor *_cloudTintColor;
    UIColor *_confirmationColor;
    NSMutableAttributedString *_confirmationTitleAttributedString;
    long long _confirmationTitleStyle;
    struct CGSize _confirmationTitleFitSize;
    id <SKUIItemOfferButtonDelegate> _delegate;
    long long _fillStyle;
    UIImage *_image;
    UIImageView *_imageView;
    UIImageView *_borderedImageView;
    double _progress;
    SKUICircleProgressIndicator *_progressIndicator;
    _Bool _showsConfirmationState;
    NSMutableAttributedString *_titleAttributedString;
    struct CGSize _titleFitSize;
    UILabel *_titleLabel;
    long long _titleStyle;
    _Bool _universal;
    _Bool _usesDrawRectPath;
    UIImageView *_universalImageView;
    _Bool _downloadRestores;
    NSString *_offerButtonStateDescription;
    _Bool _disabledButSelectable;
    UIImage *_borderedImage;
    CDUnknownBlockType _centerImageProvider;
    double _borderColorAlphaMultiplier;
    SKUIBuyButtonDescriptor *_buttonDescriptor;
    NSString *_buyType;
    SKUIButtonViewElement *_element;
}

@property (retain, nonatomic) SKUIBuyButtonDescriptor *buttonDescriptor;
@property (copy, nonatomic) NSString *buyType;
@property (copy, nonatomic) UIColor *cloudTintColor;
@property (nonatomic, getter=isDisabledButSelectable) _Bool disabledButSelectable;
@property (retain, nonatomic) SKUIButtonViewElement *element;
@property (nonatomic, readonly) _Bool restores;
@property (nonatomic, readonly) _Bool supportsPlayButton;
@property (weak, nonatomic) id <SKUIItemOfferButtonDelegate> delegate;
@property (copy, nonatomic) NSString *confirmationTitle;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *borderedImage;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) CDUnknownBlockType centerImageProvider;
@property (nonatomic, readonly) NSString *offerButtonStateDescription;
@property (nonatomic) long long fillStyle;
@property (nonatomic) double borderColorAlphaMultiplier;
@property (nonatomic) double progress;
@property (nonatomic, readonly, getter=isShowingConfirmation) _Bool showingConfirmation;
@property (nonatomic) _Bool showsConfirmationState;
@property (nonatomic) long long progressType;
@property (nonatomic) long long confirmationTitleStyle;
@property (nonatomic) long long titleStyle;
@property (nonatomic, getter=isUniversal) _Bool universal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SKUIItemOfferButtonDelegate> itemOfferDelegate;

+ (id)_defaultTitleAttributes;
+ (id)_basicAnimationWithKeyPath:(id)arg1;
+ (id)itemOfferButtonWithAppearance:(id)arg1;
+ (id)cloudTintColorForBackgroundColor:(id)arg1;
+ (id)localizedTitleForItemState:(id)arg1 clientContext:(id)arg2;
+ (id)cloudImageWithTintColor:(id)arg1 arrowTintColor:(id)arg2;
+ (_Bool)_sizeMattersForTitleStyle:(long long)arg1;
+ (struct CGSize)_titleSizeThatFitsForSize:(struct CGSize)arg1 titleStyle:(long long)arg2 mutableAttributedString:(id)arg3;
+ (_Bool)canOpenItemForItemState:(id)arg1 clientContext:(id)arg2;
+ (id)playTintColorForBackgroundColor:(id)arg1;
+ (id)playImageWithTintColor:(id)arg1;
+ (id)_cachedImageForAttributedTitle:(id)arg1 titleStyle:(long long)arg2 size:(struct CGSize)arg3 fillStyle:(long long)arg4 universal:(_Bool)arg5 tintColor:(id)arg6 interfaceStyle:(long long)arg7;
+ (id)_universalPlusImageWithTintColor:(id)arg1;
+ (id)_imageForAttributedTitle:(id)arg1 titleStyle:(long long)arg2 size:(struct CGSize)arg3 fillStyle:(long long)arg4 universal:(_Bool)arg5 tintColor:(id)arg6;
+ (id)_imageForProgressType:(long long)arg1;
+ (struct UIEdgeInsets)_imageInsetsForProgressType:(long long)arg1;
+ (id)playHighlightImageWithTintColor:(id)arg1;

- (void)dealloc;
- (void)setEnabled:(_Bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)didMoveToWindow;
- (void)drawRect:(struct CGRect)arg1;
- (void)_removeAllAnimations:(_Bool)arg1;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setShowingConfirmation:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_removeCancelGestureRecognizer;
- (_Bool)setValuesUsingItemOffer:(id)arg1 itemState:(id)arg2 clientContext:(id)arg3 animated:(_Bool)arg4;
- (_Bool)setValuesUsingBuyButtonDescriptor:(id)arg1 itemState:(id)arg2 clientContext:(id)arg3 animated:(_Bool)arg4;
- (void)setColoringWithAppearance:(id)arg1;
- (void)removeButtonStateAnimations;
- (struct CGSize)layoutSizeThatFits:(struct CGSize)arg1;
- (void)_sendWillAnimate;
- (void)_sendDidAnimate;
- (void)showCloudImage;
- (double)_horizontalInsetForTitleStyle:(long long)arg1;
- (void)_reloadForCurrentState:(_Bool)arg1;
- (void)_updateForChangedConfirmationTitleProperty;
- (void)setProgressType:(long long)arg1 animated:(_Bool)arg2;
- (id)_buttonPropertiesForState:(id)arg1;
- (void)_transitionFromProgress:(id)arg1 toProgress:(id)arg2 withDuration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_transitionFromTitleOrImage:(id)arg1 toProgress:(id)arg2 withDuration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_transitionFromProgress:(id)arg1 toTitleOrImage:(id)arg2 withDuration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_transitionFromTitle:(id)arg1 toTitle:(id)arg2 withDuration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_updateForChangedTitleProperty;
- (_Bool)setTitle:(id)arg1 confirmationTitle:(id)arg2 itemState:(id)arg3 clientContext:(id)arg4 animated:(_Bool)arg5;
- (_Bool)hasNonBorderedImage;
- (void)_transitionFromImage:(id)arg1 toImage:(id)arg2 withDuration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)hasBorderedImage;
- (void)_transitionFromBorderedImage:(id)arg1 toTitle:(id)arg2 withDuration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_touchInBounds:(id)arg1;
- (struct CGRect)_borderedImageViewFrame;
- (id)_imageForProgressType:(long long)arg1;
- (void)_adjustViewOrderingForProperties:(id)arg1;
- (void)_insertUniversalView;
- (void)_insertBorderView;
- (void)_insertProgressIndicator;
- (void)_insertImageView;
- (void)_insertLabel;
- (void)_cancelGestureAction:(id)arg1;
- (void)_insertBorderedImageView;
- (void)_insertCancelGestureRecognizer;

@end

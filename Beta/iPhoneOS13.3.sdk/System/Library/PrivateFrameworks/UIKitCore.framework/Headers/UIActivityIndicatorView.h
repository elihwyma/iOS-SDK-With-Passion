/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UIColor, UIImageView, _UIActivityIndicatorMessageLabel, _UIActivityIndicatorViewArtworkCacheKey;

@interface UIActivityIndicatorView : UIView <Swift>

{
    _Bool _animating;
    _Bool _hidesWhenStopped;
    _Bool _restartAnimationOnNextLayout;
    _Bool _disableUpdateColorOnTraitCollectionChange;
    _Bool _hasShadow;
    _Bool _spinning;
    long long _activityIndicatorViewStyle;
    double _duration;
    UIColor *_color;
    UIImageView *_animatingImageView;
    _UIActivityIndicatorMessageLabel *_messageLabel;
    NSString *_message;
    long long _actualActivityIndicatorViewStyle;
    NSArray *_spokeImages;
    NSArray *_spokeHighlightImages;
    long long _spokeCount;
    long long _spokeFrameRatio;
    _UIActivityIndicatorViewArtworkCacheKey *_lastArtCacheKey;
    _UIActivityIndicatorViewArtworkCacheKey *_lastHighlightArtCacheKey;
    UIColor *_shadowColor;
    double _width;
    struct CGSize _shadowOffset;
}

@property (nonatomic, readonly, getter=_animatingImageView) UIImageView *animatingImageView;
@property (nonatomic, readonly, getter=_messageLabel) _UIActivityIndicatorMessageLabel *messageLabel;
@property (retain, nonatomic, getter=_message, setter=_setMessage:) NSString *message;
@property (nonatomic) double animationDuration;
@property (nonatomic, getter=isAnimating) _Bool animating;
@property (nonatomic, readonly, getter=_actualActivityIndicatorViewStyle) long long actualActivityIndicatorViewStyle;
@property (nonatomic, readonly, getter=_restartAnimationOnNextLayout) _Bool restartAnimationOnNextLayout;
@property (nonatomic, readonly, getter=_spokeImages) NSArray *spokeImages;
@property (nonatomic, readonly, getter=_spokeHighlightImages) NSArray *spokeHighlightImages;
@property (nonatomic, readonly, getter=_spokeCount) long long spokeCount;
@property (nonatomic, readonly, getter=_spokeFrameRatio) long long spokeFrameRatio;
@property (nonatomic, readonly, getter=_disableUpdateColorOnTraitCollectionChange) _Bool disableUpdateColorOnTraitCollectionChange;
@property (nonatomic, readonly, getter=_lastArtCacheKey) _UIActivityIndicatorViewArtworkCacheKey *lastArtCacheKey;
@property (nonatomic, readonly, getter=_lastHighlightArtCacheKey) _UIActivityIndicatorViewArtworkCacheKey *lastHighlightArtCacheKey;
@property (nonatomic) struct CGSize shadowOffset;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) double width;
@property (nonatomic) _Bool hasShadow;
@property _Bool spinning;
@property (nonatomic) long long activityIndicatorViewStyle;
@property (nonatomic) _Bool hidesWhenStopped;
@property (retain, nonatomic) UIColor *color;

+ (struct CGSize)defaultSizeForStyle:(long long)arg1;
+ (id)_loadResourcesForArtworkBasedStyle:(long long)arg1;
+ (id)_imageSetNameForArtworkBasedStyle:(long long)arg1 outImageCount:(out long long *)arg2;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)_commonInit;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)isHighlighted;
- (void)setHighlighted:(_Bool)arg1;
- (void)tintColorDidChange;
- (void)startAnimation;
- (void)stopAnimation;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)_removeAllAnimations:(_Bool)arg1;
- (id)initWithActivityIndicatorStyle:(long long)arg1;
- (void)startAnimating;
- (_Bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)stopAnimating;
- (_Bool)_hasShadow;
- (long long)_defaultStyle;
- (long long)_internalStyleForStyle:(long long)arg1;
- (long long)_actualStyleByResolvingAutoUpdatingStyle:(long long)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_updateMessageForStyle:(long long)arg1;
- (id)_defaultColorForStyle:(long long)arg1;
- (_Bool)_isShowingMessage;
- (void)_updateLayoutInfo;
- (long long)_externalStyleForStyle:(long long)arg1;
- (unsigned long long)_indexOfFirstImageForStartingAnimation;
- (void)_setUpAnimation;
- (void)_tearDownAnimation;
- (_Bool)_canCustomize;
- (double)_spokeWidthForGearWidth:(double)arg1;
- (double)_spokeLengthForGearWidth:(double)arg1;
- (double)_widthForGearWidth:(double)arg1;
- (double)_alphaValueForStep:(long long)arg1;
- (id)_imageForStep:(long long)arg1 withColor:(id)arg2;
- (_Bool)_isStatusBarStyle;
- (_Bool)_colorRequiresDynamicTinting;
- (id)_generateModernImagesForImages:(id)arg1 color:(id)arg2;
- (_Bool)_isArtworkBasedStyle;
- (id)_generateImagesForColor:(id)arg1 highlight:(_Bool)arg2;
- (void)_updateSubviewFramesWithBounds:(struct CGRect)arg1;
- (_Bool)_shouldGoToCustomStyle;
- (long long)_customStyleForStyle:(long long)arg1;
- (_Bool)_shouldGoBackToBaseStyle;
- (id)_artCacheKeyWithStyle:(long long)arg1 color:(id)arg2;
- (id)_imagesForStyle:(long long)arg1 color:(id)arg2 highlight:(_Bool)arg3;
- (id)_highlightColorForStyle:(long long)arg1;
- (struct CGRect)_animatingImageViewFrameForBounds:(struct CGRect)arg1;
- (struct CGRect)_messageLabelFrameForBounds:(struct CGRect)arg1;
- (long long)_sizeForStyle:(long long)arg1;
- (_Bool)_canCustomizeStyle:(long long)arg1;
- (_Bool)_hasClientSetColor;

@end

/*
 Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

#import <UIKit/UIImageView.h>

@class NSLayoutConstraint, UIImage, UIView;

@interface MPUArtworkView : UIImageView

{
    NSLayoutConstraint *_aspectConstraint;
    UIImage *_externalImage;
    UIView *_highlightView;
    _Bool _isDeallocating;
    _Bool _automaticallyApplyAspectConstraints;
    _Bool _dimsWhenHighlighted;
    _Bool _forcesAnimatedUnhighlighting;
    _Bool _displayingPlaceholder;
    UIImage *_placeholderImage;
}

@property (nonatomic, getter=isDisplayingPlaceholder) _Bool displayingPlaceholder;
@property (nonatomic, readonly) UIImage *_externalImage;
@property (nonatomic, getter=_aspectConstraintMultiplier, setter=_setAspectConstraintMultiplier:) double aspectConstraintMultiplier;
@property (nonatomic) _Bool automaticallyApplyAspectConstraints;
@property (nonatomic) _Bool dimsWhenHighlighted;
@property (nonatomic) _Bool forcesAnimatedUnhighlighting;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic, readonly) _Bool shouldDisplayPlaceholder;

- (void)dealloc;
- (void)setImage:(id)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateConstraints;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)startAnimating;
- (void)setHighlightedImage:(id)arg1;
- (void)stopAnimating;
- (void)setHighlightedAnimationImages:(id)arg1;
- (void)_imageDidChange;
- (void)_updateHighlightViewAnimated:(_Bool)arg1;
- (void)_setPlaceholderHidden:(_Bool)arg1;
- (_Bool)_shouldShowHighlightView;

@end

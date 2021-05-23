/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <CarPlaySupport/CPSButton.h>

@class CPBarButton, NSLayoutConstraint, UIImage, UIImageView, UIView;

@interface CPSBarButton : CPSButton

{
    _Bool _showBackIndicator;
    CPBarButton *_cyBarButton;
    UIImageView *_backIndicatorImageView;
    UIImage *_backIndicatorImage;
    UIView *_backgroundView;
    NSLayoutConstraint *_backIndicatorHeightConstraint;
}

@property (retain, nonatomic) CPBarButton *cyBarButton;
@property (nonatomic) _Bool showBackIndicator;
@property (retain, nonatomic) UIImageView *backIndicatorImageView;
@property (retain, nonatomic) UIImage *backIndicatorImage;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) NSLayoutConstraint *backIndicatorHeightConstraint;

+ (id)buttonWithCPBarButton:(id)arg1 showBackIndicator:(_Bool)arg2;

- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)didAddSubview:(id)arg1;
- (id)_externalUnfocusedBorderColor;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_setupBackButtonImagesIfNeccessary;
- (void)_updateBackIndicatorImageView;
- (void)_resetAlpha;

@end

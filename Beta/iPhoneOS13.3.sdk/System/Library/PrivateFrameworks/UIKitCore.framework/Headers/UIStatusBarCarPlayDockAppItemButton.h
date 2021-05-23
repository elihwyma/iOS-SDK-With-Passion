/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIButton.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSLayoutConstraint, NSString, UIImageView;

__attribute__((visibility("hidden")))
@interface UIStatusBarCarPlayDockAppItemButton : UIButton <Swift>

{
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_widthConstraint;
    _Bool _active;
    _Bool _hasBadge;
    NSString *_bundleIdentifier;
    UIImageView *_iconImageView;
    UIImageView *_iconHighlightImageView;
    UIImageView *_badgeView;
}

@property (nonatomic, getter=isActive) _Bool active;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *iconHighlightImageView;
@property (retain, nonatomic) UIImageView *badgeView;
@property (nonatomic, readonly) _Bool itemHasBundleIdentifier;
@property (nonatomic) _Bool hasBadge;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setCharge:(float)arg1;
- (float)charge;
- (void)_buttonPressed:(id)arg1;
- (_Bool)shouldShowBadge;
- (void)setBadgeHidden:(_Bool)arg1 animated:(_Bool)arg2;

@end

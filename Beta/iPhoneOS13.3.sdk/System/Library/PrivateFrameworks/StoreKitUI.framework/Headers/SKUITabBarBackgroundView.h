/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSString, UIColor, _UIBackdropView, _UINavigationBarAppearanceStorage;

__attribute__((visibility("hidden")))
@interface SKUITabBarBackgroundView : UIView

{
    _UIBackdropView *_backdropView;
    UIView *_borderView;
    _Bool barWantsAdaptiveBackdrop;
    _Bool translucent;
    _UINavigationBarAppearanceStorage *appearanceStorage;
    long long barStyle;
    UIColor *barTintColor;
    UIView *_shadowView;
    long long _backdropStyle;
}

@property (retain, nonatomic) _UINavigationBarAppearanceStorage *appearanceStorage;
@property (nonatomic) long long barStyle;
@property (retain, nonatomic) UIColor *barTintColor;
@property (nonatomic) _Bool barWantsAdaptiveBackdrop;
@property (retain, nonatomic, setter=_setShadowView:) UIView *_shadowView;
@property (nonatomic, getter=isTranslucent) _Bool translucent;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (nonatomic) long long backdropStyle;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_currentCustomBackground;
- (id)_currentCustomBackgroundRespectOversize_legacy:(_Bool *)arg1;
- (void)_setFrame:(struct CGRect)arg1 forceUpdateBackgroundImage:(_Bool)arg2;
- (void)_setIsContainedInPopover:(_Bool)arg1;
- (void)updateBackgroundImage;

@end

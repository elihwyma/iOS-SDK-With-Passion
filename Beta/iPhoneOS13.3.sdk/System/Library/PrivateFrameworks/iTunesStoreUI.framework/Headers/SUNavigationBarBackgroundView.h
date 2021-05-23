/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIView.h>

@class UIColor, _UIBackdropView, _UINavigationBarAppearanceStorage;

@interface SUNavigationBarBackgroundView : UIView

{
    _UIBackdropView *_backdropView;
    UIView *_borderView;
    _Bool _separatorOnTop;
    _Bool translucent;
    _Bool barWantsAdaptiveBackdrop;
    long long barStyle;
    UIColor *barTintColor;
    _UINavigationBarAppearanceStorage *appearanceStorage;
    UIView *_shadowView;
}

@property (readonly) _UIBackdropView *backdropView;
@property (nonatomic) long long backdropStyle;
@property (nonatomic) _Bool separatorOnTop;
@property (nonatomic) long long barStyle;
@property (retain, nonatomic) UIColor *barTintColor;
@property (retain, nonatomic) _UINavigationBarAppearanceStorage *appearanceStorage;
@property (retain, nonatomic, setter=_setShadowView:) UIView *_shadowView;
@property (nonatomic, getter=isTranslucent) _Bool translucent;
@property (nonatomic) _Bool barWantsAdaptiveBackdrop;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_currentCustomBackground;
- (id)_currentCustomBackgroundRespectOversize_legacy:(_Bool *)arg1;
- (void)_setFrame:(struct CGRect)arg1 forceUpdateBackgroundImage:(_Bool)arg2;
- (void)_setIsContainedInPopover:(_Bool)arg1;
- (void)updateBackgroundImage;

@end

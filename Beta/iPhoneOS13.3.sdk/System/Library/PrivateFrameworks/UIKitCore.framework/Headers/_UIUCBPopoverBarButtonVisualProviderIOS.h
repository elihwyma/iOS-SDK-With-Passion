/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIUCBBarButtonVisualProviderIOS.h>

@class UIColor, UIView;

__attribute__((visibility("hidden")))
@interface _UIUCBPopoverBarButtonVisualProviderIOS : _UIUCBBarButtonVisualProviderIOS

{
    UIView *_selectionBackgroundView;
    UIColor *_selectionBackgroundTintColor;
    UIColor *_selectionTintColor;
}

@property (retain, nonatomic) UIColor *selectionBackgroundTintColor;
@property (retain, nonatomic) UIColor *selectionTintColor;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateButton:(id)arg1 forSelectedState:(_Bool)arg2;
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;

@end

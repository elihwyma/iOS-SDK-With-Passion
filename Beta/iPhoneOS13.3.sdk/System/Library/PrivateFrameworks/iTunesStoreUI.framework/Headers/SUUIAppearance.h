/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, SUControlAppearance, SUTabBarAppearance, SUToolbarAppearance;

@interface SUUIAppearance : NSObject

{
    SUControlAppearance *_backButtonAppearance;
    SUControlAppearance *_confirmationButtonAppearance;
    SUControlAppearance *_destructiveButtonAppearance;
    SUControlAppearance *_exitStoreButtonAppearance;
    SUControlAppearance *_forwardButtonAppearance;
    _Bool _isDefaultAppearance;
    NSMutableDictionary *_navigationBarBackgroundImages;
    NSDictionary *_navigationBarTitleTextAttributes;
    NSMutableDictionary *_navigationButtonAppearance;
    NSMutableDictionary *_segmentedControlAppearance;
    SUTabBarAppearance *_tabBarAppearance;
    SUToolbarAppearance *_toolbarAppearance;
}

@property (copy, nonatomic) SUControlAppearance *backButtonAppearance;
@property (copy, nonatomic) SUControlAppearance *confirmationButtonAppearance;
@property (copy, nonatomic) SUControlAppearance *destructiveButtonAppearance;
@property (copy, nonatomic) SUControlAppearance *exitStoreButtonAppearance;
@property (copy, nonatomic) SUControlAppearance *forwardButtonAppearance;
@property (copy, nonatomic) NSDictionary *navigationBarTitleTextAttributes;
@property (copy, nonatomic) SUTabBarAppearance *tabBarAppearance;
@property (copy, nonatomic) SUToolbarAppearance *toolbarAppearance;

+ (id)defaultAppearance;
+ (id)_defaultTabBarAppearance;
+ (id)_defaultShadowWithColor:(id)arg1 offset:(struct CGSize)arg2;
+ (id)_defaultBackButtonAppearance;
+ (id)_defaultConfirmationButtonAppearance;
+ (id)_defaultDestructiveButtonAppearance;
+ (id)_defaultForwardButtonAppearance;
+ (id)_defaultButtonAppearance;
+ (id)_defaultDoneButtonAppearance;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)styleBarButtonItem:(id)arg1;
- (void)styleNavigationBar:(id)arg1;
- (void)styleTabBarItem:(id)arg1;
- (void)styleExitStoreButtonItem:(id)arg1;
- (void)styleToolbar:(id)arg1;
- (void)_styleBackBarButtonItem:(id)arg1;
- (void)styleConfirmationButtonItem:(id)arg1;
- (void)styleSegmentedControl:(id)arg1 tintStyle:(long long)arg2;
- (void)setNavigationBarBackgroundImage:(id)arg1 forBarMetrics:(long long)arg2;
- (void)setNavigationButtonAppearance:(id)arg1 forStyle:(long long)arg2;
- (id)_copySegmentedControlKeyWithStyle:(long long)arg1 tintStyle:(long long)arg2;
- (void)setSegmentedControlAppearance:(id)arg1 forStyle:(long long)arg2 tintStyle:(long long)arg3;
- (id)navigationButtonAppearanceForStyle:(long long)arg1;
- (id)segmentedControlAppearanceForStyle:(long long)arg1 tintStyle:(long long)arg2;
- (id)navigationBarBackgroundImageForBarMetrics:(long long)arg1;
- (void)styleDestructiveButton:(id)arg1;
- (void)styleForwardButtonItem:(id)arg1;
- (void)styleTabBar:(id)arg1;

@end

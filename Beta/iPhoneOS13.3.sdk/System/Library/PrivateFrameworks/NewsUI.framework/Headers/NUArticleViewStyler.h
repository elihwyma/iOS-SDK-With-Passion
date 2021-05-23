/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface NUArticleViewStyler : NSObject

{
    UIColor *_backgroundColor;
    long long _statusBarStyle;
    long long _topBackgroundStatusBarStyle;
    UIColor *_tabBarTintColor;
    UIColor *_toolbarTintColor;
}

@property (retain, nonatomic) UIColor *tabBarTintColor;
@property (retain, nonatomic) UIColor *toolbarTintColor;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) long long statusBarStyle;
@property (nonatomic, readonly) long long topBackgroundStatusBarStyle;

- (void)styleToolbar:(id)arg1;
- (void)styleTabBar:(id)arg1;
- (long long)statusBarStyleForBackgroundColor:(id)arg1;
- (void)unstyleTabBar:(id)arg1 overrideRestoreColor:(id)arg2;
- (void)unstyleToolbar:(id)arg1 overrideRestoreColor:(id)arg2;
- (id)initWithBackgroundColor:(id)arg1 topBackgroundColor:(id)arg2;

@end

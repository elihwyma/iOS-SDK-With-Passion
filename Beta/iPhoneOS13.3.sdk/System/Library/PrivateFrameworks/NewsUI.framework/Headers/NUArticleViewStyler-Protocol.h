/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@class UIColor;

@protocol NUArticleViewStyler

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) long long statusBarStyle;
@property (nonatomic, readonly) long long topBackgroundStatusBarStyle;

- (unsigned short)styleToolbar: /* Error: Ran out of types for this method. */;
- (unsigned short)styleTabBar: /* Error: Ran out of types for this method. */;
- (unsigned short)unstyleTabBar:overrideRestoreColor: /* Error: Ran out of types for this method. */;
- (unsigned short)unstyleToolbar:overrideRestoreColor: /* Error: Ran out of types for this method. */;

@end

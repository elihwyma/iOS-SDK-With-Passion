/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptViewController, UIPopoverController, UIViewController;

@interface SUScriptPopOver : SUScriptObject

{
    UIViewController *_contentViewController;
    _Bool _ignoreDismiss;
}

@property (readonly) UIViewController *activeViewController;
@property (retain, nonatomic) UIPopoverController *nativePopoverController;
@property (nonatomic, readonly) UIPopoverController *presentablePopoverController;
@property long long backgroundStyle;
@property double contentHeight;
@property double contentWidth;
@property (readonly) SUScriptViewController *presentingViewController;
@property (retain) SUScriptViewController *viewController;
@property (readonly) long long backgroundStyleBlack;
@property (readonly) long long backgroundStyleClear;
@property (readonly) long long backgroundStyleCream;
@property (readonly) long long backgroundStyleDefault;
@property (readonly) long long backgroundStyleShare;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)_className;
- (_Bool)isVisible;
- (void)dismissAnimated:(id)arg1;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)tearDownUserInterface;
- (void)_overlayWillShowNotification:(id)arg1;
- (void)_viewControllerDidDismiss:(id)arg1;
- (id)_presentablePopoverController;
- (void)_dismissAnimated:(_Bool)arg1;
- (_Bool)_shouldDisplayAsPopover;
- (id)_popOverController;
- (_Bool)_isViewControllerVisible;
- (void)_showAsModalViewController;
- (id)_nativeViewController;
- (void)_setNativeViewController:(id)arg1;
- (void)setContentWidth:(double)arg1 height:(double)arg2 animated:(_Bool)arg3;
- (_Bool)showFromElement:(id)arg1;
- (_Bool)showFromNavigationItem:(id)arg1;
- (void)_setIgnoresDismiss:(_Bool)arg1;

@end

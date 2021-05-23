/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIViewController.h>

@class ICViewControllerManager, UINavigationController, UIWindowScene;

@interface UIViewController (IC)

@property (nonatomic, readonly) ICViewControllerManager *ic_viewControllerManager;
@property (nonatomic, readonly) _Bool ic_isRTL;
@property (nonatomic, readonly) UINavigationController *ic_rootNavigationController;
@property (nonatomic, readonly) UIWindowScene *ic_windowScene;

+ (void)ic_enableUIViewAnimations:(_Bool)arg1 forBlock:(CDUnknownBlockType)arg2;

- (id)ic_safeAreaLayoutGuide;
- (void)ic_showViewController:(id)arg1 animated:(_Bool)arg2 sender:(id)arg3;
- (_Bool)ic_isViewVisible;
- (double)ic_safeAreaDistanceFromTop;
- (double)ic_safeAreaDistanceFromBottom;
- (void)ic_showSingleButtonAlertWithTitle:(id)arg1 message:(id)arg2;
- (id)ic_topViewController;
- (id)ic_embedInNavigationControllerForModalPresentation;

@end

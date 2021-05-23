/*
 Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <UIKit/UIViewController.h>

@class UIWindow;

@interface UIAccessibilityPresentingViewController : UIViewController

{
    UIWindow *_presentationWindow;
}

- (id)init;
- (void)dealloc;
- (void)loadView;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_voiceOverStatusChanged;
- (void)_cleanUpPresentationWindow;

@end

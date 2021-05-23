/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITableViewController.h>

@class UINavigationController, UIPrintingMessageView, UIPrintingProgress, UIWindow;

__attribute__((visibility("hidden")))
@interface UIPrintingProgressViewController : UITableViewController

{
    UIPrintingProgress *_printingProgress;
    UIPrintingMessageView *_messageView;
    UINavigationController *_navController;
    UIWindow *_window;
    double _rotationDelay;
}

- (void)setMessage:(id)arg1;
- (_Bool)visible;
- (void)dismissAnimated:(_Bool)arg1;
- (void)show;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)setDonePrinting:(_Bool)arg1;
- (void)doneProgress;
- (void)cancelProgress;
- (void)cleanupAfterDismiss;
- (id)initWithTitle:(id)arg1 message:(id)arg2 printingProgress:(id)arg3;
- (double)rotationDelay;

@end

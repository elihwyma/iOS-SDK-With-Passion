/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

@class SBMainScreenActiveInterfaceOrientationWindow, UITextView;

@interface SBLogWindowController : UIViewController

{
    UITextView *_logTextView;
    SBMainScreenActiveInterfaceOrientationWindow *_logWindow;
}

@property (retain, nonatomic) SBMainScreenActiveInterfaceOrientationWindow *logWindow;
@property (retain, nonatomic) UITextView *logTextView;

+ (id)sharedInstance;
+ (id)sharedInstanceIfAvailable;

- (void)show;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)hide;

@end

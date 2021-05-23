/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <UIKit/UIViewController.h>

@class NSString;

@protocol UIPopoverPresentationControllerDelegate;

@interface CACPopoverPresentingViewController : UIViewController

{
    id <UIPopoverPresentationControllerDelegate> _popoverPresentationDelegate;
    UIViewController *_viewControllerInPopover;
    struct CGRect _portraitUpSourceRect;
}

@property (weak, nonatomic) id <UIPopoverPresentationControllerDelegate> popoverPresentationDelegate;
@property (retain, nonatomic) UIViewController *viewControllerInPopover;
@property (nonatomic) struct CGRect portraitUpSourceRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (void)viewDidAppear:(_Bool)arg1;

@end

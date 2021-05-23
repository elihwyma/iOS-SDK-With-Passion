/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <ReplayKit/RPSystemBroadcastPickerViewController.h>

@class RPModalPresentationWindow;

@protocol RPSystemBroadcastPickerViewControllerDelegate;

@interface RPBroadcastPickerStandaloneViewController : RPSystemBroadcastPickerViewController

{
    RPModalPresentationWindow *_presentationWindow;
    id <RPSystemBroadcastPickerViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <RPSystemBroadcastPickerViewControllerDelegate> delegate;

- (void)viewDidDisappear:(_Bool)arg1;
- (void)presentAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissAfter:(double)arg1;
- (void)viewControllerDidFinish;
- (void)loadViewControllerWithBundleIdentifier:(id)arg1 showMicrophoneButton:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;

@end

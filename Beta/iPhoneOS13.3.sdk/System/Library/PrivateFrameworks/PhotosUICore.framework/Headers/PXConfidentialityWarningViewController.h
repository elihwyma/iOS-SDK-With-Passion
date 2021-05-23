/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class UIButton, UILabel, UIVisualEffectView;

@interface PXConfidentialityWarningViewController : UIViewController

{
    CDUnknownBlockType _cancellationHandler;
    UIVisualEffectView *_effectView;
    UILabel *_messageLabel;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
}

@property (nonatomic, readonly) UIVisualEffectView *effectView;
@property (nonatomic, readonly) UILabel *messageLabel;
@property (nonatomic, readonly) UIButton *confirmButton;
@property (nonatomic, readonly) UIButton *cancelButton;
@property (copy, nonatomic) CDUnknownBlockType cancellationHandler;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_handleButton:(id)arg1;
- (void)presentAsOverlayInWindowScene:(id)arg1;

@end

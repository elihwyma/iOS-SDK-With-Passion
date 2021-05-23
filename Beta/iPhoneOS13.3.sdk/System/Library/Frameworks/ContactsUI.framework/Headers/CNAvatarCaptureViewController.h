/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIViewController.h>

@class AVTView, CNCaptureButtonView, NSLayoutConstraint, UIButton, UIImage, UILabel, UIView;

@protocol AVTAvatarRecord, CNAvatarCaptureViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNAvatarCaptureViewController : UIViewController

{
    id <CNAvatarCaptureViewControllerDelegate> _delegate;
    AVTView *_avtView;
    NSLayoutConstraint *_avtViewHeightConstraint;
    UILabel *_promptLabel;
    id <AVTAvatarRecord> _avatarRecord;
    CNCaptureButtonView *_captureButtonView;
    UIButton *_cancelButton;
    UIView *_captureFooter;
    UIImage *_capturedImage;
}

@property (retain, nonatomic) AVTView *avtView;
@property (nonatomic) NSLayoutConstraint *avtViewHeightConstraint;
@property (retain, nonatomic) UILabel *promptLabel;
@property (retain, nonatomic) id <AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) CNCaptureButtonView *captureButtonView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIView *captureFooter;
@property (retain, nonatomic) UIImage *capturedImage;
@property (weak, nonatomic) id <CNAvatarCaptureViewControllerDelegate> delegate;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithAvatarRecord:(id)arg1;
- (void)loadAvatarView;
- (void)addPromptLabel;
- (void)updateAvtViewAspectRatioConstraint;
- (_Bool)shouldUseLandscapeLayout;
- (void)layoutFooterView;
- (void)setupFooterView;
- (void)dismissCaptureController;
- (void)didTapCancelButton:(id)arg1;
- (void)didTapCaptureButton:(id)arg1;

@end

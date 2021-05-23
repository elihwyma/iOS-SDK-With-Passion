/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

@class IMCloudKitSyncProgress, UIButton, UIColor, UILabel, UIProgressView;

@protocol CKCloudKitSyncProgressViewControllerDelegate;

@interface CKCloudKitSyncProgressViewController : UIViewController

{
    _Bool _hidden;
    id <CKCloudKitSyncProgressViewControllerDelegate> _delegate;
    IMCloudKitSyncProgress *_lastProgress;
    UIColor *_originalProgressTintColor;
    UILabel *_progressLabel;
    UILabel *_userMessageLabel;
    UIButton *_actionButton;
    UIProgressView *_progressBar;
}

@property (retain, nonatomic) IMCloudKitSyncProgress *lastProgress;
@property (copy, nonatomic) UIColor *originalProgressTintColor;
@property (nonatomic, readonly) UILabel *progressLabel;
@property (nonatomic, readonly) UILabel *userMessageLabel;
@property (nonatomic, readonly) UIButton *actionButton;
@property (nonatomic, readonly) UIProgressView *progressBar;
@property (weak, nonatomic) id <CKCloudKitSyncProgressViewControllerDelegate> delegate;
@property (nonatomic, getter=isHidden) _Bool hidden;
@property (nonatomic) _Bool actionButtonEnabled;

- (id)init;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)_actionButtonWasPressed:(id)arg1;
- (id)_createLabel;
- (void)_addProgressLabel;
- (void)_addProgressView;
- (void)_addUserMessageLabel;
- (void)_addActionButton;
- (void)showProgressBarWithIndeterminateProgress:(_Bool)arg1 percentComplete:(double)arg2;
- (void)showUserMessageWithString:(id)arg1 showActionButton:(_Bool)arg2 withActionButtonLabel:(id)arg3;
- (void)updateWithCloudKitProgress:(id)arg1;
- (void)addToToolbar:(id)arg1;

@end

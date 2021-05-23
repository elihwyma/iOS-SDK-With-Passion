/*
 Image: /System/Library/PrivateFrameworks/RapportUI.framework/RapportUI
 */

#import <UIKit/UIViewController.h>

@class NSObject, RPPINEntryView, UIActivityIndicatorView, UIButton, UILabel;

@protocol OS_dispatch_source;

@interface RPPairingPromptViewController : UIViewController

{
    NSObject<OS_dispatch_source> *_retryTimer;
    unsigned long long _retryDeadlineTicks;
    CDUnknownBlockType _dismissHandler;
    CDUnknownBlockType _tryPasswordHandler;
    UIButton *_cancelButton;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    RPPINEntryView *_pinEntryView;
    UIActivityIndicatorView *_progressSpinner;
    UILabel *_progressLabel;
}

@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) RPPINEntryView *pinEntryView;
@property (retain, nonatomic) UIActivityIndicatorView *progressSpinner;
@property (retain, nonatomic) UILabel *progressLabel;
@property (copy, nonatomic) CDUnknownBlockType dismissHandler;
@property (copy, nonatomic) CDUnknownBlockType tryPasswordHandler;

+ (id)instantiateViewController;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_retryTimer;
- (void)handleCancelButton:(id)arg1;
- (void)handlePINEntered:(id)arg1;
- (void)updateWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;

@end

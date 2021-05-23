/*
 Image: /System/Library/PrivateFrameworks/RapportUI.framework/RapportUI
 */

#import <UIKit/UIViewController.h>

@class NSString, UIButton, UILabel;

@interface RPPairingShowViewController : UIViewController

{
    CDUnknownBlockType _dismissHandler;
    NSString *_password;
    UIButton *_cancelButton;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_verificationCodeLabel;
}

@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *verificationCodeLabel;
@property (copy, nonatomic) CDUnknownBlockType dismissHandler;
@property (copy, nonatomic) NSString *password;

+ (id)instantiateViewController;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)handleCancelButton:(id)arg1;
- (void)_updatePasswordUI;

@end

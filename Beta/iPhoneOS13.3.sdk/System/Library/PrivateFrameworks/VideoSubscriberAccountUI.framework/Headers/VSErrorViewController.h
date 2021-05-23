/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <UIKit/UIViewController.h>

@class NSError, UIButton, UILabel, VSFontCenter;

@interface VSErrorViewController : UIViewController

{
    _Bool _recoveryDestructive;
    NSError *_error;
    UIButton *_recoveryButton;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    VSFontCenter *_fontCenter;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UIButton *recoveryButton;
@property (retain, nonatomic) VSFontCenter *fontCenter;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, getter=isRecoveryDestructive) _Bool recoveryDestructive;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)_updateText;
- (void)_recoveryButtonPressed:(id)arg1;

@end

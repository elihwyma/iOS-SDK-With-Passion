/*
 Image: /System/Library/PrivateFrameworks/NewDeviceOutreachUI.framework/NewDeviceOutreachUI
 */

#import <UIKitCore/UIViewController.h>

@class NDOWarranty, NSString, UIButton, UILabel, UIStackView;

@protocol NDOAppleCareFlowDelegate;

@interface NDOAppleCareViewController : UIViewController

{
    id <NDOAppleCareFlowDelegate> _presentor;
    NDOWarranty *_warranty;
    NSString *_serialNumber;
    unsigned long long _presentationType;
    UILabel *_detailsTextView;
    UIStackView *_buttonStackView;
    UIButton *_notNowButton;
    UIButton *_continueButton;
}

@property (retain) NDOWarranty *warranty;
@property (retain) NSString *serialNumber;
@property unsigned long long presentationType;
@property (weak, nonatomic) UILabel *detailsTextView;
@property (weak, nonatomic) UIStackView *buttonStackView;
@property (weak, nonatomic) UIButton *notNowButton;
@property (weak, nonatomic) UIButton *continueButton;
@property (weak) id <NDOAppleCareFlowDelegate> presentor;

- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)cancelPressed:(id)arg1;
- (id)initWithWarranty:(id)arg1 presentationType:(unsigned long long)arg2 serialNumber:(id)arg3;
- (id)initWithWarranty:(id)arg1;
- (id)initWithWarranty:(id)arg1 presentationType:(unsigned long long)arg2;
- (void)completeWithStatus:(unsigned long long)arg1;
- (void)webviewFinishedWithCompletion:(unsigned long long)arg1;
- (void)getAppleCarePressed:(id)arg1;
- (void)notNowPressed:(id)arg1;

@end

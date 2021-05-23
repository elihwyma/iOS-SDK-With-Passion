/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIViewController.h>

@class UILabel, UITextView;

@interface HUCameraRecordingPrivacyTextViewController : UIViewController

{
    UILabel *_headerLabel;
    UITextView *_consentTextView;
}

@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UITextView *consentTextView;

- (void)viewDidLoad;
- (void)_addConstraints;

@end

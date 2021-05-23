/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKViewController.h>

@class UITextView;

@interface HKOrganDonationMoreAboutPrivacyViewController : HKViewController

{
    UITextView *_textView;
}

@property (retain, nonatomic) UITextView *textView;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_updateForCurrentSizeCategory;
- (void)doneButtonTapped:(id)arg1;

@end

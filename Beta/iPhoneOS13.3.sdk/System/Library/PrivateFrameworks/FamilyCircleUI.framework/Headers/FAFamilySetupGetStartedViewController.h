/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <UIKit/UIViewController.h>

@class AAFamilyEligibilityResponse, ACAccount, ACAccountStore, FAFamilySharingFeaturesView, NSString, UIButton, UIImageView, UILabel, UIScrollView, UIView;

@protocol FAFamilySetupPageDelegate;

@interface FAFamilySetupGetStartedViewController : UIViewController

{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    AAFamilyEligibilityResponse *_familyEligibilityResponse;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UILabel *_titleLabel;
    UIImageView *_familySharingLogo;
    UILabel *_descriptionLabel;
    UIButton *_getStartedButton;
    FAFamilySharingFeaturesView *_familyFeaturesView;
    id <FAFamilySetupPageDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <FAFamilySetupPageDelegate> delegate;

- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)_updateFonts;
- (id)initWithAccount:(id)arg1 store:(id)arg2;
- (id)initWithAccount:(id)arg1 store:(id)arg2 familyEligibilityResponse:(id)arg3;
- (double)_heightForText:(id)arg1 constrainedToWidth:(double)arg2;
- (id)_createDescriptionLabelForText:(id)arg1;
- (void)_getStartedButtonWasTapped:(id)arg1;

@end

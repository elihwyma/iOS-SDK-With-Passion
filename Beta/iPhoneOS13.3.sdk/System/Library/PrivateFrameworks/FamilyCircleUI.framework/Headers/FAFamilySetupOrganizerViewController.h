/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <FamilyCircleUI/FAConfirmIdentityViewController.h>

@class NSString;

@protocol FAFamilySetupPageDelegate;

@interface FAFamilySetupOrganizerViewController : FAConfirmIdentityViewController

{
    id <FAFamilySetupPageDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <FAFamilySetupPageDelegate> delegate;

- (void)viewDidLoad;
- (id)instructions;
- (void)_cancelButtonWasTapped:(id)arg1;
- (id)pageTitle;
- (id)initWithAccount:(id)arg1 store:(id)arg2;
- (id)_createCancelButton;
- (_Bool)shouldShowInviteeInstructions;
- (id)titleForContinuebutton;
- (void)continueButtonWasTapped:(id)arg1;

@end

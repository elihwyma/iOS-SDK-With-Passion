/*
 Image: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
 */

#import <FileProviderUI/FPUIAuthenticationTableViewController.h>

@class FPUIAuthenticationSectionDescriptor, NSArray, NSLayoutConstraint, NSString, UISwitch, UITextField;

@interface FPUIAuthenticationCredentialsViewController : FPUIAuthenticationTableViewController

{
    NSArray *_credentialDescriptors;
    long long _selectedCredentialRow;
    FPUIAuthenticationSectionDescriptor *_credentialsInputSection;
    FPUIAuthenticationSectionDescriptor *_rememberPasswordSection;
    UITextField *_nameInputTextField;
    UITextField *_passwordInputTextField;
    UISwitch *_rememberPasswordSwitch;
    NSLayoutConstraint *_textFieldLeadingAnchorConstraint;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)_next:(id)arg1;
- (_Bool)_canMoveToNextStep;
- (id)defaultRightBarButtonItem;
- (void)setupTableViewSections;
- (void)_updateCurrentlyVisibleSections;
- (id)_rowDescriptorForCredentialDescriptor:(id)arg1;
- (void)_updateTextFieldConstraints;
- (void)_updateCanTransitionToNextStepState;
- (void)_updateCurrentlyVisibleSectionsNeedsReloadData:(_Bool)arg1;
- (id)initWithCredentialDescriptors:(id)arg1;

@end

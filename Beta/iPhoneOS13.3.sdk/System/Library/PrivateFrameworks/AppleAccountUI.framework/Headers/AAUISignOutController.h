/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <UIKit/UINavigationController.h>

@class ACAccount, ACAccountStore, NSDictionary, NSString;

@protocol AAUISignOutControllerDelegate;

@interface AAUISignOutController : UINavigationController

{
    ACAccountStore *_accountStore;
    long long _currentStyle;
    NSDictionary *_dataclassOptions;
    ACAccount *_account;
}

@property (retain, nonatomic, setter=_setAccountStore:) ACAccountStore *_accountStore;
@property (copy, nonatomic, setter=_setDataclassOptions:) NSDictionary *_dataclassOptions;
@property (weak, nonatomic) id <AAUISignOutControllerDelegate> delegate;
@property (nonatomic, readonly) ACAccount *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_updateStyleIfNeeded;
- (id)footerTextForDataclassPickerViewController:(id)arg1;
- (void)dataclassPickerViewControllerDidCancel:(id)arg1;
- (void)dataclassPickerViewController:(id)arg1 didCompleteWithDataclassActions:(struct NSDictionary *)arg2;
- (void)prepareInViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (struct NSDictionary *)_actionableDataclassOptions;
- (id)_spinnerViewControllerForActions:(struct NSDictionary *)arg1;
- (id)_dataclassViewController;
- (void)_mainQueue_continueSignOutWithDataclassActions:(struct NSDictionary *)arg1;
- (_Bool)_hasiCloudPhotosData;
- (id)_appendToSignoutMessage:(id)arg1 appendedString:(id)arg2;
- (_Bool)_hasiCloudDriveData;
- (_Bool)_hasHealthData;
- (_Bool)_hasPaymentPasses;
- (void)_mainQueue_promptForConfirmationInViewController:(id)arg1 simplified:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)_signOutMessageSimplified:(_Bool)arg1 withConfirmation:(_Bool)arg2;
- (void)_delegate_signOutControllerDidCompleteWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_delegate_signOutControllerDidCancel;
- (void)_mainQueue_presentSpinnerPageWithDataclassActions:(struct NSDictionary *)arg1 completion:(CDUnknownBlockType)arg2;

@end

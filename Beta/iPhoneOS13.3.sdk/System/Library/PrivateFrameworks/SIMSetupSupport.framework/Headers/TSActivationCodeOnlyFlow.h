/*
 Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

#import <SIMSetupSupport/TSSIMSetupFlow.h>

@class NSError, NSString, UIBarButtonItem, UIViewController;

@protocol TSSetupFlowItem;

@interface TSActivationCodeOnlyFlow : TSSIMSetupFlow

{
    _Bool _confirmationCodeRequired;
    NSError *_planInstallError;
    NSString *_carrierName;
    unsigned long long _userConsentType;
    UIBarButtonItem *_cancelButton;
    UIViewController<TSSetupFlowItem> *_currentViewController;
    _Bool _isPreinstallingViewControllerActive;
}

@property _Bool isPreinstallingViewControllerActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)firstViewController;
- (void)viewControllerDidComplete:(id)arg1;
- (void)setDefaultNavigationItems:(id)arg1;
- (long long)signupUserConsentResponse;
- (id)nextViewControllerFrom:(id)arg1;
- (void)popViewController:(id)arg1;
- (void)firstViewController:(CDUnknownBlockType)arg1;
- (void)planItemsUpdated:(id)arg1 planListError:(id)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <AppleAccountUI/AAUIBleachedNavigationController.h>

@class AAGrandSlamSigner, AAUIRemoteUIController, ACAccount, ACAccountStore, NSArray, NSMutableURLRequest, NSString, UIActivityIndicatorView, UINavigationItem;

@protocol FASetupDelegate;

@interface FAFamilySetupViewController : AAUIBleachedNavigationController

{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    AAGrandSlamSigner *_grandSlamSigner;
    AAUIRemoteUIController *_remoteUIController;
    NSMutableURLRequest *_startRemoteUIRequest;
    NSMutableURLRequest *_currentRemoteUIRequest;
    _Bool _isShowingSpinner;
    UIActivityIndicatorView *_spinnerView;
    NSArray *_originalRightBarButtonItems;
    UINavigationItem *_navigationItemShowingSpinner;
}

@property (weak, nonatomic) id <FASetupDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (_Bool)shouldAutorotate;
- (_Bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(_Bool)arg3;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (id)initWithAccount:(id)arg1 grandSlamSigner:(id)arg2 familyEligibilityResponse:(id)arg3;
- (id)_initWithAccount:(id)arg1 grandSlamSigner:(id)arg2 rootViewController:(id)arg3;
- (id)_createCloseButton;
- (_Bool)_isRunningInSettings;
- (id)_urlForLaunchingSettings;
- (void)_loadRemoteUIPages;
- (void)_closeButtonWasTapped:(id)arg1;
- (void)familySetupPage:(id)arg1 didCompleteWithSuccess:(_Bool)arg2;
- (void)_showActivitySpinnerInNavigationBar;
- (void)_sendUserToiTunesSettings;
- (void)_remoteUIDidCancel;
- (void)_hideActivitySpinnerInNavigationBar;
- (id)initTrimmedFlowWithAccount:(id)arg1 grandSlamSigner:(id)arg2;

@end

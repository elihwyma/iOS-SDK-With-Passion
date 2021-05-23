/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <AccountsUI/ACUIViewController.h>

#import <FamilyCircleUI/Swift-Protocol.h>

@class AAFamilyDetailsResponse, AAFamilyMember, AAGrandSlamSigner, AAUIProfilePictureStore, AAUIRemoteUIController, AAUIServerUIHookHandler, ACAccount, ACAccountStore, CNMonogrammer, FAChildAccountCreationController, FACircleRemoteUIDelegate, FAFamilyCreditCard, FAFamilyNotificationObserver, FARequestConfigurator, FASharedSubscriptionSpecifierProvider, NSArray, NSMutableDictionary, NSMutableURLRequest, NSObject, NSOperationQueue, NSString, NSURL, PSSpecifier, SSAccount, UINavigationController, UITableViewCell;

@protocol FAFamilySettingsViewControllerDelegate;

@interface FAFamilySettingsViewController : ACUIViewController <Swift>

{
    AAGrandSlamSigner *_iCloudGrandSlamSigner;
    AAGrandSlamSigner *_appleIDGrandSlamSigner;
    ACAccount *_appleAccount;
    ACAccount *_grandSlamAccount;
    SSAccount *_itunesAccount;
    ACAccountStore *_accountStore;
    AAFamilyDetailsResponse *_familyDetailsResponse;
    NSOperationQueue *_networkingQueue;
    PSSpecifier *_familyMembersGroup;
    PSSpecifier *_addFamilyMemberCell;
    AAUIProfilePictureStore *_profilePictureStore;
    CNMonogrammer *_monogrammer;
    AAUIRemoteUIController *_iCloudRemoteUIController;
    AAUIRemoteUIController *_appleIDRemoteUIController;
    AAUIRemoteUIController *_familyV2RemoteUIController;
    FACircleRemoteUIDelegate *_familyRemoteUIDelegate;
    UITableViewCell *_activeCell;
    NSURL *_activeURL;
    AAFamilyMember *_memberBeingViewed;
    NSMutableDictionary *_memberDetailsPageSurrogatesByOM;
    FAChildAccountCreationController *_childAccountCreationController;
    UINavigationController *_childAccountCreationNavController;
    NSObject *_profilePictureStoreDidChangeObserver;
    FAFamilyNotificationObserver *_notificationObserver;
    _Bool _fetchingPaymentInfo;
    FAFamilyCreditCard *_paymentMethod;
    NSArray *_paymentInfoSpecifiers;
    _Bool _fetchingPaymentMethodImage;
    NSMutableURLRequest *_currentRemoteUIRequest;
    FARequestConfigurator *_requestConfigurator;
    AAUIServerUIHookHandler *_serverUIHookHandler;
    FACircleRemoteUIDelegate *_faCircleRemoteUIDelegate;
    FASharedSubscriptionSpecifierProvider *_sharedSubscriptionSpecifierProvider;
    id <FAFamilySettingsViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <FAFamilySettingsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (id)specifiers;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(_Bool)arg3;
- (void)remoteUIController:(id)arg1 didRemoveObjectModel:(id)arg2;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (id)remoteUIController:(id)arg1 createPageWithName:(id)arg2 attributes:(id)arg3;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long *)arg3;
- (void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2;
- (id)_requestConfigurator;
- (id)_sharedSubscriptionSpecifierProvider;
- (void)_fetchUpdatedFamilyDetailsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_createSpecifierForFamilyMemberGroup;
- (id)_createSpecifierForFamilyMemberCell:(id)arg1;
- (id)_createSpecifierForPendingMember:(id)arg1;
- (void)_addFamilyMemberButtonWasTapped:(id)arg1;
- (id)_sharedSubscriptionSpecifiers;
- (id)_createSpecifiersForPaymentInfo;
- (void)_familyMemberCellWasTapped:(id)arg1;
- (void)_pendingFamilyMemberCellWasTapped:(id)arg1;
- (void)_reloadPaymentInfoSpecifiersAnimated:(_Bool)arg1;
- (_Bool)_hasActiveCell;
- (void)_loadRemoteUIWithRequest:(id)arg1 url:(id)arg2 specifier:(id)arg3 type:(long long)arg4;
- (void)_loadRemoteUIWithRequest:(id)arg1 specifier:(id)arg2 type:(long long)arg3;
- (void)_startSpinnerInCellLoadingRemoteUI:(id)arg1;
- (void)_setFresnoRemoteUIDelgate:(id)arg1;
- (void)_stopSpinnerInCellLoadingRemoteUI;
- (void)_addMemberWithEventType:(id)arg1;
- (void)_performEventWithContext:(id)arg1 specifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_appleIDGrandSlamSigner;
- (id)_itunesAccount;
- (void)_showConnectivityAlert;
- (void)_handleFamilyStatusChange:(id)arg1;
- (void)_handleFamilySubscriptionChanged;
- (void)_updateMemberDetailsPageWithLinkedAppleID:(id)arg1;
- (void)_handleFamilyDeletion;
- (void)_handleMemberDeletion:(id)arg1;
- (void)_handleMemberUpdate:(id)arg1;
- (void)_fireFamilyUpdateNotification;
- (void)_fetchFamilyPaymentInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)reloadSpecifiersForProvider:(id)arg1 oldSpecifiers:(id)arg2 animated:(_Bool)arg3;
- (void)didSelectSpecifier:(id)arg1;
- (id)initWithAppleAccount:(id)arg1 grandSlamSigner:(id)arg2 familyDetailsResponse:(id)arg3;
- (id)_imageFromBundle:(id)arg1;
- (void)_learnMoreLinkButtonWasTapped:(id)arg1;
- (void)_paymentMethodCellWasTapped:(id)arg1;

@end

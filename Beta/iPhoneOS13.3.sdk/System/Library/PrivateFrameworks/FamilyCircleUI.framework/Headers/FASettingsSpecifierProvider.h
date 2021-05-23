/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <Foundation/NSObject.h>

@class AAFamilyDetailsResponse, AAFamilyEligibilityResponse, AAGrandSlamSigner, AIDAAccountManager, FACircleContext, FAFamilyMemberDetailsPageSurrogate, FAFamilyNotificationObserver, FARequestConfigurator, NSArray, NSMutableArray, NSOperationQueue, NSString, PSListController, PSSpecifier;

@protocol AAUISpecifierProviderDelegate;

@interface FASettingsSpecifierProvider : NSObject

{
    FAFamilyMemberDetailsPageSurrogate *_profileSurrogate;
    FAFamilyNotificationObserver *_familyNotificationObserver;
    PSListController *_presenter;
    PSSpecifier *_familyCellSpecifier;
    PSSpecifier *_invitationsCellSpecifier;
    _Bool _isLoadingFamilyDetails;
    _Bool _didFailToGetFamilyDetails;
    NSMutableArray *_pendingFamilyDetailsCompletionBlocks;
    AAFamilyDetailsResponse *_familyDetailsResponse;
    AAFamilyEligibilityResponse *_familyEligibilityResponse;
    NSMutableArray *_pendingInvites;
    NSString *_familyStatusSummary;
    NSString *_invitationSummary;
    long long _familyEligibilityStatus;
    _Bool _isHandlingURLForInvite;
    NSOperationQueue *_networkActivityQueue;
    AIDAAccountManager *_accountManager;
    AAGrandSlamSigner *_grandSlamSigner;
    FARequestConfigurator *_requestConfigurator;
    FACircleContext *_context;
    _Bool _delayedEnterInitiateFlow;
    id <AAUISpecifierProviderDelegate> _delegate;
    NSArray *_specifiers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <AAUISpecifierProviderDelegate> delegate;
@property (copy, nonatomic) NSArray *specifiers;

- (void)dealloc;
- (_Bool)_isEnabled;
- (_Bool)handleURL:(id)arg1;
- (id)_accountStore;
- (id)_appleAccount;
- (id)_grandSlamSigner;
- (id)initWithAccountManager:(id)arg1;
- (void)reloadSpecifiers;
- (_Bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(_Bool)arg3;
- (void)remoteUIController:(id)arg1 didRefreshObjectModel:(id)arg2;
- (void)familySetupViewController:(id)arg1 didCompleteWithSuccess:(_Bool)arg2;
- (void)_handleObjectModelChangeForController:(id)arg1 objectModel:(id)arg2 isModal:(_Bool)arg3;
- (id)_requestConfigurator;
- (void)familySettingsViewControllerDidDeleteFamily:(id)arg1;
- (void)familySettingsViewControllerDidUpdateFamily:(id)arg1;
- (id)initWithAccountManager:(id)arg1 presenter:(id)arg2;
- (void)_loadFamilyDetailsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_familySpecifier;
- (id)_invitationsCellSpecifier;
- (id)_valueForInvitiationsSpecifier:(id)arg1;
- (void)_pendingInvitationsSpecifierWasTapped:(id)arg1;
- (unsigned long long)_familyState;
- (id)_valueForFamilySpecifier:(id)arg1;
- (void)_viewFamilySpecifierWasTapped:(id)arg1;
- (void)_setUpFamilySpecifierWasTapped:(id)arg1;
- (void)_handleFamilyDetailsResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadFamilyEligibilityWithCompletion:(CDUnknownBlockType)arg1;
- (void)_showUnderageAlertWithEligibilityResponse:(id)arg1;
- (void)_initiateFamily;
- (void)_clearFamilyState;
- (void)_reloadFamilySpecifiersAnimated:(_Bool)arg1;
- (void)_initiateFamilyWithResources:(id)arg1;
- (id)_configureContextWithType:(id)arg1 resourceDictionary:(id)arg2;
- (void)_reloadFamily;
- (void)_presentPendingInvitesRemoteUI;
- (void)_handleFamilyEligibilityResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleShowFamilyInviteActionURL:(id)arg1;
- (void)_handleStartFamilySetupActionURL:(id)arg1;
- (void)_handleShowFamilySettingsURL:(id)arg1;
- (void)_handleShowChildTransferActionURL:(id)arg1;
- (void)_handleShowInvitesActionURL:(id)arg1;
- (id)_acuPresenter;
- (void)_handleShowInviteActionURL:(id)arg1 isChildTransfer:(_Bool)arg2;
- (void)_reloadFamilySpecifiers;

@end

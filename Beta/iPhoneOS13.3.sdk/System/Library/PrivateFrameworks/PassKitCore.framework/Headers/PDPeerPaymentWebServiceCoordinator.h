/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSHashTable, NSMutableArray, NSString, PDAssertionManager, PDCloudStoreNotificationCoordinator, PDPeerPaymentWebServiceArchiver, PDPushNotificationManager, PDUserNotificationManager, PKPaymentWebService, PKPeerPaymentAccount, PKPeerPaymentWebService;

@protocol OS_dispatch_queue, PDPeerPaymentWebServiceCoordinatorDataSource, PDWebServiceCoordinatorPassStore;

@interface PDPeerPaymentWebServiceCoordinator : NSObject

{
    PDPushNotificationManager *_pushNotificationManager;
    NSObject<OS_dispatch_queue> *_sharedPeerPaymentWebServiceQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    PDPeerPaymentWebServiceArchiver *_archiver;
    PKPeerPaymentWebService *_sharedPeerPaymentWebService;
    PKPeerPaymentAccount *_account;
    PKPeerPaymentAccount *_mockAccount;
    PDAssertionManager *_assertionManager;
    PDUserNotificationManager *_userNotificationManager;
    id <PDPeerPaymentWebServiceCoordinatorDataSource> _dataSource;
    id <PDWebServiceCoordinatorPassStore> _passStore;
    NSMutableArray *_pendingAccountFetches;
    NSMutableArray *_queuedPendingAccountFetches;
    _Bool _isFetchingAccount;
    struct os_unfair_lock_s _lockObservers;
    NSHashTable *_observers;
    PDCloudStoreNotificationCoordinator *_cloudStoreNotificationCoordinator;
    PKPaymentWebService *_paymentWebService;
}

@property (retain, nonatomic) PDCloudStoreNotificationCoordinator *cloudStoreNotificationCoordinator;
@property (retain, nonatomic) PKPaymentWebService *paymentWebService;
@property (nonatomic, readonly) PKPeerPaymentWebService *sharedPeerPaymentWebService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)accountWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerDeviceWithForceReregister:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unregisterDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)registrationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)downloadPassIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateMockAccountBalanceByAddingAmount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cloudStoreStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)initalizeCloudStoreIfNecessaryWithHandler:(CDUnknownBlockType)arg1;
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (id)sharedWebService;
- (void)registerDeviceWithRegistrationURL:(id)arg1 pushToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;
- (void)_accessObserversWithHandler:(CDUnknownBlockType)arg1;
- (void)cloudStoreNotificationCoordinator:(id)arg1 createdZoneWithName:(id)arg2;
- (id)pushNotificationTopics;
- (void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2;
- (void)applyPushNotificationToken:(id)arg1;
- (void)_updateSharedCacheWithWebService:(id)arg1;
- (void)_updateSharedCacheWithAccount:(id)arg1;
- (id)_mockAccountInitialState;
- (void)_schedulePeerPaymentCoordinatorActivities;
- (void)_archiveSharedPeerPaymentWebServiceContext;
- (void)_updateAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)_schedulePeerPaymentReregisterActivityForReason:(id)arg1;
- (void)registerDeviceWithRegistrationURL:(id)arg1 pushToken:(id)arg2 forceReregister:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_registerWithPeerPaymentWebService:(id)arg1 registerURL:(id)arg2 pushToken:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (unsigned long long)_peerPaymentErrorStateForRegistrationResponse:(id)arg1 error:(id)arg2;
- (void)deleteSharedWebServiceWithDiagnosticReason:(id)arg1;
- (void)_downloadAssociatedPeerPaymentPassWithCompletion:(CDUnknownBlockType)arg1;
- (void)_initalizeCloudStoreIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_shouldAttemptBackgroundPeerPaymentPassDownload;
- (void)_initalizeCloudStoreIfNecessary;
- (void)_performPeerPaymentPassDownloadActivity;
- (void)_performPeerPaymentReregisterActivityForReason:(id)arg1;
- (_Bool)_peerPaymentPassExists;
- (void)_handleUpdatedAccount:(id)arg1 withOldAccount:(id)arg2;
- (_Bool)_hasAssociatedPeerPaymentPass;
- (void)_completeUpdatingAccount;
- (id)initWithPushNotificationManager:(id)arg1 paymentWebService:(id)arg2 assertionManager:(id)arg3 userNotificationManager:(id)arg4 dataSource:(id)arg5 passStore:(id)arg6;
- (void)updateSharedWebServiceContext:(id)arg1;
- (void)handlePassLibraryChangedWithPassUniqueIdentifier:(id)arg1;
- (void)receivedPeerPaymentMessage:(id)arg1;
- (void)identityVerificationResponseWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleCompanionSerialNumberChanged;
- (void)handleMigratedAccount:(id)arg1;
- (void)submitDeviceScoreIdentifiersForTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_initalizeCloudStore;
- (id)initWithPushNotificationManager:(id)arg1 paymentWebService:(id)arg2 assertionManager:(id)arg3 dataSource:(id)arg4 passStore:(id)arg5;
- (id)initWithPushNotificationManager:(id)arg1 paymentWebService:(id)arg2 assertionManager:(id)arg3 dataSource:(id)arg4;

@end

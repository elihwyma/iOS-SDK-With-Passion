/*
 Image: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
 */

#import <Foundation/NSObject.h>

@class FLFollowUpController, NSNumber, NSURLSession, _ICQAccountManager;

@interface ICQDaemonOfferManager : NSObject

{
    NSURLSession *_sharedURLSession;
    FLFollowUpController *_followUpController;
    _ICQAccountManager *_accountManager;
}

@property (readonly) _ICQAccountManager *accountManager;
@property (readonly) NSURLSession *sharedURLSession;
@property (nonatomic) _Bool shouldDirectToStorageManagement;
@property (nonatomic, getter=isBuddyOfferEnabled) _Bool buddyOfferEnabled;
@property (nonatomic, getter=isSimulatedDeviceStorageAlmostFull) _Bool simulatedDeviceStorageAlmostFull;
@property (retain, nonatomic) NSNumber *simulatedPhotosLibrarySize;
@property (nonatomic, getter=isLegacyDeviceStorageLevelNotificationEnabled) _Bool legacyDeviceStorageLevelNotificationEnabled;

+ (id)sharedDaemonOfferManager;
+ (id)ckBackupDeviceID;

- (id)init;
- (id)initWithAccountManager:(id)arg1;
- (void)updateOfferForAccount:(id)arg1 offerId:(id)arg2 buttonId:(id)arg3 info:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)daemonBuddyOfferDictionaryForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchDictionaryForAccount:(id)arg1 quotaKey:(id)arg2 stub:(id)arg3 notificationID:(id)arg4 contextDictionary:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_postDaemonOfferChangedDueToPushDarwinNotification;
- (void)_postFollowupForDaemonOffer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchDaemonOfferForAccount:(id)arg1 stub:(id)arg2 notificationID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_reconsiderOffersForAccount:(id)arg1 isForBuddy:(_Bool)arg2 choiceHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_processPushNotificationDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_teardownCachedOffersAndNotify:(_Bool)arg1;
- (id)_storageManagementFollowupActions;
- (id)_storageManagementFollowupNotification;
- (id)_storageManagementFollowupItem;
- (void)_postStorageManagementFollowup;
- (void)_clearStorageManagementFollowup;
- (void)_fetchDaemonOfferStubsForAccount:(id)arg1 isForBuddy:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_sanitizedNotificationDictionary:(id)arg1 account:(id)arg2;
- (void)_showDaemonAlertForOffer:(id)arg1 notificationDictionary:(id)arg2 store:(id)arg3 account:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_updateOffer:(id)arg1 buttonId:(id)arg2 info:(id)arg3 account:(id)arg4 accountStore:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (_Bool)_useFetchOffersDataDirectly;
- (id)URLForAccount:(id)arg1 quotaKey:(id)arg2;
- (void)_addEntriesToPostDictionary:(id)arg1 forStub:(id)arg2;
- (unsigned long long)daemonOfferSource;
- (_Bool)_isBackupEnabledForAccount:(id)arg1;
- (_Bool)_attemptSetRequest:(id)arg1 toPostWithJSONDict:(id)arg2;
- (void)_addCommonHeadersToRequest:(id)arg1 account:(id)arg2;
- (void)_updateQuotaForAccount:(id)arg1 withServerDictionary:(id)arg2;
- (id)_placeholderOfferForAccount:(id)arg1 isForBuddy:(_Bool)arg2 error:(id)arg3;
- (void)clearFollowupsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_teardownCachedBuddyOffer;
- (void)_teardownCachedOfferAndNotify:(_Bool)arg1;
- (void)_daemonOfferStubsDictionaryForAccount:(id)arg1 isForBuddy:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_postOfferType:(id)arg1 isForBuddy:(_Bool)arg2;
- (void)daemonOfferDictionaryForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)processPushNotificationDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)teardownOffersForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)soonestOfferOrStubExpirationDate;
- (void)startDirectingToStorageManagement;
- (void)stopDirectingToStorageManagement;
- (void)reconsiderOffersWithCompletion:(CDUnknownBlockType)arg1;
- (id)_pushNotificationDictionary;
- (void)postOfferType:(id)arg1;
- (void)postBuddyOfferType:(id)arg1;
- (void)forcePostFollowup;
- (void)teardownCachedOffer;
- (void)teardownCachedBuddyOffer;
- (void)teardownCachedOffers;

@end

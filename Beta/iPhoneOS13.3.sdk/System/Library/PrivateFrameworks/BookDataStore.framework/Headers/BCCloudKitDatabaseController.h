/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <Foundation/NSObject.h>

@class BUCoalescingCallBlock, CKContainer, CKDatabase, CKRecordID, CKServerChangeToken, NSArray, NSData, NSMutableDictionary, NSMutableSet, NSString, NSURL;

@protocol OS_dispatch_queue;

@interface BCCloudKitDatabaseController : NSObject

{
    _Bool _hasSubscription;
    _Bool _attachedToContainer;
    _Bool _serverFetchPostponed;
    _Bool _fetchRecordZoneChangesSuccess;
    CKDatabase *_database;
    CKContainer *_container;
    NSString *_subscriptionID;
    NSURL *_archiveURL;
    NSArray *_desiredRecordZoneIDs;
    NSMutableSet *_changedRecordZoneIDs;
    NSObject<OS_dispatch_queue> *_accessQueue;
    BUCoalescingCallBlock *_coalescedArchive;
    NSString *_containerIdentifier;
    NSString *_appBundleIdentifier;
    CKRecordID *_userRecordID;
    CKServerChangeToken *_serverChangeToken;
    NSData *_recordIDSalt;
    NSMutableDictionary *_recordZones;
    NSMutableDictionary *_observers;
    NSMutableDictionary *_tokenStores;
    BUCoalescingCallBlock *_coalescedZoneFetch;
    double _backOffInterval;
}

@property (retain, nonatomic) CKDatabase *database;
@property (retain, nonatomic) CKContainer *container;
@property (copy, nonatomic) NSURL *archiveURL;
@property (copy, nonatomic) NSArray *desiredRecordZoneIDs;
@property (retain, nonatomic) NSMutableSet *changedRecordZoneIDs;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) BUCoalescingCallBlock *coalescedArchive;
@property (copy, nonatomic) NSString *subscriptionID;
@property (copy, nonatomic) NSString *containerIdentifier;
@property (retain, nonatomic) NSString *appBundleIdentifier;
@property (retain, nonatomic) CKRecordID *userRecordID;
@property (retain, nonatomic) CKServerChangeToken *serverChangeToken;
@property (retain, nonatomic) NSData *recordIDSalt;
@property (retain, nonatomic) NSMutableDictionary *recordZones;
@property (retain, nonatomic) NSMutableDictionary *observers;
@property (retain, nonatomic) NSMutableDictionary *tokenStores;
@property (retain, nonatomic) BUCoalescingCallBlock *coalescedZoneFetch;
@property (nonatomic) _Bool attachedToContainer;
@property (nonatomic) double backOffInterval;
@property (nonatomic) _Bool serverFetchPostponed;
@property (nonatomic) _Bool fetchRecordZoneChangesSuccess;
@property (nonatomic) _Bool hasSubscription;

+ (id)decodeRecordFromSystemFields:(id)arg1;
+ (id)encodeRecordSystemFields:(id)arg1;

- (void)removeObserver:(id)arg1;
- (void)detach;
- (void)fetchChangesWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)establishedSalt;
- (void)addObserver:(id)arg1 recordType:(id)arg2;
- (void)removeObserver:(id)arg1 recordType:(id)arg2;
- (id)recordNameFromRecordType:(id)arg1 identifier:(id)arg2;
- (void)p_unarchive;
- (void)p_internetReachabilityChanged:(id)arg1;
- (id)p_archiveToData;
- (void)p_informObserversOfAttachmentChange;
- (void)p_fetchZoneChanges:(CDUnknownBlockType)arg1;
- (void)p_fetchDatabaseChanges:(CDUnknownBlockType)arg1;
- (void)p_unsubscribeToContainer:(id)arg1;
- (void)p_scheduleArchiveWithCompletion:(CDUnknownBlockType)arg1;
- (void)p_subscribeWithCompletion:(CDUnknownBlockType)arg1;
- (void)p_createRecordIDSaltWithCompletion:(CDUnknownBlockType)arg1;
- (void)zonesUnreadableDueToMissingD2DEncryptionIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)zonesTemporarilyUnreadableDueToMissingD2DEncryptionIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)p_createRecordZones:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)detachWithCompletion:(CDUnknownBlockType)arg1;
- (id)saltedAndHashedIDFromLocalID:(id)arg1;
- (void)p_informObserversOfCompletedFetchOfZone:(id)arg1;
- (void)p_fetchRecordZoneChangesForRecordZoneIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)p_fetchRecordZoneChanges:(id)arg1 optionsByRecordZoneID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)p_informObserversOfRecordsChanged:(id)arg1 forRecordType:(id)arg2;
- (void)p_informObserversOfRecordsChanged:(id)arg1;
- (void)p_updateRetryParametersFromFetchZoneChangesOperationError:(id)arg1;
- (id)p_unarchiveFromData:(id)arg1;
- (void)attachToZones:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_deleteRecordZonesWithIDs:(id)arg1 qualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithSubscriptionID:(id)arg1 appBundleIdentifier:(id)arg2 archiveURL:(id)arg3;
- (void)fetchRecordForRecordID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)willAttachToContainer:(id)arg1 serviceMode:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)connectUserTo:(id)arg1 container:(id)arg2 updateSubscription:(_Bool)arg3 completion:(CDUnknownBlockType)arg4 subscriptionCompletion:(CDUnknownBlockType)arg5;
- (void)getAttached:(CDUnknownBlockType)arg1;
- (void)recordZoneWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerServerChangeTokenStore:(id)arg1 forZoneID:(id)arg2;
- (void)unregisterServerChangeTokenStore:(id)arg1;

@end

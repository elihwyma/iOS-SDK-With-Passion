/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <Foundation/NSObject.h>

#import <BookDataStore/Swift-Protocol.h>

@class BCCloudChangeTokenController, BCCloudDataManager, BCCloudDataSource, BCCloudDataSyncManager, BDSServiceProxy, NSManagedObjectModel, NSString;

@interface BCCloudSecureUserDataManager : NSObject <Swift>

{
    _Bool _enableCloudSync;
    _Bool _proxyMode;
    BDSServiceProxy *_serviceProxy;
    BCCloudDataSource *_secureUserDataSource;
    BCCloudDataSyncManager *_syncManager;
    BCCloudDataManager *_dataManager;
    NSManagedObjectModel *_objectModel;
    BCCloudChangeTokenController *_changeTokenController;
}

@property (retain, nonatomic) BDSServiceProxy *serviceProxy;
@property (nonatomic) _Bool proxyMode;
@property (retain, nonatomic) BCCloudDataSource *secureUserDataSource;
@property (retain, nonatomic) BCCloudDataSyncManager *syncManager;
@property (retain, nonatomic) BCCloudDataManager *dataManager;
@property (retain, nonatomic) NSManagedObjectModel *objectModel;
@property (retain, nonatomic) BCCloudChangeTokenController *changeTokenController;
@property (nonatomic) _Bool enableCloudSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;
+ (void)deleteCloudDataWithCompletion:(CDUnknownBlockType)arg1;
+ (id)sharedClientXPCProxy;

- (id)entityName;
- (void)dissociateCloudDataFromSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)setEnableSecureUserDataCloudSync:(_Bool)arg1;
- (void)currentCloudSyncVersions:(CDUnknownBlockType)arg1;
- (void)setUserDatum:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setUserData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteUserDatumForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)userDatumForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)userDatumIncludingDeleted:(_Bool)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchUserDataIncludingDeleted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getUserDataChangesSince:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolvedUserDataValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)userDataValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setUserDataValue:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncManager:(id)arg1 startSyncToCKWithCompletion:(CDUnknownBlockType)arg2;
- (void)signalSyncToCKForSyncManager:(id)arg1;
- (void)syncManager:(id)arg1 removeCloudDataForIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncManager:(id)arg1 updateSyncGenerationFromCloudData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncManager:(id)arg1 resolveConflictsForRecords:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncManager:(id)arg1 failedRecordIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncManager:(id)arg1 fetchedAllRecordsInZone:(id)arg2;
- (void)removeUserDataForSaltedHashedRecordIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateSyncGenerationFromCloudData:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

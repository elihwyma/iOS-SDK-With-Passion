/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <Foundation/NSObject.h>

@class NSString, _KSCloudKitManager, _KSTextReplacementCoreDataStore;

@protocol OS_dispatch_queue;

@interface _KSTextReplacementCKStore : NSObject

{
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_dataQueue;
    _Bool _ckMigrationStatusOnCloud;
    _Bool _didRequestFirstPullForAccount;
    _KSCloudKitManager *_cloudKitManager;
    _KSTextReplacementCoreDataStore *_coreDataStore;
    unsigned long long _numPullRequests;
}

@property (retain, nonatomic) _KSTextReplacementCoreDataStore *coreDataStore;
@property (nonatomic) _Bool ckMigrationStatusOnCloud;
@property (nonatomic) _Bool didRequestFirstPullForAccount;
@property (nonatomic) unsigned long long numPullRequests;
@property (retain, nonatomic) _KSCloudKitManager *cloudKitManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isMigrationCompleted;

- (void)dealloc;
- (void)removeAllEntries;
- (id)userIdentity;
- (void)accountDidChange:(id)arg1;
- (id)initWithDirectoryPath:(id)arg1;
- (void)queryTextReplacementsWithCallback:(CDUnknownBlockType)arg1;
- (void)pushMigrationStatusToCloud:(_Bool)arg1;
- (void)pushAllLocalData;
- (void)requestSync:(unsigned long long)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (_Bool)isAccountAvailable;
- (void)queryMigrationStatusOnCloudWithCallback:(CDUnknownBlockType)arg1;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)queryTextReplacementsWithPredicate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)requestSyncWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)recordSyncStatus;
- (id)textReplacementEntries;
- (void)userDidDeleteRecordZone:(id)arg1;
- (void)importSampleShortcutsIfNecessary;
- (void)queryCloudIfFirstPullOrAccountChanged;
- (unsigned long long)countLocalEntriesToBeSynced;
- (unsigned long long)getSyncCount;
- (unsigned long long)getSyncCountThresholdHalfLifeHours;
- (unsigned long long)decayedSyncCountForTime:(id)arg1;
- (void)_updateSyncCount:(unsigned long long)arg1 success:(_Bool)arg2;
- (void)_requestSync:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)getSyncCountThrottleThreshold;
- (void)pushLocalChangesWithPriority:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)pullRemoteDataWithPriority:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)queryUpdatedLocalEntries;
- (id)queryDeletedEntries;
- (id)localEntriesFromCloudEntries:(id)arg1;
- (id)cloudEntriesFromLocalEntries:(id)arg1;
- (id)cloudRecordIDsForLocalEntries:(id)arg1;
- (void)removeAllEntriesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestSyncIfPendingLocalChanges;
- (unsigned long long)totalPullRequestsUntilNow;

@end

/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class _CDInteraction, _CDInteractionStoreNotifier, _DKCoreDataStorage;

@protocol OS_dispatch_queue, _DKLocationHistorian;

@interface _CDInteractionStore : NSObject

{
    _DKCoreDataStorage *_storage;
    NSObject<OS_dispatch_queue> *_workQueue;
    _CDInteractionStoreNotifier *_notifier;
    NSObject<OS_dispatch_queue> *_pendingShareInteractionQueue;
    _Bool _readConcurrently;
    _CDInteraction *_pendingShareSheetInteraction;
    id <_DKLocationHistorian> _locationHistorian;
}

@property (retain, nonatomic) _CDInteraction *pendingShareSheetInteraction;
@property (retain) id <_DKLocationHistorian> locationHistorian;
@property (nonatomic, readonly) _DKCoreDataStorage *storage;
@property (nonatomic) _Bool readConcurrently;

+ (id)storeWithDirectory:(id)arg1 readOnly:(_Bool)arg2;
+ (id)defaultDatabaseDirectory;

- (id)init;
- (id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id *)arg4;
- (unsigned long long)countInteractionsUsingPredicate:(id)arg1 error:(id *)arg2;
- (id)initWithDirectory:(id)arg1 readOnly:(_Bool)arg2;
- (id)fetchOrCreateKeywordRecord:(id)arg1 context:(id)arg2 cache:(id)arg3 error:(id *)arg4;
- (id)errorForException:(id)arg1;
- (id)fetchOrCreateContactRecord:(id)arg1 context:(id)arg2 cache:(id)arg3 error:(id *)arg4;
- (id)createKeywordFromRecord:(id)arg1;
- (id)createAttachmentFromRecord:(id)arg1;
- (id)getContactForRecord:(id)arg1;
- (id)createInteractionRecord:(id)arg1 context:(id)arg2 keywordCache:(id)arg3 attachmentCache:(id)arg4 contactCache:(id)arg5 error:(id *)arg6;
- (void)fillWithoutRelationshipsInteractionRecord:(id)arg1 fromInteraction:(id)arg2;
- (void)updateCachedStatsForContactRecord:(id)arg1 isSender:(_Bool)arg2 withInteraction:(id)arg3;
- (id)fetchOrCreateAttachmentRecord:(id)arg1 context:(id)arg2 cache:(id)arg3 error:(id *)arg4;
- (id)dateFromTimeIntervalSinceRef:(double)arg1;
- (_Bool)recordInteractions:(id)arg1;
- (_Bool)recordInteractionsBatch:(id)arg1 error:(id *)arg2;
- (id)batchFetchExistingContactRecords:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (id)batchFetchExistingKeywordRecords:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (id)batchFetchExistingAttachmentRecords:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (id)batchFetchExistingInteractionsWithUUIDs:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (unsigned long long)countContactsUsingPredicate:(id)arg1 error:(id *)arg2;
- (id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 error:(id *)arg5;
- (id)createInteractionFromRecord:(id)arg1;
- (id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3;
- (id)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id *)arg4;
- (unsigned long long)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id *)arg4;
- (unsigned long long)deleteUnreferencedKeywords;
- (unsigned long long)deleteUnreferencedContacts;
- (unsigned long long)deleteInteractionsWithBundleId:(id)arg1 error:(id *)arg2;
- (unsigned long long)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 error:(id *)arg3;
- (unsigned long long)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 error:(id *)arg3;
- (void)anonymizeWithSalt:(id)arg1;
- (void)anonymizeContactsWithSalt:(id)arg1;
- (void)anonymizeKeywordsWithSalt:(id)arg1;
- (void)anonymizeInteractionsWithSalt:(id)arg1;
- (_Bool)recordInteraction:(id)arg1;
- (void)recordInteractions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)countInteractionsUsingPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)countContactsUsingPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)deleteInteractionsWithBundleId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithDatabasePath:(id)arg1 inDirectory:(id)arg2;
- (id)fetchOrCreateKeywordRecord:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (id)fetchOrCreateContactRecord:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (id)createInteractionRecord:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (_Bool)recordInteractions:(id)arg1 error:(id *)arg2;
- (_Bool)openAndCheckIfReadable;
- (unsigned long long)numberOfInteractionsMatchingPredicate:(id)arg1;
- (id)queryInteractionsUsingPredicate:(id)arg1 withLimit:(unsigned long long)arg2;
- (id)queryContactsUsingPredicate:(id)arg1 withLimit:(unsigned long long)arg2 error:(id *)arg3;
- (unsigned long long)numberOfContactsMatchingPredicate:(id)arg1;
- (id)queryContactInteractionsUsingPredicate:(id)arg1 withLimit:(unsigned long long)arg2;
- (id)histogramContactInteractionsUsingPredicate:(id)arg1 withLimit:(unsigned long long)arg2;
- (id)interactionCountPerMechanism;
- (unsigned long long)deleteInteractionsOlderThanDate:(id)arg1 limit:(unsigned long long)arg2;
- (unsigned long long)deleteOldInteractionsIfNeededToLimitTotalNumber:(unsigned long long)arg1 limit:(unsigned long long)arg2;
- (void)closeStorage;
- (long long)queryVersionNumber;
- (_Bool)recordVersionNumber:(long long)arg1;
- (_Bool)deleteStorage;
- (id)anonymizedCopyToDirectory:(id)arg1 salt:(id)arg2;

@end

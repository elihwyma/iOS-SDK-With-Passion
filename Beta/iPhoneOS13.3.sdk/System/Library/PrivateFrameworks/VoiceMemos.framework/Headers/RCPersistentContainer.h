/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <CoreData/NSPersistentContainer.h>

@class NSArray, NSCloudKitMirroringDelegateOptions, NSDate, NSMutableArray, NSPersistentHistoryToken, NSPersistentStore, NSSet, NSString, RCDatabaseMetadata;

__attribute__((visibility("hidden")))
@interface RCPersistentContainer : NSPersistentContainer

{
    NSPersistentStore *_localStore;
    NSPersistentStore *_cloudStore;
    NSArray *_cloudStores;
    NSString *_cloudStoreIdentifier;
    NSString *_transactionAuthor;
    NSSet *_relevantProperties;
    RCDatabaseMetadata *_metadata;
    NSCloudKitMirroringDelegateOptions *_mirroringOptions;
    NSPersistentHistoryToken *_currentHistoryToken;
    NSPersistentHistoryToken *_latestHistoryToken;
    NSMutableArray *_transactionsBuffer;
    NSArray *_contextsToNotify;
    NSDate *_changeNotificationDate;
}

@property (nonatomic, readonly) NSPersistentStore *localStore;
@property (nonatomic, readonly) NSPersistentStore *cloudStore;
@property (nonatomic, readonly) RCDatabaseMetadata *metadata;
@property (nonatomic, readonly) NSCloudKitMirroringDelegateOptions *mirroringOptions;

+ (void)initialize;
+ (id)newObjectModel;
+ (id)sharedContainer;
+ (id)mirroringContainer;

- (id)_initWithMirroring:(_Bool)arg1 useXPCStore:(_Bool)arg2;
- (void)_migrateDatabaseIfNecessary;
- (void)_handleRemoteChangeNotification:(id)arg1;
- (id)_nextTransactionAfterToken:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (_Bool)_isRelevantTransaction:(id)arg1;
- (void)_handleRemoteChangeNotificationOnMainQueue:(id)arg1;
- (id)newContextWithConcurrencyType:(unsigned long long)arg1;
- (id)_valueForDatabaseProperty:(id)arg1 context:(id)arg2;
- (id)_fetchLegacyRecordingsForMigrationWithContext:(id)arg1;
- (void)_deleteOrphanedEntityRevisionsWithContext:(id)arg1;
- (id)_cloudRecordingsInContext:(id)arg1;
- (id)_legacyRecordingWithUniqueID:(id)arg1 context:(id)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDCloudMirroringPersistentStore, EDTransactionService, NSFetchedResultsController, NSPersistentHistoryToken, NSString;

@protocol EDConversationRemoteStorageDelegate;

@interface EDConversationRemoteCloudKitStorage : NSObject

{
    _Bool _initialized;
    EDCloudMirroringPersistentStore *_mirroringPersistentStore;
    id <EDConversationRemoteStorageDelegate> _delegate;
    NSFetchedResultsController *_fetchedResultsController;
    NSPersistentHistoryToken *_historyToken;
    EDTransactionService *_exportTransaction;
    EDTransactionService *_importTransaction;
}

@property (nonatomic, readonly) EDCloudMirroringPersistentStore *mirroringPersistentStore;
@property (weak, nonatomic) id <EDConversationRemoteStorageDelegate> delegate;
@property (nonatomic, readonly) NSFetchedResultsController *fetchedResultsController;
@property (nonatomic, getter=isInitialized) _Bool initialized;
@property (retain, nonatomic) NSPersistentHistoryToken *historyToken;
@property (retain, nonatomic) EDTransactionService *exportTransaction;
@property (retain, nonatomic) EDTransactionService *importTransaction;
@property (nonatomic, getter=isMigratedFromKVSStorage) _Bool migratedFromKVSStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (id)cloudKitAPSTopics;

- (_Bool)synchronize;
- (id)dictionaryRepresentation;
- (id)dictionaryForKey:(id)arg1;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)refresh;
- (id)initWithDelegate:(id)arg1;
- (void)_initialSetup;
- (void)removeDictionaryForKey:(id)arg1;
- (id)storageName;
- (void)_handleWillResetSyncDataNotification:(id)arg1;
- (void)_handleDidResetSyncDataNotification:(id)arg1;
- (void)_handlePushNotification:(id)arg1;
- (void)_requestExportWithManagedObjectContext:(id)arg1;
- (void)_requestImportWithManagedObjectContext:(id)arg1;
- (id)_controlInManagedObjectContext:(id)arg1;
- (void)_requestFirstSyncWithManagedObjectContext:(id)arg1;
- (void)_recoverHistoryToken;
- (id)entityForConversationDictionary:(id)arg1 key:(id)arg2 managedObjectContext:(id)arg3;
- (void)_handleDuplicationsForConversationUUIDs:(id)arg1 managedObjectContext:(id)arg2;
- (void)_addOrUpdateConversationInfo:(id)arg1 managedObjectContext:(id)arg2;
- (void)_removeConversationInfoWithId:(id)arg1 managedObjectContext:(id)arg2;
- (id)_conversationInfoWithUUID:(id)arg1 managedObjectContext:(id)arg2;
- (id)dictionaryForConversationInfo:(id)arg1;
- (id)allConversationInfosInManagedObjectContext:(id)arg1;
- (void)_retrieveChangesSinceLastRequestInManagedObjectContext:(id)arg1;
- (id)_conversationInfosWithUUID:(id)arg1 managedObjectContext:(id)arg2;
- (void)_removeConversationInfoWithObjectId:(id)arg1 save:(_Bool)arg2 managedObjectContext:(id)arg3;
- (id)_conversationInfoWithObjectId:(id)arg1 managedObjectContext:(id)arg2;
- (id)enumerateChangeHistorySinceToken:(id)arg1 managedObjectContext:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)persistHistoryToken;
- (id)_transactionHistorySinceToken:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
- (void)_updateConversationInfo:(id)arg1 withAnotherConversationInfo:(id)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <Foundation/NSObject.h>

@class NSArray, NSCloudKitMirroringRequestOptions, NSData, NSEntityDescription, NSManagedObjectContext, NSPersistentContainer, NSPersistentStore, NSSet, NSString, RCDatabaseMetadata, RCPersistentContainer, RCSavedRecordingsController;

@interface RCSavedRecordingsModel : NSObject

{
    RCPersistentContainer *_container;
    RCDatabaseMetadata *_metadata;
    NSPersistentStore *_localStore;
    NSPersistentStore *_cloudStore;
    NSManagedObjectContext *_context;
    NSEntityDescription *_cloudRecordingEntity;
    RCSavedRecordingsController *_recordingsController;
    RCSavedRecordingsController *_availableRecordingsController;
    RCSavedRecordingsController *_deletedRecordingsController;
    NSCloudKitMirroringRequestOptions *_mirroringRequestOptions;
    _Bool _valid;
    _Bool _disableSaveNotifications;
    long long _isSavingDisabledCount;
}

@property _Bool valid;
@property (nonatomic) long long isSavingDisabledCount;
@property (nonatomic) _Bool disableSaveNotifications;
@property (nonatomic, readonly) NSArray *allRecordings;
@property (nonatomic, readonly) NSSet *audioProperties;
@property (nonatomic, readonly) RCSavedRecordingsController *recordingsController;
@property (nonatomic, readonly) RCSavedRecordingsController *availableRecordingsController;
@property (nonatomic, readonly) NSData *currentChangeToken;
@property (nonatomic, readonly) NSPersistentContainer *container;
@property (nonatomic, readonly) NSArray *deletedRecordings;
@property (nonatomic, readonly) RCSavedRecordingsController *deletedRecordingsController;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSArray *recordings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)importRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)sharedModelForMainQueue;
+ (id)standardPathForRecordingWithCreationDate:(id)arg1 uniqueID:(id)arg2;
+ (id)_dateFormatterComponentFormatting;
+ (id)savedRecordingsDirectory;
+ (id)_copyFileIntoRecordingsDirectory:(id)arg1;
+ (id)currentLocationBasedName;
+ (void)_importImportableRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)determineImportabilityOfRecordingWithAudioURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)_insertRecordingWithImportableAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)sharedModelForQueue:(id)arg1;
+ (id)standardURLForRecordingWithCreationDate:(id)arg1;
+ (id)startStoreServers:(CDUnknownBlockType)arg1;
+ (_Bool)migrateDatabaseIfNecessary;
+ (id)cloudMirroringModel;
+ (id)newSyncModel;
+ (id)newPrivateModel;
+ (id)standardPathForRecording:(id)arg1;
+ (id)creationDateFromStandardRecordingURL:(id)arg1;
+ (id)_moveFileIntoRecordingsDirectory:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)context;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (id)mirroringOptions;
- (void)controllerDidChangeContent:(id)arg1;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)valueForDatabaseProperty:(id)arg1;
- (_Bool)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (_Bool)deleteDatabaseProperty:(id)arg1;
- (id)metadataValueForKey:(id)arg1;
- (id)cloudStore;
- (_Bool)saveIfNecessary:(id *)arg1;
- (id)_initWithContainer:(id)arg1 concurrencyType:(unsigned long long)arg2;
- (void)_scheduleAutomaticRecordingDeletions;
- (id)recordingWithID:(id)arg1;
- (id)_recordingsWithUniqueID:(id)arg1 templateName:(id)arg2;
- (void)_enumerateRecordingsWithEntityDescription:(id)arg1 propertiesToFetch:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)enumerateChangeHistorySinceToken:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateFetchedRecordingTitles:(CDUnknownBlockType)arg1;
- (id)_transactionHistorySinceToken:(id)arg1;
- (id)currentPersistentHistoryToken;
- (id)_allTitles;
- (id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3 customTitleBase:(id)arg4 uniqueID:(id)arg5;
- (void)saveIfNecessary;
- (id)nextRecordingDefaultLabelWithCustomTitleBase:(id)arg1;
- (void)performWithSavingDisabled:(CDUnknownBlockType)arg1;
- (void)eraseRecording:(id)arg1;
- (id)_labelPresetsForQuery:(id)arg1;
- (_Bool)__saveManagedObjectContext:(id *)arg1;
- (void)_synchronizeRecordingsMetadata;
- (void)_deliverSaveNotifications;
- (_Bool)setValue:(id)arg1 forDatabaseProperty:(id)arg2 save:(_Bool)arg3;
- (void)enumerateExistingRecordingsWithBlock:(CDUnknownBlockType)arg1;
- (id)recordingWithUniqueID:(id)arg1;
- (void)deleteRecording:(id)arg1;
- (void)_deleteRecordingsWithDurationLessThan:(double)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3 customLabelBase:(id)arg4;
- (id)cloudRecordingEntity;
- (id)mirroringRequestOptions;
- (id)recordingAtIndex:(unsigned long long)arg1;
- (id)indexPathForRecording:(id)arg1;
- (id)recordingWithURIRepresentation:(id)arg1;
- (id)recordingWithITunesPersistentID:(long long)arg1;
- (id)recordingWithPath:(id)arg1;
- (id)mostRecentRecording;
- (id)recordingsWithUniqueID:(id)arg1;
- (id)recordingsWithPredicate:(id)arg1;
- (id)enumerateExistingRecordingsSinceChangeToken:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)transactionForToken:(id)arg1;
- (void)setTitle:(id)arg1 ofRecording:(id)arg2;
- (void)restoreDeletedRecording:(id)arg1;
- (void)eraseRecordingsDeletedBeforeDate:(id)arg1;
- (void)eraseAllDeleted;
- (id)duplicateRecording:(id)arg1 error:(id *)arg2;
- (void)mergeRecordings:(id)arg1 allTransactions:(id)arg2;
- (_Bool)hasExistingRecordingForAudioFile:(id)arg1;
- (id)recordingsForSpotlightSearch:(id)arg1;
- (void)finishSaveByUpdatingSearchableIndexWithChangeContext:(id)arg1;
- (void)performBlockAndWaitInTemporaryContext:(CDUnknownBlockType)arg1;
- (_Bool)resetCloud:(CDUnknownBlockType)arg1;
- (_Bool)exportToCloud:(CDUnknownBlockType)arg1;
- (_Bool)importFromCloud:(CDUnknownBlockType)arg1;
- (_Bool)fetchObjectsFromCloud:(id)arg1 entityToAttributesToFetch:(struct NSDictionary *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)fetchExportProgress:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)nextRecordingDefaultLabelWithCustomLabelBase:(id)arg1;
- (id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3;

@end

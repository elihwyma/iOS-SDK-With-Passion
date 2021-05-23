/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class CKServerChangeToken, NSDate, NSFileCoordinator, NSHashTable, NSMutableDictionary, NSOperationQueue, NSSet, NSString, NSURL;

@protocol OS_dispatch_queue, OS_dispatch_source, SCKDatabaseStore, SCKOperationThrottler;

@interface SCKDatabaseJSONStore : NSObject

{
    _Bool _cloudBackupEnabled;
    _Bool _loadedFromDisk;
    _Bool _havePendingChanges;
    unsigned int _lastKnownStoreChangeTag;
    NSDate *_lastSyncDate;
    NSDate *_lastDirtyDate;
    CKServerChangeToken *_serverChangeToken;
    NSURL *_presentedItemURL;
    NSOperationQueue *_presentedItemOperationQueue;
    NSFileCoordinator *_fileCoordinator;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSHashTable *_observers;
    NSMutableDictionary *_zoneStoresByName;
    NSMutableDictionary *_foreignZoneDictsByName;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <SCKOperationThrottler> _saveThrottler;
    NSObject<OS_dispatch_source> *_changeListenerSource;
    NSSet *_allowedCommandClasses;
    NSURL *_storeURL;
    unsigned long long _diskReadCount;
    unsigned long long _diskWriteCount;
}

@property (retain, nonatomic) NSFileCoordinator *fileCoordinator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic) _Bool loadedFromDisk;
@property (nonatomic) unsigned int lastKnownStoreChangeTag;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSMutableDictionary *zoneStoresByName;
@property (retain, nonatomic) NSMutableDictionary *foreignZoneDictsByName;
@property (nonatomic) _Bool havePendingChanges;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) id <SCKOperationThrottler> saveThrottler;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *changeListenerSource;
@property (retain, nonatomic) NSSet *allowedCommandClasses;
@property (copy, nonatomic, readonly) NSURL *storeURL;
@property (nonatomic, readonly) unsigned long long diskReadCount;
@property (nonatomic, readonly) unsigned long long diskWriteCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSURL *presentedItemURL;
@property (retain, readonly) NSOperationQueue *presentedItemOperationQueue;
@property (copy, readonly) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (nonatomic, readonly) id <SCKDatabaseStore> underlyingStore;
@property (copy, nonatomic) NSDate *lastSyncDate;
@property (copy, nonatomic) NSDate *lastDirtyDate;
@property (copy, nonatomic) CKServerChangeToken *serverChangeToken;
@property (nonatomic, getter=isCloudBackupEnabled) _Bool cloudBackupEnabled;

+ (id)preferredFileURLForSchema:(id)arg1 parentDirectoryURL:(id)arg2;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)savePresentedItemChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_encodeDate:(id)arg1;
- (void)operationThrottlerPerformOperation:(id)arg1;
- (id)zoneStoreForSchema:(id)arg1;
- (void)_listenForChangesToFileURL:(id)arg1;
- (id)initWithSchema:(id)arg1 fileURL:(id)arg2 allowedCommands:(id)arg3;
- (id)initWithSchema:(id)arg1 parentDirectoryURL:(id)arg2 allowedCommands:(id)arg3;
- (void)_applyCloudBackupEnabledPropertyToStoreURL;
- (void)_reloadIfNeededFromFileURL:(id)arg1;
- (void)readWithAccessor:(CDUnknownBlockType)arg1;
- (void)writeWithAccessor:(CDUnknownBlockType)arg1;
- (void)_saveIfNeededToFileURL:(id)arg1;
- (id)_encodeCodableObject:(id)arg1;
- (void)_saveToFileURL:(id)arg1;
- (id)_decodeDate:(id)arg1;
- (id)_decodeCodableObjectOfClass:(Class)arg1 from:(id)arg2 error:(id *)arg3;
- (id)_decodeCodableObjectOfClasses:(id)arg1 from:(id)arg2 error:(id *)arg3;
- (void)_loadFromFileURL:(id)arg1;
- (void)reloadWithAccessor:(CDUnknownBlockType)arg1;
- (void)readZone:(id)arg1 withAccessor:(CDUnknownBlockType)arg2;
- (void)writeZone:(id)arg1 withAccessor:(CDUnknownBlockType)arg2;
- (id)initWithSchema:(id)arg1 fileURL:(id)arg2;
- (id)initWithSchema:(id)arg1 parentDirectoryURL:(id)arg2;
- (_Bool)flushToDiskWithTimeout:(double)arg1;

@end

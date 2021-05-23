/*
 Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

#import <SplashBoard/XBApplicationSnapshotManifest.h>

@class BSAtomicSignal, BSTimer, NSFileManager, NSMutableArray, NSMutableDictionary, NSString, XBSnapshotContainerIdentity, XBSnapshotManifestIdentity;

@interface XBApplicationSnapshotManifestImpl : XBApplicationSnapshotManifest

{
    XBSnapshotContainerIdentity *_containerIdentity;
    XBSnapshotManifestIdentity *_identity;
    NSMutableDictionary *_snapshotGroupsByID;
    NSFileManager *_imageAccessFileManger;
    _Atomic unsigned long long _bytesWaitingToWriteOut;
    BSTimer *_reapingTimer;
    BSAtomicSignal *_invalidatedSignal;
    unsigned long long _clientCount;
    unsigned long long _pendingOperations;
    NSMutableArray *_archiveSchedulingQueue_synchronizeCompletions;
    _Bool _archiveSchedulingQueue_dirty;
    _Bool _archiveSchedulingQueue_scheduled;
    struct os_unfair_lock_s _accessLock;
}

@property (copy, nonatomic, readonly) XBSnapshotContainerIdentity *containerIdentity;
@property (copy, nonatomic, readonly) XBSnapshotManifestIdentity *identity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)acquireManifestForContainerIdentity:(id)arg1 store:(id)arg2 creatingIfNecessary:(_Bool)arg3;
+ (void)relinquishManifest:(id)arg1;
+ (id)_snapshotPredicateForRequest:(id)arg1;
+ (long long)_outputFormatForSnapshot:(id)arg1;
+ (void)_configureSnapshot:(id)arg1 withCompatibilityInfo:(id)arg2 forLaunchRequest:(id)arg3;
+ (void)_workloop_noteManifestInvalidated:(id)arg1;
+ (_Bool)isUnderMemoryPressure;
+ (void)_flushManifestQueue;

- (id)init;
- (void)dealloc;
- (_Bool)_invalidate;
- (id)containerPath;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)bundleIdentifier;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)_commonInit;
- (id)defaultGroupIdentifier;
- (void)deleteAllSnapshots;
- (void)deleteSnapshotsMatchingPredicate:(id)arg1;
- (void)_synchronizeDataStoreWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_validateWithContainerIdentity:(id)arg1;
- (id)snapshotsForGroupID:(id)arg1;
- (id)snapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2;
- (id)snapshotsForGroupID:(id)arg1 fetchRequest:(id)arg2;
- (id)snapshotsForGroupIDs:(id)arg1;
- (id)snapshotsForGroupIDs:(id)arg1 matchingPredicate:(id)arg2;
- (id)snapshotsForGroupIDs:(id)arg1 fetchRequest:(id)arg2;
- (id)createSnapshotWithGroupID:(id)arg1;
- (id)createVariantForSnapshot:(id)arg1 withIdentifier:(id)arg2;
- (void)generateImageForSnapshot:(id)arg1 dataProvider:(id)arg2 writeToFile:(_Bool)arg3 didGenerateImage:(CDUnknownBlockType)arg4 didSaveImage:(CDUnknownBlockType)arg5;
- (void)saveSnapshot:(id)arg1 atPath:(id)arg2 withContext:(id)arg3;
- (void)deleteSnapshot:(id)arg1;
- (void)deleteSnapshots:(id)arg1;
- (void)deleteSnapshotsUsingPredicateBuilder:(CDUnknownBlockType)arg1;
- (void)deleteSnapshotsForGroupID:(id)arg1;
- (void)deleteSnapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2;
- (void)deleteSnapshotsForGroupID:(id)arg1 predicateBuilder:(CDUnknownBlockType)arg2;
- (void)purgeSnapshotsWithProtectedContent;
- (void)beginSnapshotAccessTransaction:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleMemoryPressure;
- (id)_initWithContainerIdentity:(id)arg1;
- (id)_allSnapshotGroups;
- (void)_noteDirtied;
- (void)_scheduleArchivingIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_workloop_incrementClientCount;
- (void)_workloop_decrementClientCount;
- (id)_access_snapshotsForGroupIDs:(id)arg1;
- (id)_access_snapshotsForGroupIDs:(id)arg1 matchingPredicate:(id)arg2;
- (id)_generatableSnapshotForGroupID:(id)arg1 generationContext:(id)arg2;
- (void)_access_workloop_reapExpiredAndInvalidSnapshots;
- (_Bool)_imageAccessQueue_saveData:(id)arg1 forSnapshot:(id)arg2;
- (void)_access_accessSnapshotsWithBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_addSnapshotToGroup:(id)arg1;
- (void)_access_addSnapshotToGroup:(id)arg1;
- (void)_access_deleteSnapshots:(id)arg1;
- (id)_access_snapshotsMatchingPredicate:(id)arg1;
- (id)_access_snapshotGroupForID:(id)arg1 creatingIfNeeded:(_Bool)arg2;
- (void)_access_deletePaths:(id)arg1;
- (void)_access_purgeSnapshotsWithProtectedContent;
- (id)_createSnapshotWithGroupID:(id)arg1 generationContext:(id)arg2;
- (void)_access_doArchiveWithCompletions:(id)arg1;
- (void)_workloop_checkClientCount;
- (_Bool)_access_validateWithContainerIdentity:(id)arg1;
- (void)_access_gatherPaths:(id)arg1 forSnapshot:(id)arg2;
- (void)_workloop_reallyCheckClientCount;
- (id)_snapshotGroupsByID;

@end

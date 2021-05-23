/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSPersistentStore, NSPersistentStoreCoordinator, NSString, NSURL, PFUbiquityBaseline, PFUbiquityContainerIdentifier, PFUbiquityKnowledgeVector, PFUbiquityLocation, PFUbiquityMigrationAssistant, PFUbiquityMigrationManager, PFUbiquityPeerReceipt, PFUbiquityPeerState, PFUbiquityStoreMetadata, PFUbiquitySwitchboardEntry, _PFUbiquityStack;

@protocol NSObject><NSCopying><NSCoding, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface PFUbiquitySetupAssistant : NSObject

{
    NSMutableDictionary *_options;
    NSPersistentStoreCoordinator *_psc;
    NSPersistentStore *_store;
    NSString *_storeType;
    NSURL *_storeURL;
    NSURL *_actualStoreFileURL;
    NSMutableDictionary *_storeMetadataDict;
    _Bool _needsMetadataWrite;
    PFUbiquityKnowledgeVector *_storeKV;
    _Bool _ubiquityEnabled;
    id <NSObject><NSCopying><NSCoding> _ubiquityIdentityToken;
    NSURL *_ubiquityRootURL;
    NSString *_ubiquityRootSubpath;
    NSString *_ubiquityName;
    NSString *_ubiquityContainerIdentifier;
    NSString *_localPeerID;
    NSString *_modelVersionHash;
    NSString *_previousModelVersionHash;
    PFUbiquityLocation *_ubiquityRootLocation;
    PFUbiquityLocation *_localRootLocation;
    _PFUbiquityStack *_stack;
    PFUbiquityStoreMetadata *_storeMetadata;
    PFUbiquityPeerState *_localPeerState;
    PFUbiquityKnowledgeVector *_metaKV;
    PFUbiquityBaseline *_baseline;
    _Bool _baselineFileExistsInCloud;
    _Bool _hasUploadingBaseline;
    _Bool _monitorUploadingBaselineAsync;
    _Bool _didBaselineCopy;
    PFUbiquityKnowledgeVector *_baselineKV;
    _Bool _votedOffIsland;
    _Bool _reapUbiquitousLogs;
    _Bool _respondToBaselineRoll;
    _Bool _storeFileExists;
    _Bool _storeFileIsReadOnly;
    _Bool _hasStoreMetadataFile;
    _Bool _hasStoreMetadataEntry;
    _Bool _hasContainerUUID;
    _Bool _hasContainerUUIDInStore;
    _Bool _needsMetadataRecovery;
    PFUbiquityPeerReceipt *_localPeerReceipt;
    PFUbiquityKnowledgeVector *_receiptKV;
    PFUbiquityContainerIdentifier *_containerIdentifier;
    NSString *_preStoreContainerUUID;
    _Bool _usedExistingUUIDMapping;
    _Bool _hasLocalTransactionLogs;
    _Bool _hasMigrationOptions;
    _Bool _didMigrateBaseline;
    _Bool _storeWasMigrated;
    PFUbiquityMigrationAssistant *_migrationAssistant;
    PFUbiquityMigrationManager *_migrationManager;
    _Bool _replayLogsSynchronously;
    _Bool _useLocalAccount;
    _Bool _seedStore;
    NSURL *_seedStoreURL;
    _Bool _haveExistingUUIDMappings;
    _Bool _abortSetup;
    PFUbiquitySwitchboardEntry *_entry;
    _Bool _gotExportNotification;
    int _sideLoadLock;
    NSMutableSet *_logLocationsExportedDuringSideLoad;
    NSMutableDictionary *_gidToRid;
    NSMutableDictionary *_entityNameToGidSet;
    NSObject<OS_dispatch_semaphore> *_initialSyncSemaphore;
    int _initialSyncComplete;
    NSMutableArray *_queryLocations;
    _Bool _notifyAboutSetupProgress;
    long long _numSetupTries;
    unsigned long long _retryDelaySec;
    _Bool _failSetup;
    NSError *_failSetupError;
    _Bool _gotAccountChange;
    _Bool _cacheFilePresenterForUbiquityRoot;
}

@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) _Bool ubiquityEnabled;
@property (nonatomic, readonly) _Bool needsMetadataRecovery;
@property (nonatomic, readonly) NSString *localPeerID;
@property (nonatomic, readonly) NSURL *ubiquityRootURL;
@property (nonatomic, readonly) PFUbiquityLocation *ubiquityRootLocation;
@property (nonatomic, readonly) PFUbiquityLocation *localRootLocation;
@property (nonatomic, readonly) PFUbiquityContainerIdentifier *containerIdentifier;
@property (nonatomic, readonly) _Bool useLocalAccount;
@property (nonatomic) _Bool storeWasMigrated;
@property (nonatomic, readonly) NSURL *actualStoreFileURL;
@property (nonatomic) _Bool abortSetup;
@property (nonatomic, readonly) PFUbiquityKnowledgeVector *storeKV;
@property (nonatomic) unsigned long long retryDelaySec;
@property (nonatomic) _Bool cacheFilePresenterForUbiquityRoot;
@property (nonatomic) _Bool failSetup;
@property (retain, nonatomic) NSError *failSetupError;

+ (void)removeUbiquityMetadataFromStore:(id)arg1;
+ (id)findContainerIDForToken:(id)arg1 storeName:(id)arg2 haveExistingMappings:(_Bool *)arg3;
+ (id)createDefaultLocalPeerID;
+ (id)createActualStoreURLForStoreURL:(id)arg1 localPeerID:(id)arg2 containerIdentifier:(id)arg3 andStoreName:(id)arg4;
+ (void)setContainerIdentifierUUID:(id)arg1 forIdentityToken:(id)arg2 forStoreName:(id)arg3;
+ (_Bool)doBasicSanityCheckForUbiquityRootURL:(id)arg1 withError:(id *)arg2;
+ (id)createBaselineFromMostRecentLocation:(id)arg1 localPeerID:(id)arg2 error:(id *)arg3;
+ (id)generateMachineUUIDString;
+ (_Bool)ubiquityMetadataTablesPresentInStore:(id)arg1;
+ (void)cleanUserDefaultsForStore:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithPersistentStoreCoordinator:(id)arg1 andStoreOptions:(id)arg2 forPersistentStoreOfType:(id)arg3 atURL:(id)arg4;
- (_Bool)validateOptionsWithError:(id *)arg1;
- (_Bool)performCoordinatorPostStoreSetup:(id)arg1 error:(id *)arg2;
- (_Bool)canReadFromUbiquityRootLocation:(id *)arg1;
- (void)coordinatorWillRemoveStore:(id)arg1;
- (_Bool)doPostValidationInit:(id *)arg1;
- (id)longDescription;
- (id)getCurrentUbiquityIdentityToken;
- (void)ubiquityIdentityTokenChanged:(id)arg1;
- (_Bool)initializeStoreKnowledgeVectorFromStore:(id)arg1 error:(id *)arg2;
- (void)finishSetupWithRetry:(id)arg1;
- (_Bool)finishSetupForStore:(id)arg1 error:(id *)arg2;
- (_Bool)cleanUpFromFailedSetup:(id *)arg1;
- (_Bool)detectAndFixForkedContainer:(_Bool)arg1 store:(id)arg2 error:(id *)arg3;
- (_Bool)initializeReceiptFile:(id *)arg1;
- (_Bool)initializeContainerIdentifierWithStore:(id)arg1 error:(id *)arg2;
- (_Bool)initializeStack:(id *)arg1;
- (_Bool)initializeBaselineForStore:(id)arg1 error:(id *)arg2;
- (_Bool)checkKnowledgeVectorsAndBaselineWithStore:(id)arg1 error:(id *)arg2;
- (_Bool)sideLoadStore:(id)arg1 error:(id *)arg2;
- (_Bool)respondToBaselineRoll:(id *)arg1;
- (_Bool)attemptMetadataRecoveryForStore:(id)arg1 error:(id *)arg2;
- (_Bool)moveLocalLogFilesToUbiquityLocation:(id *)arg1;
- (_Bool)pruneStagingDirectoryForStore:(id)arg1 error:(id *)arg2;
- (_Bool)seedStore:(id)arg1 error:(id *)arg2;
- (void)initialSyncComplete;
- (id)migrationAssistant;
- (void)updateDictionary:(id)arg1 withShortcutSnapshot:(id)arg2;
- (void)updateDictionary:(id)arg1 withPhraseLearningJPSnapshot:(id)arg2;
- (void)updateDictionary:(id)arg1 withPhraseLearningSnapshot:(id)arg2;
- (void)updateDictionary:(id)arg1 withBigramSnapshot:(id)arg2;
- (void)removeEntriesFromDictionary:(id)arg1 withPhraseLearningJPSnapshot:(id)arg2;
- (void)removeEntriesFromDictionary:(id)arg1 withPhraseLearningSnapshot:(id)arg2;
- (void)removeEntriesFromDictionary:(id)arg1 withBigramSnapshot:(id)arg2;
- (void)fixdictionary:(id)arg1 withDeletes:(id)arg2;
- (void)insertEntriesInDicitonary:(id)arg1 inUserDictionaryManagedObjectContext:(id)arg2;
- (void)insertEntriesInDicitonary:(id)arg1 inLearningDictionaryManagedObjectContext:(id)arg2;
- (_Bool)migrateMetadataRoot:(id *)arg1;
- (void)exportedLog:(id)arg1;
- (_Bool)tryToReplaceLocalStore:(id)arg1 withStoreSideLoadedByImporter:(id)arg2;
- (id)createSetOfLocalLogLocations:(id *)arg1;
- (_Bool)rewriteTransactionLogs:(id)arg1 toMatchStore:(id)arg2 error:(id *)arg3;
- (_Bool)checkAndPerformMigrationForStore:(id)arg1 error:(id *)arg2;
- (void)removeEntriesFromDictionary:(id)arg1 withShortcutSnapshot:(id)arg2;
- (void)insertEntriesInDicitonary:(id)arg1 inLearningDictionaryJPManagedObjectContext:(id)arg2;
- (void)insertEntriesInDicitonary:(id)arg1 inBigramManagedObjectContext:(id)arg2;
- (_Bool)isInitialSyncComplete;
- (void)_setUbiquityRootLocation:(id)arg1 storeName:(id)arg2 localPeerID:(id)arg3 andModelVersionHash:(id)arg4;

@end

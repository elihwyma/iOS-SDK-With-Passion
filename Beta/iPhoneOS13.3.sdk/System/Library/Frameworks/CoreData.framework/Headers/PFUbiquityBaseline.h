/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/PFUbiquitySafeSaveFile.h>

@class NSDictionary, NSManagedObjectModel, NSMutableDictionary, NSPersistentStore, NSString, PFUbiquityBaselineMetadata, PFUbiquityLocation, _PFZipFileArchive;

__attribute__((visibility("hidden")))
@interface PFUbiquityBaseline : PFUbiquitySafeSaveFile

{
    PFUbiquityLocation *_baselineStagingLocation;
    PFUbiquityBaselineMetadata *_metadata;
    NSMutableDictionary *_storeFilenameToData;
    NSString *_storeFilename;
    NSString *_storeName;
    NSString *_modelVersionHash;
    NSManagedObjectModel *_model;
    _PFZipFileArchive *_baselineArchive;
    NSPersistentStore *_store;
}

@property (readonly) PFUbiquityLocation *baselineArchiveLocation;
@property (readonly) PFUbiquityLocation *baselineStagingLocation;
@property (readonly) PFUbiquityLocation *baselinePeerArchiveLocation;
@property (readonly) PFUbiquityBaselineMetadata *metadata;
@property (readonly) NSDictionary *storeFilenameToData;
@property (readonly) NSString *storeFilename;
@property (readonly) NSString *storeName;
@property (readonly) NSString *modelVersionHash;
@property (readonly) _PFZipFileArchive *baselineArchive;
@property (readonly) NSPersistentStore *store;

+ (_Bool)checkPeerReceiptsUnderRootLocation:(id)arg1 forAgreementWithLocalPeerID:(id)arg2 storeName:(id)arg3 modelVersionHash:(id)arg4 error:(id *)arg5;
+ (id)createArchiveWithModel:(id)arg1 metadata:(id)arg2 storeFilenameToData:(id)arg3 storeFilename:(id)arg4 error:(id *)arg5;
+ (id)metadataFromBaselineArchive:(id)arg1;
+ (id)metadataFromCurrentBaselineForStoreWithName:(id)arg1 peerID:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4 withError:(id *)arg5;
+ (_Bool)isPeerReceiptTooOld:(id)arg1;
+ (id)createModelFromBaselineModelWithModelVersionHash:(id)arg1 peerID:(id)arg2 storeName:(id)arg3 andUbiquityRootLocation:(id)arg4;
+ (id)createBaselineOptimizedModelForStoreName:(id)arg1 peerID:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4;
+ (id)createBaselineGCModelForStoreName:(id)arg1 peerID:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4;
+ (_Bool)removePeerSpecificIdentifiersFromStore:(id)arg1 withLocalPeerID:(id)arg2;
+ (id)createStringOfContentsOfBaselineFile:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)setMetadata:(id)arg1;
- (id)initWithBaselineLocation:(id)arg1 andLocalPeerID:(id)arg2;
- (id)createPersistentStoreCoordinatorForCurrentBaseline:(id *)arg1;
- (_Bool)clearOutStagingLocationWithError:(id *)arg1;
- (_Bool)constructBaselineArchive:(id *)arg1;
- (_Bool)unpackStoreFilesToStagingLocation:(id *)arg1;
- (_Bool)haveTransactionLogsForPeer:(id)arg1 between:(long long)arg2 and:(long long)arg3;
- (_Bool)makeCurrentBaselineWithError:(id *)arg1;
- (_Bool)replaceLocalPersistentStoreAtURL:(id)arg1 ofType:(id)arg2 withOptions:(id)arg3 usingPersistentStoreCoordinator:(id)arg4 error:(id *)arg5;
- (id)_createPersistentStoreCoordinatorForCurrentBaseline:(_Bool)arg1 error:(id *)arg2;
- (id)optimizedModelData;
- (id)gcModelData;
- (_Bool)moveToPermanentLocation:(id *)arg1;
- (id)createManagedObjectModelFromCurrentBaseline;
- (id)createSetOfInUseExternalDataRefUUIDs:(id *)arg1;
- (id)initWithLocalPeerID:(id)arg1 ubiquityRootLocation:(id)arg2 forStoreWithName:(id)arg3 andManagedObjectModel:(id)arg4;
- (_Bool)prepareForBaselineRollOfPersistentStore:(id)arg1 andLocalPeerID:(id)arg2 error:(id *)arg3;
- (_Bool)gatherContentsFromMigratedBaseline:(id)arg1 withStoreFileURL:(id)arg2 error:(id *)arg3;
- (_Bool)gatherContentsAndConstructArchiveWithError:(id *)arg1;
- (_Bool)loadFileFromLocation:(id)arg1 error:(id *)arg2;
- (_Bool)canReplaceStoreAtKnowledgeVector:(id)arg1;
- (_Bool)isUploaded:(id *)arg1;
- (_Bool)metadataMatchesCurrentMetadata:(id *)arg1;
- (_Bool)importBaselineForStoreAtURL:(id)arg1 ofType:(id)arg2 options:(id)arg3 withLocalPeerID:(id)arg4 stack:(id)arg5 andPersistentStoreCoordinator:(id)arg6 error:(id *)arg7;
- (_Bool)updateCurrentStoreIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)writeFileToLocation:(id)arg1 error:(id *)arg2;
- (id)baselineMetadataData;
- (id)storeData;
- (id)createManagedObjectModel;
- (_Bool)removeUnusedExternalDataReferences:(id *)arg1;

@end

/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSNumber, NSRecursiveLock, NSString, PFUbiquityKnowledgeVector, PFUbiquityLocation, PFUbiquitySaveSnapshot;

__attribute__((visibility("hidden")))
@interface PFUbiquityTransactionLog : NSObject

{
    NSMutableDictionary *_contents;
    int _transactionLogType;
    _Bool _useTemporaryLogLocation;
    PFUbiquityLocation *_transactionLogLocation;
    PFUbiquityLocation *_temporaryTransactionLogLocation;
    PFUbiquityLocation *_stagingTransactionLogLocation;
    NSString *_fileProtectionOption;
    _Bool _inTemporaryLocation;
    _Bool _inStagingLocation;
    _Bool _inPermanentLocation;
    PFUbiquityKnowledgeVector *_knowledgeVector;
    PFUbiquitySaveSnapshot *_saveSnapshot;
    NSString *_localPeerID;
    _Bool _loadUsingRetry;
    _Bool _loadedComparisonMetadata;
    _Bool _loadedImportMetadata;
    _Bool _loadedInsertedObjectData;
    _Bool _loadedUpdatedObjectData;
    _Bool _loadedDeletedObjectData;
    _Bool _loadedContents;
    NSRecursiveLock *_contentsLock;
}

@property (nonatomic) _Bool useTemporaryLogLocation;
@property (nonatomic, readonly) _Bool inTemporaryLocation;
@property (nonatomic, readonly) _Bool inStagingLocation;
@property (nonatomic, readonly) _Bool inPermanentLocation;
@property (nonatomic, readonly) NSString *storeName;
@property (nonatomic, readonly) NSString *exportingPeerID;
@property (nonatomic, readonly) NSString *modelVersionHash;
@property (nonatomic, readonly) NSString *fileProtectionOption;
@property (nonatomic, readonly) NSNumber *transactionNumber;
@property (nonatomic, readonly) NSString *transactionLogFilename;
@property (nonatomic, readonly) int transactionLogType;
@property (nonatomic, readonly) PFUbiquityLocation *transactionLogLocation;
@property (nonatomic, readonly) PFUbiquityLocation *temporaryTransactionLogLocation;
@property (nonatomic, readonly) PFUbiquityLocation *stagingTransactionLogLocation;
@property (nonatomic, readonly) PFUbiquitySaveSnapshot *saveSnapshot;
@property (nonatomic, readonly) PFUbiquityLocation *currentLocation;
@property (nonatomic, readonly) PFUbiquityKnowledgeVector *knowledgeVector;
@property (nonatomic, readonly) NSString *localPeerID;
@property (nonatomic) _Bool loadUsingRetry;
@property (nonatomic, readonly) _Bool loadedComparisonMetadata;
@property (nonatomic, readonly) _Bool loadedImportMetadata;
@property (nonatomic, readonly) _Bool loadedInsertedObjectData;
@property (nonatomic, readonly) _Bool loadedUpdatedObjectData;
@property (nonatomic, readonly) _Bool loadedDeletedObjectData;

+ (_Bool)pruneTemporaryLogDirectoryForPeerRootLocation:(id)arg1 error:(id *)arg2;
+ (int)transactionLogTypeFromLocation:(id)arg1;
+ (id)createTransactionLogFilenameForLogType:(int)arg1;
+ (id)createDataFromExtendedAttrsForLog:(id)arg1 error:(id *)arg2;
+ (void)updateModificationTimesForLocation:(id)arg1;
+ (void)truncateLogFilesForPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 beforeKnowledgeVector:(id)arg4 withLocalPeerID:(id)arg5 andUbiquityRootLocation:(id)arg6;
+ (id)transactionLogFilenameUUID;
+ (void)truncateLogFilesBeforeBaselineMetadata:(id)arg1 withLocalPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3;
+ (id)generateTransactionLogFilename;

- (id)init;
- (void)dealloc;
- (id)description;
- (_Bool)loadInsertedObjectsDataWithError:(id *)arg1;
- (_Bool)loadUpdatedObjectsDataWithError:(id *)arg1;
- (_Bool)loadDeletedObjectsDataWithError:(id *)arg1;
- (_Bool)releaseContents:(id *)arg1;
- (_Bool)loadComparisonMetadataWithError:(id *)arg1;
- (_Bool)loadImportMetadataWithError:(id *)arg1;
- (_Bool)moveFileToPermanentLocationWithError:(id *)arg1;
- (id)initWithStoreName:(id)arg1 andSaveSnapshot:(id)arg2 andRootLocation:(id)arg3;
- (_Bool)writeToDiskWithError:(id *)arg1 andUpdateFilenameInTransactionEntries:(id)arg2;
- (id)initWithTransactionLogLocation:(id)arg1 andLocalPeerID:(id)arg2;
- (void)releaseInsertedObjects;
- (void)releaseUpdatedObjects;
- (void)releaseDeletedObjects;
- (id)loadPlistAtLocation:(id)arg1 withError:(id *)arg2;
- (_Bool)loadContents:(id *)arg1;
- (void)populateContents;
- (_Bool)writeContentsOfZipArchive:(id)arg1 intoExtendedAttributesForFile:(id)arg2 error:(id *)arg3;
- (void)cleanupExternalDataReferences;
- (_Bool)deleteLogFileWithError:(id *)arg1;
- (id)initWithTransactionLogURL:(id)arg1 ubiquityRootLocation:(id)arg2 andLocalPeerID:(id)arg3;
- (_Bool)rewriteToDiskWithError:(id *)arg1;
- (id)generatePeerCodeKnowledgeVectorWithManagedObjectContext:(id)arg1;

@end

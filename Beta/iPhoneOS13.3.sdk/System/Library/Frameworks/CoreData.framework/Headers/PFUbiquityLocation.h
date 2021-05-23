/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityLocation : NSObject

{
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_ubiquityRootLocationPath;
    int _ubiquityLocationType;
    NSString *_exportingPeerID;
    NSString *_storeName;
    NSString *_modelVersionHash;
    NSString *_filename;
    NSArray *_otherPathComponents;
    _Bool _isDirectory;
    unsigned long long _hash;
    _Bool _isRootUbiquitous;
}

@property (nonatomic, readonly) PFUbiquityLocation *ubiquityRootLocation;
@property (nonatomic, readonly) NSString *ubiquityRootLocationPath;
@property (nonatomic, readonly) _Bool isRootUbiquitous;
@property (nonatomic, readonly) int ubiquityLocationType;
@property (nonatomic, readonly) NSString *exportingPeerID;
@property (nonatomic, readonly) NSString *storeName;
@property (nonatomic, readonly) NSString *modelVersionHash;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) _Bool usesStagingLogDirectory;
@property (nonatomic, readonly) _Bool usesTemporaryLogDirectory;
@property (nonatomic, readonly) _Bool usesCurrentBaselineDirectory;
@property (nonatomic, readonly) _Bool usesBaselineStagingDirectory;
@property (nonatomic, readonly) _Bool usesBaselineDirectory;
@property (nonatomic, readonly) _Bool usesNosyncDirectory;
@property (nonatomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *otherPathComponents;
@property (nonatomic, readonly, getter=isTransactionLogLocation) _Bool isTransactionLogLocation;
@property (nonatomic, readonly) _Bool isDirectory;

+ (void)initialize;
+ (id)pathByTruncatingBeforeLibraryMobileDocuments:(id)arg1;
+ (id)createPeerRootLocationForPeerID:(id)arg1 withUbiquityRootLocation:(id)arg2;
+ (id)createVersionHashStringForModel:(id)arg1;
+ (id)createArrayOfSubLocationsAtLocation:(id)arg1 error:(id *)arg2;
+ (id)createUbiquityLocationForRootURL:(id)arg1;
+ (id)createTransactionLogLocationForPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 logFilename:(id)arg4 andUbiquityRootLocation:(id)arg5;
+ (id)createUbiquityLocationForURL:(id)arg1 withUbiquityRootLocation:(id)arg2;
+ (id)createBaselineLocation:(int)arg1 forStoreName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4;
+ (id)createTemporaryTransactionLogLocationFromTransactionLogLocation:(id)arg1;
+ (id)createStagingTransactionLogLocationFromTransactionLogLocation:(id)arg1;
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)arg1 andStore:(id)arg2 withUbiquityRootLocation:(id)arg3;
+ (id)createPeerBaselineFileSafeSaveLocationForLocalPeerID:(id)arg1 andBaselineFileLocation:(id)arg2;
+ (id)createBaselineStagingLocation:(int)arg1 forStoreName:(id)arg2 modelVersionHash:(id)arg3 andFilename:(id)arg4 withUbiquityRootLocation:(id)arg5;
+ (id)createPeerStoreVersionLocationForPeerID:(id)arg1 storeName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4;
+ (id)createCurrentBaselineLocation:(int)arg1 forStoreName:(id)arg2 peerID:(id)arg3 andModelVersionHash:(id)arg4 forFileNamed:(id)arg5 withUbiquityRootLocation:(id)arg6;
+ (id)createUbiquityExternalDataReferenceStoreLocationForStoreName:(id)arg1 withUbiquityRootLocation:(id)arg2;
+ (id)locationSentinel;
+ (void)setLocationSentinel:(id)arg1;
+ (id)createUbiquityLocationForRootPath:(id)arg1;
+ (id)createUbiquityLocationForPath:(id)arg1 withUbiquityRootLocation:(id)arg2;
+ (id)createTransactionLogLocationFromTemporaryOrStagingLogLocation:(id)arg1;
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)arg1 andLog:(id)arg2;
+ (id)createPeerStoreLocationForPeerID:(id)arg1 andStoreName:(id)arg2 withUbiquityRootLocation:(id)arg3;
+ (id)createStringByAppendingSubpath:(id)arg1 toPath:(id)arg2;
+ (id)createUbiquityLocationForRootPath:(id)arg1 checkIsUbiquitous:(_Bool)arg2;
+ (id)createUbiquityLocationForPath:(id)arg1 withUbiquityRootPath:(id)arg2;
+ (_Bool)isUbiquityLocationPath:(id)arg1 equalToPath:(id)arg2;
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
+ (id)localLocationSentinel;
+ (id)createLocalBasePathWithLocalPeerID:(id)arg1 containerID:(id)arg2 storeName:(id)arg3 andStoreURL:(id)arg4;
+ (id)createUbiquityLocationForURL:(id)arg1 withUbiquityRootURL:(id)arg2;
+ (id)createUbiquityLocationForSubpath:(id)arg1 ofUbiquityRootPath:(id)arg2;
+ (id)createMetadataRootLocationForUbiquityRootLocation:(id)arg1;
+ (id)createMetadataStoreFileLocationForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
+ (id)createMetadataPeerLocationForLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2;
+ (id)createMetadataPeerStoreLocationForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
+ (id)createMetadataUUIDLocationForLocalPeerID:(id)arg1 storeName:(id)arg2 UUID:(id)arg3 andUbiquityRootLocation:(id)arg4;
+ (id)createPeerBaselineFileLocationForLocalPeerID:(id)arg1 andBaselineFileLocation:(id)arg2;
+ (id)createStagingPeerStoreVersionLocationForExportingPeerID:(id)arg1 storeName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4;
+ (id)createUbiquityPeerReceiptFileLocationForPeerWithID:(id)arg1 storeName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4;
+ (id)createUbiquityPeerReceiptSafeSaveLocationFromReceiptFileLocation:(id)arg1;
+ (id)createMapOfLocationsForOldManagedObjectModel:(id)arg1 andNewManagedObjectModel:(id)arg2 inUbiquityPeerStoreLocation:(id)arg3;
+ (id)createLocalStoresPathWithLocalPeerID:(id)arg1 containerID:(id)arg2 storeName:(id)arg3 andStoreURL:(id)arg4;
+ (id)createLocalContainerRootLocationWithLocalPeerID:(id)arg1 containerID:(id)arg2 storeName:(id)arg3 andStoreURL:(id)arg4;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setStoreName:(id)arg1;
- (void)setFilename:(id)arg1;
- (_Bool)fileExistsAtLocation;
- (id)createFullPath;
- (id)createRelativePath;
- (id)createFullURL;
- (void)setExportingPeerID:(id)arg1;
- (void)setUbiquityRootLocation:(id)arg1;
- (_Bool)removeFileAtLocation:(id)arg1 error:(id *)arg2;
- (void)updateHash;
- (id)initWithUbiquityRootPath:(id)arg1;
- (void)setUbiquityRootLocationPath:(id)arg1;
- (void)setModelVersionHash:(id)arg1;
- (void)setOtherPathComponents:(id)arg1;
- (void)setUbiquityLocationType:(int)arg1;
- (void)setHash:(unsigned long long)arg1;
- (void)setIsRootUbiquitous:(_Bool)arg1;
- (_Bool)fileExistsAtLocationWithLocalPeerID:(id)arg1 error:(id *)arg2;
- (_Bool)__isDirectory;
- (id)initWithUbiquityRootURL:(id)arg1;
- (_Bool)fileAtLocationIsUploaded:(id *)arg1;
- (_Bool)fileAtLocationIsDownloaded:(id *)arg1;
- (_Bool)isEqualToURL:(id)arg1;

@end

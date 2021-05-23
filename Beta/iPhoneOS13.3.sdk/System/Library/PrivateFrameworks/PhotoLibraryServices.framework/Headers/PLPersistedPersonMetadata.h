/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL, PLPerson;

@interface PLPersistedPersonMetadata : NSObject

{
    _Bool _cplEnabled;
    short _keyFacePickSource;
    unsigned int _manualOrder;
    int _type;
    int _verifiedType;
    int _cloudVerifiedType;
    NSString *_personUUID;
    NSString *_mergeTargetPersonUUID;
    NSString *_fullName;
    NSString *_displayName;
    NSString *_personUri;
    NSArray *_detectedFaces;
    NSArray *_rejectedFaces;
    NSDictionary *_contactMatchingDictionary;
    long long _fromVersion;
    PLPerson *_person;
    NSURL *_metadataURL;
}

@property (retain, nonatomic) PLPerson *person;
@property (retain, nonatomic) NSURL *metadataURL;
@property (retain, nonatomic) NSString *personUUID;
@property (retain, nonatomic) NSString *mergeTargetPersonUUID;
@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *personUri;
@property (nonatomic) unsigned int manualOrder;
@property (nonatomic) int type;
@property (nonatomic) int verifiedType;
@property (nonatomic) int cloudVerifiedType;
@property (retain, nonatomic) NSArray *detectedFaces;
@property (retain, nonatomic) NSArray *rejectedFaces;
@property (copy, nonatomic) NSDictionary *contactMatchingDictionary;
@property (nonatomic) short keyFacePickSource;
@property (nonatomic) long long fromVersion;

+ (_Bool)isValidPath:(id)arg1;
+ (id)_clusterRejectedFaceIDsWithPerson:(id)arg1;
+ (id)_rejectedFacesToArchiveWithPerson:(id)arg1;
+ (id)_persistedFaceMetadataWithFaces:(id)arg1 keyFace:(id)arg2 clusterRejectedFaceIDs:(id)arg3;
+ (id)_detectedFacesToArchiveWithPerson:(id)arg1;
+ (_Bool)_deleteMetadataFileForPersonUUID:(id)arg1 metadataURL:(id)arg2;
+ (id)_metadataFileURLForPersonUUID:(id)arg1 pathManager:(id)arg2;
+ (_Bool)isValidPath:(id)arg1 outPersonUUID:(id *)arg2;
+ (id)urlsForPersistedPersonsInMetadataDirectoryOfLibrary:(id)arg1;
+ (_Bool)deleteMetadataFileForPersonUUID:(id)arg1 pathManager:(id)arg2;
+ (id)_fetchFacesWithPredicate:(id)arg1 resultType:(unsigned long long)arg2 managedObjectContext:(id)arg3 error:(id *)arg4;
+ (id)personUUIDsToDedupeWithMetadataURLs:(id)arg1 cplEnabled:(_Bool)arg2;
+ (void)updateMergeTargetPersonWithPersonUUIDMapping:(id)arg1 fromDataInManagedObjectContext:(id)arg2;
+ (void)performPostImportMigrationFromVersion:(unsigned long long)arg1 fromDataInManagedObjectContext:(id)arg2;

- (id)init;
- (id)description;
- (_Bool)readMetadata;
- (void)writePersistedData;
- (void)removePersistedData;
- (_Bool)hasAllAssetsAvailableInManagedObjectContext:(id)arg1 includePendingAssetChanges:(_Bool)arg2;
- (id)_metadataData;
- (void)_saveMetadata;
- (id)jsonDictionary;
- (id)initWithPLPerson:(id)arg1 pathManager:(id)arg2;
- (id)initWithPLPerson:(id)arg1 metadataURL:(id)arg2;
- (id)initWithPersistedDataAtURL:(id)arg1 cplEnabled:(_Bool)arg2;
- (id)initWithPersistedDataAtURL:(id)arg1 deferUnarchiving:(_Bool)arg2 cplEnabled:(_Bool)arg3;
- (id)detectedFaceIdentifiers;
- (id)insertPersonFromDataInManagedObjectContext:(id)arg1;
- (_Bool)updateFacesInPerson:(id)arg1 fromDataInManagedObjectContext:(id)arg2 deferUnmatched:(_Bool)arg3;
- (void)_addAssetUUIDsFromFaces:(id)arg1 toMutableSet:(id)arg2;
- (_Bool)_insertDetectedFacesOnPerson:(id)arg1 fromDataInManagedObjectContext:(id)arg2 deferUnmatched:(_Bool)arg3;
- (_Bool)_insertRejectedFacesOnPerson:(id)arg1 fromDataInManagedObjectContext:(id)arg2 deferUnmatched:(_Bool)arg3;
- (_Bool)_readUUID;
- (_Bool)readDetectedFaces;
- (_Bool)matchesEntityInLibraryBackedByManagedObjectContext:(id)arg1 diff:(id *)arg2;

@end

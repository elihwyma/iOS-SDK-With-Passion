/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class CPLScopedIdentifier, NSDate, NSManagedObjectID, NSString, PLCloudMaster, PLManagedAsset;

@interface PLCloudResource : PLManagedObject

@property (retain, nonatomic) NSString *assetUuid;
@property (retain, nonatomic) NSDate *dateCreated;
@property (retain, nonatomic) NSString *filePath;
@property (nonatomic) unsigned long long fileSize;
@property (retain, nonatomic) NSString *fingerprint;
@property (nonatomic) long long height;
@property (nonatomic) _Bool isAvailable;
@property (nonatomic) _Bool isLocallyAvailable;
@property (nonatomic) short cloudLocalState;
@property (retain, nonatomic) NSString *itemIdentifier;
@property (nonatomic, readonly) CPLScopedIdentifier *scopedIdentifier;
@property (retain, nonatomic) NSDate *lastOnDemandDownloadDate;
@property (retain, nonatomic) NSDate *lastPrefetchDate;
@property (nonatomic) short prefetchCount;
@property (retain, nonatomic) NSDate *prunedAt;
@property (nonatomic) int type;
@property (nonatomic) int sourceType;
@property (retain, nonatomic) NSString *uniformTypeIdentifier;
@property (nonatomic) long long width;
@property (retain, nonatomic) PLManagedAsset *asset;
@property (retain, nonatomic) PLCloudMaster *cloudMaster;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) unsigned long long cplType;
@property (nonatomic, readonly) unsigned long long sourceCplType;
@property (retain, nonatomic, readonly) NSString *utiString;
@property (nonatomic, readonly) unsigned int resourceRecipeID;

+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 forAsset:(id)arg2 withCPLResource:(id)arg3 adjusted:(_Bool)arg4 withCreationDate:(id)arg5;
+ (id)duplicateCloudResource:(id)arg1 forAsset:(id)arg2 withFilePath:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)nonLocalResourcesInManagedObjectContext:(id)arg1 forAssetUUIDs:(id)arg2 cplResourceTypes:(id)arg3;
+ (void)resetPrefetchStateForResourcesWithResourceType:(long long)arg1 itemIdentifiers:(id)arg2 inLibrary:(id)arg3;
+ (unsigned long long)bytesForAllResourcesInLibrary:(id)arg1;
+ (_Bool)countOfMediumOriginalLocalCloudResourcesInManagedObjectContext:(id)arg1 localCount:(unsigned long long *)arg2 unavailableCount:(unsigned long long *)arg3 error:(id *)arg4;
+ (_Bool)countOfLocalCloudResourcesOfType:(unsigned long long)arg1 inManagedObjectContext:(id)arg2 localCount:(unsigned long long *)arg3 unavailableCount:(unsigned long long *)arg4 error:(id *)arg5;
+ (_Bool)_countOfLocalCloudResourcesOfType:(unsigned long long)arg1 inManagedObjectContext:(id)arg2 forMediumSized:(_Bool)arg3 localCount:(unsigned long long *)arg4 unavailableCount:(unsigned long long *)arg5 error:(id *)arg6;

- (void)prepareForDeletion;
- (void)markAsNotLocallyAvailable;
- (void)markAsLocallyAvailableWithFilePath:(id)arg1;
- (id)cplResourceIncludeFile:(_Bool)arg1;
- (void)applyPropertiesFromCloudResource:(id)arg1;
- (void)_duplicatePropertiesFromCloudResource:(id)arg1 withFilePath:(id)arg2 forAssetUuid:(id)arg3;

@end

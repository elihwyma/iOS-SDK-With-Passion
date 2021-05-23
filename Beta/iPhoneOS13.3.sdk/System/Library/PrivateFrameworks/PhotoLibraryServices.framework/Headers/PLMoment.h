/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@class CLLocation, NSArray, NSDate, NSObject, NSSet, NSString, PLMomentList;

@protocol NSCopying, PLPhotosHighlightData;

@interface PLMoment : PLManagedObject <Swift>

{
    _Bool _loadedNameInfo;
    CLLocation *_cachedApproximateLocation;
    _Bool _didCacheApproximateLocation;
    struct CLLocationCoordinate2D _cachedCoordinate;
    _Bool _didCacheCoordinate;
    _Bool isRegisteredForChanges;
    _Bool didRegisteredWithUserInterfaceContext;
}

@property (nonatomic) _Bool isRegisteredForChanges;
@property (nonatomic) _Bool didRegisteredWithUserInterfaceContext;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) int timeZoneOffset;
@property (nonatomic, readonly) NSDate *localStartDate;
@property (nonatomic, readonly) NSDate *localEndDate;
@property (retain, nonatomic) NSDate *representativeDate;
@property (nonatomic) int cachedCount;
@property (nonatomic) int cachedPhotosCount;
@property (nonatomic) int cachedVideosCount;
@property (retain, nonatomic) PLMomentList *yearMomentList;
@property (retain, nonatomic) PLMomentList *megaMomentList;
@property (retain, nonatomic) NSDate *modificationDate;
@property (nonatomic) double approximateLatitude;
@property (nonatomic) double approximateLongitude;
@property (retain, nonatomic) CLLocation *approximateLocation;
@property (nonatomic) float aggregationScore;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) unsigned short processedLocation;
@property (copy, nonatomic, readonly) NSArray *localizedLocationNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDate *pl_startDate;
@property (nonatomic, readonly) NSDate *pl_endDate;
@property (nonatomic, readonly) unsigned long long pl_numberOfAssets;
@property (nonatomic, readonly) CLLocation *pl_location;
@property (nonatomic, readonly) struct CLLocationCoordinate2D pl_coordinate;
@property (retain, nonatomic, readonly) NSObject<NSCopying> *uniqueObjectID;
@property (retain, nonatomic) NSSet *assets;
@property (retain, nonatomic, readonly) NSArray *batchedAssets;
@property (nonatomic, readonly) id <PLPhotosHighlightData> highlight;

+ (id)entityName;
+ (id)sortByTimeSortDescriptors;
+ (id)baseSearchIndexPredicate;
+ (id)allAssetsIncludedInMomentsInLibrary:(id)arg1;
+ (id)allAssetsIncludedInMomentsInManagedObjectContext:(id)arg1 IDsOnly:(_Bool)arg2 error:(id *)arg3;
+ (id)allMomentsInManagedObjectContext:(id)arg1 predicate:(id)arg2 idsOnly:(_Bool)arg3 error:(id *)arg4;
+ (id)predicateForInvalidMoments;
+ (id)predicateForInvalidAssets;
+ (id)predicateForAssetsIncludedInMoments;
+ (id)allAssetsInManagedObjectContext:(id)arg1 predicate:(id)arg2 IDsOnly:(_Bool)arg3 error:(id *)arg4;
+ (id)predicateForInvalidAssetsIgnoringAssetsWithIdentifiers:(id)arg1;
+ (id)insertNewMomentInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)allMomentsInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)allMomentIDsInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)allInvalidMomentsInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)allInvalidMomentIDsInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)allMomentsRequiringAnalysisInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)momentsWithLocationTypeUnprocessedInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)momentsRequiringLocationProcessingWhenFrequentLocationsChangedInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (void)batchFetchMomentUUIDsByAssetUUIDsWithAssetUUIDs:(id)arg1 library:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)invalidAssetsIgnoringAssetIdentifiers:(id)arg1 inManagedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)allInvalidAssetsInManagedObjectContext:(id)arg1 error:(id *)arg2;

- (void)dealloc;
- (void)delete;
- (void)awakeFromFetch;
- (void)willTurnIntoFault;
- (void)didTurnIntoFault;
- (void)awakeFromInsert;
- (void)willSave;
- (id)displayTitleWithDateFormatter:(id)arg1;
- (id)assetUUIDsForPreviewWithCount:(unsigned long long)arg1;
- (void)getSearchIndexContentsForCollection:(id)arg1 fromDictionary:(id)arg2 withDateFormatter:(id)arg3 synonymsDictionaries:(id)arg4 sceneTaxonomyProxy:(id)arg5;
- (id)bestAsset;
- (void)_appendLocationsInfo:(id)arg1 toCollection:(id)arg2;
- (void)_appendPersonsWithUUIDs:(id)arg1 toCollection:(id)arg2;
- (void)_appendSocialGroupIdentifiers:(id)arg1 toCollection:(id)arg2;
- (void)_appendDates:(id)arg1 withDateFormatter:(id)arg2 withSynonyms:(id)arg3 toCollection:(id)arg4;
- (void)_appendScenesWithIdentifiers:(id)arg1 toCollection:(id)arg2 sceneTaxonomyProxy:(id)arg3;
- (void)_appendMeanings:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3;
- (void)_appendHolidays:(id)arg1 toCollection:(id)arg2;
- (void)_appendPOIs:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3;
- (void)_appendROIs:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3;
- (void)_appendBusinessNames:(id)arg1 toCollection:(id)arg2;
- (void)_appendBusinessCategories:(id)arg1 toCollection:(id)arg2;
- (void)_appendPublicEventStrings:(id)arg1 toCollection:(id)arg2 forSearchIndexCategory:(unsigned long long)arg3;
- (void)_appendPublicEventCategories:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3;
- (void)_appendWorkText:(id)arg1 toCollection:(id)arg2;
- (void)_appendHomeToCollection:(id)arg1;
- (id)mutableAssets;
- (struct CGImage *)posterImage;
- (_Bool)isCloudSharedAlbum;
- (id)groupURL;
- (_Bool)supportsDiagnosticInformation;
- (id)diagnosticInformation;
- (void)removeAssetData:(id)arg1;
- (void)registerForChanges;
- (void)unregisterForChanges;
- (unsigned long long)countForAssetsOfKind:(short)arg1;
- (void)insertAssetData:(id)arg1;
- (void)replaceObjectInAssets:(id)arg1 withObject:(id)arg2;
- (void)removeAssetsObject:(id)arg1;
- (unsigned long long)fetchedAssetsCount;

@end

/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSArray, NSDate, NSObject, NSSet, NSString, PLManagedAsset;

@protocol NSCopying;

@interface PLPhotosHighlight : PLManagedObject

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *verboseSmartDescription;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic, readonly) NSDate *localStartDate;
@property (retain, nonatomic, readonly) NSDate *localEndDate;
@property (nonatomic) _Bool isCurated;
@property (nonatomic) unsigned short visibilityState;
@property (nonatomic) unsigned short kind;
@property (nonatomic) unsigned short type;
@property (nonatomic) unsigned short category;
@property (nonatomic) int startTimeZoneOffset;
@property (nonatomic) int endTimeZoneOffset;
@property (nonatomic) double promotionScore;
@property (nonatomic) unsigned short enrichmentState;
@property (nonatomic) unsigned long long mood;
@property (nonatomic) int assetsCount;
@property (nonatomic) int extendedCount;
@property (nonatomic) int summaryCount;
@property (nonatomic) int dayGroupAssetsCount;
@property (nonatomic) int dayGroupExtendedAssetsCount;
@property (nonatomic) int dayGroupSummaryAssetsCount;
@property (retain, nonatomic) NSSet *childPhotosHighlights;
@property (retain, nonatomic) PLPhotosHighlight *parentPhotosHighlight;
@property (retain, nonatomic) NSSet *childDayGroupPhotosHighlights;
@property (retain, nonatomic) PLPhotosHighlight *parentDayGroupPhotosHighlight;
@property (nonatomic) short highlightVersion;
@property (nonatomic) short enrichmentVersion;
@property (retain, nonatomic) NSSet *assets;
@property (retain, nonatomic) NSSet *summaryAssets;
@property (retain, nonatomic) NSSet *extendedAssets;
@property (retain, nonatomic) PLManagedAsset *keyAsset;
@property (retain, nonatomic) NSSet *moments;
@property (retain, nonatomic) PLManagedAsset *monthKeyAsset;
@property (retain, nonatomic) PLManagedAsset *monthFirstAsset;
@property (retain, nonatomic) PLManagedAsset *yearKeyAsset;
@property (retain, nonatomic) NSSet *dayGroupAssets;
@property (retain, nonatomic) NSSet *dayGroupExtendedAssets;
@property (retain, nonatomic) NSSet *dayGroupSummaryAssets;
@property (retain, nonatomic) PLManagedAsset *dayGroupKeyAsset;
@property (retain, nonatomic) PLManagedAsset *keyAssetForKind;
@property (retain, nonatomic, readonly) NSArray *momentsSortedByTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long numberOfAssetsInExtended;
@property (nonatomic, readonly) _Bool isPromoted;
@property (nonatomic, readonly) _Bool isRecent;
@property (retain, nonatomic, readonly) NSObject<NSCopying> *uniqueObjectID;

+ (id)fetchRequest;
+ (id)entityName;
+ (id)sortByTimeSortDescriptors;
+ (id)baseSearchIndexPredicate;
+ (id)_kindDescription:(unsigned short)arg1;
+ (id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2 title:(id)arg3;
+ (id)insertNewPhotosHighlightInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)allPhotosHighlightsInManagedObjectContext:(id)arg1 predicate:(id)arg2 keyPathsForPrefetching:(id)arg3 error:(id *)arg4;
+ (id)predicateForAllAssetsInPhotosHighlight:(id)arg1;
+ (id)_predicateForHighlightsOfKind:(unsigned short)arg1;
+ (id)predicateForEmptyHighlightsOfKind:(unsigned short)arg1;
+ (id)predicateForInvalidHighlightsOfAllKinds;
+ (id)predicateForInvalidDayHighlights;
+ (id)predicateForInvalidDayGroupHighlights;
+ (id)predicateForInvalidMonthOrYearHighlights;
+ (id)batchFetchPhotosHighlightUUIDsByAssetUUIDsWithAssetUUIDs:(id)arg1 library:(id)arg2 error:(id *)arg3;
+ (id)batchFetchPhotosHighlightUUIDsByMomentUUIDsWithMomentUUIDs:(id)arg1 library:(id)arg2 error:(id *)arg3;

- (void)delete;
- (void)awakeFromInsert;
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
- (_Bool)supportsDiagnosticInformation;
- (id)diagnosticInformation;
- (void)refreshAssets;
- (void)bumpHighlightVersion;
- (void)removeAssetData:(id)arg1;
- (void)refreshCuratedAssetsForCurationType:(unsigned short)arg1;
- (int)searchAssetsCountForKind;

@end

/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetCollection.h>

@class NSDate, NSManagedObjectID, NSString;

@interface PHPhotosHighlight : PHAssetCollection

{
    unsigned long long _assetsCount;
    _Bool _curated;
    _Bool _enriched;
    _Bool _recent;
    unsigned short _kind;
    unsigned short _type;
    unsigned short _category;
    unsigned short _visibilityState;
    unsigned short _enrichmentState;
    short _highlightVersion;
    short _enrichmentVersion;
    unsigned long long _extendedCount;
    unsigned long long _summaryCount;
    NSString *_verboseSmartDescription;
    long long _startTimeZoneOffset;
    long long _endTimeZoneOffset;
    double _promotionScore;
    unsigned long long _mood;
    NSDate *_localStartDate;
    NSDate *_localEndDate;
    unsigned long long _dayGroupAssetsCount;
    unsigned long long _dayGroupExtendedAssetsCount;
    unsigned long long _dayGroupSummaryAssetsCount;
    NSString *_subtitle;
    NSManagedObjectID *_parentPhotosHighlight;
    NSManagedObjectID *_keyAsset;
    NSManagedObjectID *_dayGroupKeyAsset;
    NSManagedObjectID *_monthKeyAsset;
    NSManagedObjectID *_yearKeyAsset;
}

@property (nonatomic, getter=isEnriched) _Bool enriched;
@property (nonatomic, getter=isRecent) _Bool recent;
@property (retain, nonatomic) NSDate *localStartDate;
@property (retain, nonatomic) NSDate *localEndDate;
@property (nonatomic, readonly) unsigned long long dayGroupAssetsCount;
@property (nonatomic, readonly) unsigned long long dayGroupExtendedAssetsCount;
@property (nonatomic, readonly) unsigned long long dayGroupSummaryAssetsCount;
@property (nonatomic, readonly) unsigned short enrichmentState;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) short highlightVersion;
@property (nonatomic, readonly) short enrichmentVersion;
@property (nonatomic, readonly) NSManagedObjectID *parentPhotosHighlight;
@property (nonatomic, readonly) NSManagedObjectID *keyAsset;
@property (nonatomic, readonly) NSManagedObjectID *dayGroupKeyAsset;
@property (nonatomic, readonly) NSManagedObjectID *monthKeyAsset;
@property (nonatomic, readonly) NSManagedObjectID *yearKeyAsset;
@property (nonatomic, readonly) NSManagedObjectID *keyAssetForKind;
@property (nonatomic, readonly) unsigned short preferredCurationType;
@property (nonatomic, readonly) NSString *dateDescription;
@property (nonatomic, readonly) NSString *smartDescription;
@property (nonatomic, readonly) NSString *verboseSmartDescription;
@property (nonatomic, readonly) unsigned short kind;
@property (nonatomic, readonly) unsigned short type;
@property (nonatomic, readonly) unsigned short category;
@property (nonatomic, readonly) unsigned short visibilityState;
@property (nonatomic, readonly, getter=isCurated) _Bool curated;
@property (nonatomic, readonly) long long startTimeZoneOffset;
@property (nonatomic, readonly) long long endTimeZoneOffset;
@property (nonatomic, readonly) double promotionScore;
@property (nonatomic, readonly) unsigned long long mood;
@property (nonatomic, readonly) unsigned long long extendedCount;
@property (nonatomic, readonly) unsigned long long summaryCount;

+ (_Bool)processRecentHighlights;
+ (_Bool)processUnprocessedMomentLocations;
+ (_Bool)updateHighlightTitles;
+ (_Bool)cleanupEmptyHighlights;
+ (id)dateRangeTitleGenerator;
+ (id)managedEntityName;
+ (id)fetchType;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)identifierCode;
+ (_Bool)managedObjectSupportsTrashedState;
+ (_Bool)managedObjectSupportsPendingState;
+ (_Bool)managedObjectSupportsRejectedState;
+ (id)entityKeyMap;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)fetchParentHighlightForHighlight:(id)arg1 options:(id)arg2;
+ (id)fetchParentHighlightsForHighlights:(id)arg1 options:(id)arg2;
+ (id)fetchChildHighlightsForHighlight:(id)arg1 options:(id)arg2;
+ (id)fetchParentDayGroupHighlightForHighlight:(id)arg1 options:(id)arg2;
+ (id)fetchChildDayGroupHighlightsForHighlight:(id)arg1 options:(id)arg2;
+ (id)fetchPhotosHighlightUUIDByAssetUUIDForAssets:(id)arg1 options:(id)arg2;
+ (id)fetchPhotosHighlightUUIDByAssetUUIDForAssetUUIDs:(id)arg1 options:(id)arg2;
+ (id)_fetchPhotosHighlightUUIDByAssetUUIDForAssetUUIDs:(id)arg1 photoLibrary:(id)arg2;
+ (id)fetchPhotosHighlightUUIDByMomentUUIDForMomentUUIDs:(id)arg1 options:(id)arg2;
+ (_Bool)invalidateHighlightSubtitlesAndRegenerateHighlightTitles;

- (id)description;
- (id)title;
- (id)localizedSubtitle;
- (_Bool)canPerformEditOperation:(long long)arg1;
- (_Bool)canShowAvalancheStacks;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (unsigned long long)estimatedAssetCount;
- (long long)assetCollectionSubtype;
- (unsigned long long)countForCurationType:(unsigned short)arg1;
- (id)dateDescriptionWithOptions:(unsigned long long)arg1;

@end

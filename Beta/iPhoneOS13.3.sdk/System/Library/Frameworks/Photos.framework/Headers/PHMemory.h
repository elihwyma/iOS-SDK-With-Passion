/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetCollection.h>

@class NSArray, NSData, NSDate, NSDictionary, NSSet, NSString, PHMemoryFeature;

@interface PHMemory : PHAssetCollection

{
    NSString *_title;
    NSString *_localizedSubtitle;
    NSData *_photosGraphData;
    long long _photosGraphVersion;
    NSDictionary *_transientMemoryProperties;
    NSDate *_creationDate;
    unsigned long long _category;
    unsigned long long _subcategory;
    unsigned long long _notificationState;
    _Bool _rejected;
    _Bool _favorite;
    _Bool _pending;
    _Bool _userCreated;
    NSDictionary *_movieAssetState;
    NSData *_movieData;
    double _score;
    NSDate *_lastViewedDate;
    NSDate *_lastMoviePlayedDate;
    NSString *_titleFontName;
    NSData *_assetListPredicate;
    PHMemoryFeature *_blacklistedFeature;
    long long _syncedPlayCount;
    long long _syncedShareCount;
    long long _syncedViewCount;
    long long _pendingPlayCount;
    long long _pendingShareCount;
    long long _pendingViewCount;
    _Bool _didLoadTitleCategory;
    long long _titleCategory;
    NSDictionary *_photosGraphProperties;
}

@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic, readonly) unsigned long long subcategory;
@property (nonatomic, readonly) unsigned long long notificationState;
@property (nonatomic, readonly, getter=isRejected) _Bool rejected;
@property (nonatomic, readonly, getter=isFavorite) _Bool favorite;
@property (nonatomic, readonly, getter=isPending) _Bool pending;
@property (nonatomic, readonly, getter=isUserCreated) _Bool userCreated;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSData *movieData;
@property (nonatomic, readonly) long long photosGraphVersion;
@property (nonatomic, readonly) NSDictionary *photosGraphProperties;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) NSDate *lastViewedDate;
@property (nonatomic, readonly) NSDate *lastMoviePlayedDate;
@property (nonatomic, readonly) NSSet *featuredPeopleIdentifiers;
@property (nonatomic, readonly) NSData *assetListPredicate;
@property (nonatomic, readonly) _Bool isContiguous;
@property (nonatomic, readonly) NSArray *blacklistableFeatures;
@property (nonatomic, readonly) PHMemoryFeature *blacklistedFeature;
@property (nonatomic, readonly) long long playCount;
@property (nonatomic, readonly) long long shareCount;
@property (nonatomic, readonly) long long viewCount;
@property (nonatomic, readonly) _Bool isMustSee;
@property (nonatomic, readonly) _Bool isStellar;
@property (nonatomic, readonly) _Bool isGreat;
@property (nonatomic, readonly) NSDictionary *musicGenreDistribution;

+ (id)managedEntityName;
+ (id)fetchType;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)identifierCode;
+ (_Bool)managedObjectSupportsTrashedState;
+ (_Bool)managedObjectSupportsPendingState;
+ (_Bool)managedObjectSupportsRejectedState;
+ (id)entityKeyMap;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)titleFontNameFromMovieData:(id)arg1;
+ (void)generateMemoriesWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)fetchBlacklistedMemoriesWithOptions:(id)arg1;
+ (id)movieDataWithTitleFontName:(id)arg1;
+ (id)assetListPredicateFromQueryHintObjects:(id)arg1;
+ (id)stringForCategory:(unsigned long long)arg1;
+ (id)stringForSubcategory:(unsigned long long)arg1;
+ (id)fetchBestRecentMemoryWithOptions:(id)arg1;
+ (unsigned long long)_contextualScoreForMemory:(id)arg1;
+ (id)transientMemoryWithInfo:(id)arg1 photoLibrary:(id)arg2;
+ (id)memoryInfosWithOptions:(id)arg1 photoLibrary:(id)arg2;
+ (id)memoryTreeLevelWithOptions:(id)arg1 photoLibrary:(id)arg2;
+ (id)_fetchOptionsForTransientMemoryAssetsWithOptions:(id)arg1;

- (id)description;
- (id)query;
- (id)creationDate;
- (_Bool)isTransient;
- (id)localizedSubtitle;
- (_Bool)canPerformEditOperation:(long long)arg1;
- (_Bool)canShowAvalancheStacks;
- (_Bool)collectionHasFixedOrder;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (Class)changeRequestClass;
- (long long)titleCategory;
- (_Bool)canContainAssets;
- (id)titleFontName;
- (unsigned long long)titleFontNameHash;
- (id)movieStateDataForAsset:(id)arg1;
- (_Bool)hasBlacklistableFeature;
- (id)defaultSortDescriptor;
- (id)predicateForAllAssetsWithLibrary:(id)arg1;
- (id)predicateForAllMomentsFromRepresentativeAssets;
- (id)_representativeAndCuratedAssetIDs;
- (id)_curatedAssetIDsWithLibrary:(id)arg1;
- (id)_extendedCuratedAssetIDsWithLibrary:(id)arg1;
- (unsigned long long)suggestedMood;
- (id)moodKeywords;
- (id)meaningLabels;
- (id)queryForExtendedCuratedAssetsWithOptions:(id)arg1;
- (id)queryForCuratedAssetsWithOptions:(id)arg1;
- (id)queryForKeyAssetWithOptions:(id)arg1;
- (id)transientRepresentativeAndCuratedAssetIDs;
- (id)rejectionCause;
- (id)transientMemoryStartDate;
- (void)setupTransientMemory;

@end

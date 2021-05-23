/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class MiroBlueprint, MiroPickList, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSSet, NSString, NSURL, PHAsset, PHAssetCollection, PHFetchResult;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MiroMemory : NSObject

{
    _Bool _hasBuildingPosterImageBegun;
    _Bool _storedPosterExists;
    _Bool _isPregenerating;
    MiroBlueprint *_blueprint;
    MiroBlueprint *_customBlueprint;
    NSURL *_localPersistentFile;
    long long _durationRange;
    double _customDuration;
    long long _savedMaxDurationRange;
    long long _schema;
    NSDate *_viewedDate;
    NSString *_localizedTitle;
    NSString *_localizedSubTitle;
    NSString *_keyAssetID;
    PHAsset *_keyAsset;
    PHAssetCollection *_assetCollection;
    NSArray *_posters;
    NSArray *_requestedKeywords;
    NSString *_requestedMoodID;
    NSDictionary *_requestedMusicGenreDistribution;
    NSString *_keywordedSongID;
    NSString *_initalKeyAssetIdentifier;
    NSSet *_manuallyAddedAssetIDs;
    NSSet *_manuallyRemovedAssetIDs;
    NSDictionary *_freezeRanges;
    NSSet *_suggestions;
    NSObject<OS_dispatch_queue> *_saveQueue;
    NSArray *_autoPickedAssetIDs;
    NSDictionary *_assetsRanges;
    MiroPickList *_pickList;
    long long _pickedItemCount;
    double _savedDuration;
    double _maximumPossibleMemoryDuration;
    double _duration;
    NSMutableDictionary *_blueprints;
    NSDictionary *_loadedFreezeRanges;
    NSArray *_featuredPeople;
    long long _allAssetCount;
    struct Buckets _buckets;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *saveQueue;
@property (retain) NSString *keyAssetID;
@property (retain, nonatomic) NSArray *autoPickedAssetIDs;
@property (retain, nonatomic) NSDictionary *assetsRanges;
@property (retain, nonatomic) MiroPickList *pickList;
@property (nonatomic) long long pickedItemCount;
@property (nonatomic) double savedDuration;
@property (nonatomic) double maximumPossibleMemoryDuration;
@property (nonatomic) struct Buckets buckets;
@property (nonatomic) double duration;
@property (retain, nonatomic) MiroBlueprint *customBlueprint;
@property (retain, nonatomic) NSMutableDictionary *blueprints;
@property (retain, nonatomic) NSDictionary *loadedFreezeRanges;
@property (retain, nonatomic) NSArray *featuredPeople;
@property (retain, nonatomic) NSURL *localPersistentFile;
@property (nonatomic) long long allAssetCount;
@property (nonatomic) long long schema;
@property (retain, nonatomic) NSDate *viewedDate;
@property (retain) NSString *localizedTitle;
@property (retain) NSString *localizedSubTitle;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *displaySubtitle;
@property (nonatomic) double customDuration;
@property (nonatomic) long long durationRange;
@property (nonatomic, readonly) long long maxDurationRange;
@property (retain, nonatomic) PHAsset *keyAsset;
@property (retain, nonatomic) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) double minimumPossibleMemoryDuration;
@property (retain, nonatomic) MiroBlueprint *blueprint;
@property (nonatomic) _Bool hasBuildingPosterImageBegun;
@property (nonatomic) _Bool storedPosterExists;
@property (retain, nonatomic) NSArray *posters;
@property (nonatomic) _Bool isPregenerating;
@property (nonatomic, readonly) _Bool needsTitleCard;
@property (retain, nonatomic) NSArray *requestedKeywords;
@property (retain, nonatomic) NSString *requestedMoodID;
@property (retain, nonatomic) NSDictionary *requestedMusicGenreDistribution;
@property (retain, nonatomic) NSString *keywordedSongID;
@property (retain, nonatomic) NSString *initalKeyAssetIdentifier;
@property (retain, nonatomic) NSSet *manuallyAddedAssetIDs;
@property (retain, nonatomic) NSSet *manuallyRemovedAssetIDs;
@property (retain, nonatomic) NSDictionary *freezeRanges;
@property (retain, nonatomic) NSSet *suggestions;
@property (nonatomic, readonly) PHFetchResult *allAssets;
@property (nonatomic, readonly) NSArray *moodIDs;
@property (retain, nonatomic) NSString *moodID;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)_displayableUuidWithUuid:(id)arg1;
+ (id)_saveURL;
+ (id)memoryWithPHAssetCollection:(id)arg1;
+ (id)memoryWithPHAssetCollection:(id)arg1 keyAsset:(id)arg2;
+ (id)_miroMoodIDForPHMemoryMood:(unsigned long long)arg1;
+ (id)_assetCollectionUniqueLocalIdentifier:(id)arg1;
+ (id)fileURLWithUuid:(id)arg1;
+ (id)grabTestKeywords;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)dataRepresentation;
- (_Bool)isPending;
- (_Bool)isPersistable;
- (void)persist;
- (void)_saveMetadata;
- (_Bool)wasManuallyAdded:(id)arg1;
- (_Bool)wasManuallyRemoved:(id)arg1;
- (id)pickedLocallyAvailableScenes;
- (void)clearFreezeDataForPregenerate;
- (id)pickedAssets;
- (void)persistWithoutFreeze;
- (id)allAssetsAsArray;
- (void)unPersist;
- (_Bool)memoryFeaturesPeople;
- (id)allAssetsIncludingAllMomentsAssets:(_Bool)arg1;
- (id)currentVideoFreezeRangeForAssetID:(id)arg1 index:(int)arg2;
- (void)_persistentRangesChanged:(id)arg1;
- (void)_initAllAssetMetadata;
- (id)freezeRangesToEncode;
- (void)_writeMetadata:(id)arg1;
- (void)_deleteMetadata;
- (void)setRanges:(id)arg1 replaceType:(unsigned long long)arg2 forAssetID:(id)arg3;
- (id)rangesWithType:(unsigned long long)arg1 forAssetID:(id)arg2;
- (void)addSuggestionForAssetID:(id)arg1 freezeInfo:(id)arg2 assets:(id)arg3;
- (id)blueprintForMoodID:(id)arg1;
- (id)_newBlueprintWithMoodID:(id)arg1;
- (void)adornIrisUsableToAssets:(id)arg1;
- (void)_updateAddedRemovedLists;
- (void)invalidateCustomDuration;
- (void)invalidateDuration;
- (long long)rawDurationRange;
- (void)manuallyModify:(id)arg1 changeInSegmentCount:(long long)arg2;
- (void)manuallyAdd:(id)arg1 remove:(id)arg2;
- (void)reportCollectionTypeForAggD:(_Bool)arg1;
- (_Bool)memoryTypeDisablesCropping;
- (_Bool)assetHasFaces:(id)arg1;
- (id)featuredPersonsInMemoryAsFaceRangesInAsset:(id)arg1;
- (id)trimRangesForAsset:(id)arg1;
- (_Bool)memoryFeaturesPersonInAsset:(id)arg1;
- (id)memoryClassificationKeys;
- (double)titleCardDuration;
- (_Bool)memoryClassificationBased;

@end

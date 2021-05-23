/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class CLLocation, NSArray, NSDate, NSDictionary, NSMutableSet, NSSet, NSString, PGMemoryDebug, PHAsset, PHAssetCollection;

@interface PGMemory : NSObject

{
    NSDate *_creationDate;
    PHAssetCollection *_assetCollection;
    PHAssetCollection *_curatedAssetCollection;
    PHAssetCollection *_extendedCuratedAssetCollection;
    PHAsset *_curatedKeyAsset;
    NSDate *_localStartDate;
    NSDate *_localEndDate;
    NSDate *_universalStartDate;
    NSDate *_universalEndDate;
    NSString *_title;
    NSString *_subtitle;
    long long _titleCategory;
    double _score;
    long long _sourceType;
    unsigned long long _duration;
    unsigned long long _category;
    unsigned long long _subcategory;
    unsigned long long _originalSubcategory;
    unsigned long long _matchedTypes;
    NSDate *_matchedLocalDate;
    CLLocation *_matchedLocation;
    NSSet *_matchedPeople;
    NSString *_matchedEventName;
    NSSet *_features;
    NSMutableSet *_persistedFeatures;
    unsigned long long _aggregatedVersions;
    NSString *_meUUID;
    PGMemoryDebug *_debug;
    long long _notificationQuality;
    NSSet *_momentIDs;
    NSDictionary *_numberOfAssetsByMomentIDs;
    NSArray *_blacklistableFeatures;
    NSString *_rejectionCause;
    NSDictionary *_musicGenreDistribution;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) PHAssetCollection *curatedAssetCollection;
@property (retain, nonatomic) PHAssetCollection *extendedCuratedAssetCollection;
@property (retain, nonatomic) PHAsset *curatedKeyAsset;
@property (retain, nonatomic) NSDate *localStartDate;
@property (retain, nonatomic) NSDate *localEndDate;
@property (retain, nonatomic) NSDate *universalStartDate;
@property (retain, nonatomic) NSDate *universalEndDate;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) double score;
@property (nonatomic) long long sourceType;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned long long category;
@property (nonatomic) unsigned long long subcategory;
@property (nonatomic) unsigned long long originalSubcategory;
@property (nonatomic) unsigned long long matchedTypes;
@property (retain, nonatomic) NSDate *matchedLocalDate;
@property (retain, nonatomic) CLLocation *matchedLocation;
@property (retain, nonatomic) NSSet *matchedPeople;
@property (retain, nonatomic) NSString *matchedEventName;
@property (retain, nonatomic) NSMutableSet *persistedFeatures;
@property (nonatomic) unsigned short graphSchemaVersion;
@property (nonatomic) unsigned short curationAlgorithmsVersion;
@property (nonatomic) unsigned short relatedAlgorithmsVersion;
@property (nonatomic) unsigned short memoriesAlgorithmsVersion;
@property (retain, nonatomic) NSString *meUUID;
@property (retain, nonatomic) NSDictionary *numberOfAssetsByMomentIDs;
@property (retain, nonatomic) NSArray *blacklistableFeatures;
@property (nonatomic) NSString *rejectionCause;
@property (nonatomic) long long titleCategory;
@property (nonatomic, readonly) unsigned long long aggregatedVersions;
@property (retain, nonatomic) NSSet *momentIDs;
@property (retain, nonatomic) PGMemoryDebug *debug;
@property (nonatomic) long long notificationQuality;
@property (copy, nonatomic) NSDictionary *musicGenreDistribution;
@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (retain, nonatomic) NSSet *features;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *meaningLabels;
@property (nonatomic, readonly) NSArray *moodKeywords;
@property (nonatomic, readonly) unsigned long long suggestedMood;

+ (id)stringForSourceType:(long long)arg1;
+ (id)stellarMemoryCriteria;
+ (id)greatMemoryCriteria;
+ (id)otherMemoryCriteria;
+ (id)mustSeeMemoryCriteria;

- (id)initWithAssetCollection:(id)arg1;
- (_Bool)isMustSee;
- (_Bool)isStellar;
- (_Bool)isGreat;
- (double)phMemoryScore;
- (double)_scoreForMemoryCriteria:(id)arg1;
- (id)_localIdentifiersInAssetCollection:(id)arg1;
- (void)addPersistedFeature:(id)arg1;

@end

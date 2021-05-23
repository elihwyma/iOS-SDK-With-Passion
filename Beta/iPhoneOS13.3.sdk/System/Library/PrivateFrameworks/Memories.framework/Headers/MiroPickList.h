/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface MiroPickList : NSObject

{
    NSArray *_sourceAssets;
    _Bool _prioritizeCuratedSetAssets;
    _Bool _skipDistanceCalculation;
    _Bool _penalizeNonLocalAssets;
    _Bool _calculatingPickOrder;
    NSSet *_requiredAssetIDs;
    NSSet *_disallowedAssetIDs;
    NSSet *_photosCuratedAssetIDs;
    NSDictionary *_freezeRanges;
    NSDictionary *_specialInfo;
    NSArray *_sourceOrder;
    NSArray *_pickOrder;
    NSArray *_splitOrder;
    NSArray *_scoreOrder;
    NSArray *_dateOrder;
    NSArray *_adjustedPickOrder;
    NSArray *_frozenSourceAssets;
    NSArray *_frozenSourceOrder;
    NSArray *_frozenAdjustedPickOrder;
}

@property (retain, nonatomic) NSArray *sourceAssets;
@property (retain, nonatomic) NSArray *sourceOrder;
@property (retain, nonatomic) NSArray *pickOrder;
@property (retain, nonatomic) NSArray *splitOrder;
@property (retain, nonatomic) NSArray *scoreOrder;
@property (retain, nonatomic) NSArray *dateOrder;
@property (retain, nonatomic) NSArray *adjustedPickOrder;
@property (retain, nonatomic) NSArray *frozenSourceAssets;
@property (retain, nonatomic) NSArray *frozenSourceOrder;
@property (retain, nonatomic) NSArray *frozenAdjustedPickOrder;
@property (nonatomic) _Bool calculatingPickOrder;
@property (retain, nonatomic) NSSet *requiredAssetIDs;
@property (retain, nonatomic) NSSet *disallowedAssetIDs;
@property (retain, nonatomic) NSSet *photosCuratedAssetIDs;
@property (retain, nonatomic) NSDictionary *freezeRanges;
@property (nonatomic) _Bool prioritizeCuratedSetAssets;
@property (copy, nonatomic) NSDictionary *specialInfo;
@property (nonatomic) _Bool skipDistanceCalculation;
@property (nonatomic) _Bool penalizeNonLocalAssets;
@property (nonatomic, readonly) int freezeState;
@property (nonatomic, readonly) _Bool isCompelling;
@property (nonatomic, readonly) int idealCount;
@property (nonatomic, readonly) int countAtOrAboveBadT;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_reset;
- (id)people;
- (id)photoLibrary;
- (id)initWithAssets:(id)arg1;
- (id)classifications;
- (id)splitDistancesForAssetID:(id)arg1;
- (int)countAtTValue:(double)arg1;
- (id)scenesUpToCount:(long long)arg1 localOnly:(_Bool)arg2;
- (_Bool)calculateFreezeFromFrozenSourceAssets;
- (id)sourceOrderFromSourceAssets;
- (id)pickOrderFromSourceOrder;
- (void)calculatePickListFromVPFrameworkResults;
- (id)expandVideoAssetsAndConvertToScenes:(id)arg1;
- (id)mediaAnalyzer;
- (id)sourceOrderFromSourceAssetsViaNewAPI;
- (id)sourceOrderFromSourceAssetsViaOldAPI;
- (id)sourceOrderFromSourceAssetsViaNewAPIStoppingAtCompelling:(_Bool *)arg1;
- (id)rangesForAssets:(id)arg1;
- (void)updateAssetsWithSpecialInfo;
- (id)highestScoringItemFromIndex:(long long)arg1 lookingRight:(_Bool)arg2;
- (id)highestScoringItemToTheRightFromIndex:(long long)arg1;
- (id)highestScoringItemToTheLeftFromIndex:(long long)arg1;
- (id)_computeAdjustedPickOrder;
- (void)_assignTrimRangesIntelligentlyToPickInfos:(id)arg1;
- (double)_fractionOfPickInfo:(id)arg1 coveredByRanges:(id)arg2;
- (id)_pickInfosForAssetID:(id)arg1;
- (void)_assignTrimRangesChronologicallyToPickInfos:(id)arg1;
- (void)calculateFullPickList;
- (id)assetsUpToSceneCount:(long long)arg1;

@end

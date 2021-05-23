/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

@class FCKeyValueStore, FCPersonalizationTreatment, NSString;

@protocol FCReadonlyPersonalizationAggregateStore, FCTodayPrivateData, FRRingBufferContainer;

@interface NTFeedPersonalizer : NSObject

{
    FCPersonalizationTreatment *_personalizationTreatment;
    id <FCReadonlyPersonalizationAggregateStore> _readonlyPersonalizationAggregateStore;
    double _articleDiversificationSimilarityExpectationStart;
    double _articleDiversificationSimilarityExpectationEnd;
    double _articleDiversificationUniquePublisherExpectationSlope;
    double _articleDiversificationUniquePublisherExpectationYIntercept;
    id <FCTodayPrivateData> _todayData;
    id <FRRingBufferContainer> _globalScoresRingBufferContainer;
    FCKeyValueStore *_globalScoreRangesValueStore;
}

@property (copy, nonatomic) FCPersonalizationTreatment *personalizationTreatment;
@property (retain, nonatomic) id <FCReadonlyPersonalizationAggregateStore> readonlyPersonalizationAggregateStore;
@property (nonatomic) double articleDiversificationSimilarityExpectationStart;
@property (nonatomic) double articleDiversificationSimilarityExpectationEnd;
@property (nonatomic) double articleDiversificationUniquePublisherExpectationSlope;
@property (nonatomic) double articleDiversificationUniquePublisherExpectationYIntercept;
@property (copy, nonatomic) id <FCTodayPrivateData> todayData;
@property (retain, nonatomic) id <FRRingBufferContainer> globalScoresRingBufferContainer;
@property (retain, nonatomic) FCKeyValueStore *globalScoreRangesValueStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)rankTagIDsDescending:(id)arg1;
- (id)scoresForTagIDs:(id)arg1;
- (unsigned long long)whitelistLevelForTagID:(id)arg1;
- (void)prepareForUseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (double)decayedPublisherDiversificationPenalty;
- (id)scoreProfilesForItems:(id)arg1 configurationSet:(long long)arg2;
- (id)limitItemsByMinimumItemQuality:(id)arg1;
- (id)sortItems:(id)arg1 options:(long long)arg2 configurationSet:(long long)arg3;
- (id)sortItems:(id)arg1 options:(long long)arg2;
- (id)limitItemsByFlowRate:(id)arg1 timeInterval:(double)arg2 publisherCount:(unsigned long long)arg3;
- (id)diversifyItems:(id)arg1 limit:(unsigned long long)arg2 preselectedItems:(id)arg3;
- (id)diversifyItems:(id)arg1 limit:(unsigned long long)arg2;
- (id)sortItems:(id)arg1 configurationSet:(long long)arg2;
- (id)initWithPersonalizationTreatment:(id)arg1 readonlyPersonalizationAggregateStore:(id)arg2 articleDiversificationSimilarityExpectationStart:(double)arg3 articleDiversificationSimilarityExpectationEnd:(double)arg4 articleDiversificationUniquePublisherExpectationSlope:(double)arg5 articleDiversificationUniquePublisherExpectationYIntercept:(double)arg6 todayData:(id)arg7;
- (id)_userProfile;
- (id)sortItems:(id)arg1;
- (void)prepareFavoritesWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

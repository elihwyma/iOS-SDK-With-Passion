/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <Foundation/NSObject.h>

@class NFLFeedSettings, NFLRankedLayoutSource, NSOperationQueue, NSString;

@protocol NFLFeedLayoutSearchConfiguration;

@interface NFLHeadlineCardDealer : NSObject

{
    id <NFLFeedLayoutSearchConfiguration> _feedLayoutSearchConfiguration;
    NFLFeedSettings *_feedSettings;
    NFLRankedLayoutSource *_rankedLayoutSource;
    NSOperationQueue *_tilingOperationQueue;
    long long _qualityOfService;
    double _tileProminenceScoreBalanceValue;
}

@property (copy, nonatomic) NFLFeedSettings *feedSettings;
@property (copy, nonatomic) id <NFLFeedLayoutSearchConfiguration> feedLayoutSearchConfiguration;
@property (retain, nonatomic) NFLRankedLayoutSource *rankedLayoutSource;
@property (retain, nonatomic) NSOperationQueue *tilingOperationQueue;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) double tileProminenceScoreBalanceValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (Class)rankedLayoutSource:(id)arg1 rankedLayoutGenerationOperationClassForRequest:(id)arg2;
- (id)pipelayer:(id)arg1 descriptionForSegmentType:(unsigned long long)arg2;
- (CDUnknownBlockType)_segmentTypeDescriptionProvider;
- (id)batchesFromPipeSegments:(id)arg1 tileInfos:(id)arg2;
- (unsigned long long)pipelayer:(id)arg1 numberOfUnitsUsedBySegmentType:(unsigned long long)arg2;
- (double)pipelayer:(id)arg1 transitionRankFromSegmentType:(unsigned long long)arg2 toSegmentType:(unsigned long long)arg3;
- (double)pipelayer:(id)arg1 secondaryScoreOfPath:(id)arg2 units:(id)arg3;
- (id)pipelayer:(id)arg1 nextSegmentTypeCandidatesForSegmentType:(unsigned long long)arg2;
- (_Bool)pipelayer:(id)arg1 maySegmentType:(unsigned long long)arg2 usePipeUnits:(id)arg3;
- (void)pipelayer:(id)arg1 segmentForUnits:(id)arg2 segmentType:(unsigned long long)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithFeedSettings:(id)arg1 feedLayoutSearchConfiguration:(id)arg2 tileProminenceScoreBalanceValue:(double)arg3 qualityOfService:(long long)arg4;
- (id)batchesForTileInfos:(id)arg1 previousBatchContext:(id)arg2 nextBatchContext:(id)arg3;
- (void)_validateFeedLayout;

@end

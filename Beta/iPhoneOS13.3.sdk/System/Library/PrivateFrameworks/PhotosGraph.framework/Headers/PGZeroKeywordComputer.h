/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class PGGraph, PGSearchComputationCache;

@interface PGZeroKeywordComputer : NSObject

{
    PGGraph *_graph;
    PGSearchComputationCache *_searchComputationCache;
}

@property (readonly) PGGraph *graph;
@property (nonatomic, readonly) PGSearchComputationCache *searchComputationCache;

+ (id)zeroKeywordLog;

- (id)_zeroKeywordDisplayMeaningNodeForMeaningNode:(id)arg1;
- (id)contextualPersonZeroKeywordsWithOptions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)contextualSocialGroupZeroKeywordsWithOptions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)contextualLocationNodesWithOptions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)contextualHolidayZeroKeywordsWithOptions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)contextualSeasonZeroKeywordsWithOptions:(id)arg1;
- (id)contextualSceneZeroKeywordsWithOptions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)contextualMeaningAndTripZeroKeywordsWithOptions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)contextualDateZeroKeywordsWithOptions:(id)arg1;
- (id)_locationBasedContextualLocationNodeWithLocation:(id)arg1 date:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)_timeBasedContextualLocationNodeWithDate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)initWithGraph:(id)arg1 searchComputationCache:(id)arg2;
- (id)zeroKeywordsWithOptions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)_zeroKeywordsWithOptions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)peopleZeroKeywordsWithOptions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)socialGroupKeywordsWithOptions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (_Bool)_conflictBetweenLocationOrAreaNode:(id)arg1 andOtherLocationOrAreaNodes:(id)arg2;
- (id)locationZeroKeywordsWithOptions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)eventZeroKeywordsWithOptions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)sceneZeroKeywordsWithOptions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)tripZeroKeyword;
- (id)tripRankedKeyword;
- (id)_tripZeroKeywordWithScore:(out double *)arg1;
- (id)meaningNodeZeroKeywordForDisplayMeaningNode:(id)arg1 collectionUUIDsToAvoid:(id)arg2;
- (id)densestCloseLocationNodeForNode:(id)arg1 locationMask:(unsigned long long)arg2;

@end

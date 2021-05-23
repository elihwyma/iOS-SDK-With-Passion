/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface PGSearchKeywordComputerKeywordAggregator : NSObject

{
    NSMutableDictionary *_keywordsByCategoryMaskByDateIntervalByMomentUUID;
}

@property (readonly) NSDictionary *aggregatedKeywords;

- (id)init;
- (void)aggregateKeywordsByCategoryMask:(id)arg1 forMomentUUID:(id)arg2 fromUniversalStartDate:(id)arg3 toEndDate:(id)arg4;
- (void)aggregateKeywordsByCategoryMask:(id)arg1 forMomentNode:(id)arg2;
- (void)aggregateKeywordArraysByCategoryMask:(id)arg1 forMomentUUID:(id)arg2 fromUniversalStartDate:(id)arg3 toEndDate:(id)arg4;
- (void)aggregateKeywordsByCategoryMask:(id)arg1 forMomentUUID:(id)arg2 duringDateInterval:(id)arg3;

@end

/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <NSObject.h>

@class ATXHeuristicResultCache, NSArray, NSSet, NSString;

@interface ATXHeuristicResultCacheEntry : NSObject

{
    NSString *_heuristicName;
    ATXHeuristicResultCache *_cache;
    NSArray *_actions;
    NSSet *_expirers;
}

- (void)dealloc;
- (id)initWithHeuristic:(id)arg1 cache:(id)arg2;
- (void)setActions:(id)arg1 expirers:(id)arg2;

@end

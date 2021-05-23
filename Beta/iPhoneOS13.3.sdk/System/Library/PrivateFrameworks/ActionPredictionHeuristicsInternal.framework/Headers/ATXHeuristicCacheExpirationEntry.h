/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <NSObject.h>

@class ATXHeuristicResultCache, NSString;

@interface ATXHeuristicCacheExpirationEntry : NSObject

{
    NSString *_heuristicName;
    ATXHeuristicResultCache *_cache;
}

@property (retain, nonatomic) NSString *heuristicName;
@property (weak, nonatomic) ATXHeuristicResultCache *cache;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithHeuristic:(id)arg1 cache:(id)arg2;

@end

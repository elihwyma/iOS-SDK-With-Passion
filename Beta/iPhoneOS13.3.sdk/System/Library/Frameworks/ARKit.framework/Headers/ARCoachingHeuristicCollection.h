/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARCoachingHeuristic.h>

@class NSMutableArray;

@interface ARCoachingHeuristicCollection : ARCoachingHeuristic

{
    NSMutableArray *_heuristics;
}

- (id)init;
- (void)clear;
- (long long)requirements;
- (void)addHeuristic:(id)arg1;
- (void)updateWithFrame:(id)arg1;

@end

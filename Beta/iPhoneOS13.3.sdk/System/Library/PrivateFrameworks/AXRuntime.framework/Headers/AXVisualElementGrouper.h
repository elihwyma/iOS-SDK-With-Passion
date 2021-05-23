/*
 Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

#import <AXRuntime/AXElementGrouper.h>

@interface AXVisualElementGrouper : AXElementGrouper

{
    double _maximumNeighbourDistance;
    double _maximumDistanceForAligningEdges;
}

@property (nonatomic) double maximumNeighbourDistance;
@property (nonatomic) double maximumDistanceForAligningEdges;

- (id)_groupablesForItems:(id)arg1;
- (id)initWithHeuristics:(long long)arg1;

@end

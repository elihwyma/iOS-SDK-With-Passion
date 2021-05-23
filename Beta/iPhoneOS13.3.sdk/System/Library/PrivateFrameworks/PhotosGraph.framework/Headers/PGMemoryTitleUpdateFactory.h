/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSSet, PGGraph, PHMemory;

@interface PGMemoryTitleUpdateFactory : NSObject

{
    PGGraph *_graph;
    PHMemory *_memory;
    NSSet *_momentNodes;
}

@property (retain, nonatomic) PGGraph *graph;
@property (retain, nonatomic) PHMemory *memory;
@property (retain, nonatomic) NSSet *momentNodes;

- (id)initWithMemory:(id)arg1 graph:(id)arg2;
- (id)titleGeneratorWithError:(id *)arg1;
- (id)_momentNodesFromMemory:(id)arg1;
- (id)_startMomentNodeFromMomentNodes:(id)arg1;
- (long long)_predominantYearForYearSummaryMemory;
- (id)_predominantNeighborNodeFromMomentNodes:(id)arg1 withLabel:(id)arg2 domain:(unsigned short)arg3;
- (id)_predominantNeighborNodeFromMomentNodes:(id)arg1 withLabel:(id)arg2 domain:(unsigned short)arg3 ignoredNodes:(id)arg4;
- (id)_personNodeForPersonMemory;
- (id)_areaNodeForAreaMemory;
- (id)_predominantSuperset;

@end

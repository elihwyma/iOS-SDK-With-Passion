/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/GKGraph.h>

@class NSArray, NSMutableArray;

@interface GKMeshGraph : GKGraph

{
    NSMutableArray *_sourceObstacles;
    struct GKCMeshGraph *_cMeshGraph;
    Class _nodeClass;
}

@property (nonatomic, readonly) NSArray *obstacles;
@property (nonatomic, readonly) float bufferRadius;
@property (nonatomic) unsigned long long triangulationMode;
@property (nonatomic, readonly) unsigned long long triangleCount;

+ (_Bool)supportsSecureCoding;
+ (id)graphWithBufferRadius:(float)arg1 minCoordinate:(Class)arg2 maxCoordinate:nodeClass: /* Error: Ran out of types for this method. */;
+ (id)graphWithBufferRadius:(float)arg1 minCoordinate:maxCoordinate: /* Error: Ran out of types for this method. */;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)triangulate;
- (id)initWithBufferRadius:(float)arg1 minCoordinate:(Class)arg2 maxCoordinate:nodeClass: /* Error: Ran out of types for this method. */;
- (Class)nodeClass;
- (struct GKCGraph *)makeCGraph;
- (struct GKCMeshGraph *)cMeshGraph;
- (void)setMakeNodesFromTriangleCenters:(_Bool)arg1;
- (_Bool)makeNodesFromTriangleCenters;
- (void)setMakeNodesFromTriangleVertices:(_Bool)arg1;
- (_Bool)makeNodesFromTriangleVertices;
- (void)setMakeNodesFromTriangleEdgeMidpoints:(_Bool)arg1;
- (_Bool)makeNodesFromTriangleEdgeMidpoints;
- (id)initWithBufferRadius:(float)arg1 minCoordinate:maxCoordinate: /* Error: Ran out of types for this method. */;
- (void)addObstacles:(id)arg1;
- (void)removeObstacles:(id)arg1;
- (void)connectNodeUsingObstacles:(id)arg1;
- (struct GKTriangle)triangleAtIndex:(unsigned long long)arg1;
- (Class)classForGenericArgumentAtIndex:(unsigned long long)arg1;

@end

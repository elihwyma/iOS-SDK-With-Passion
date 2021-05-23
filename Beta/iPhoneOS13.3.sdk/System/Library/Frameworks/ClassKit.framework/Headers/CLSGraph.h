/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <Foundation/NSObject.h>

@protocol CLSGraphVertex><NSObject;

@interface CLSGraph : NSObject

{
    struct NSMapTable *_verticesMap;
    struct NSMapTable *_inEdgesMap;
    struct NSMapTable *_outEdgesMap;
    unsigned long long _options;
}

@property (nonatomic, readonly) unsigned long long vertexCount;
@property (nonatomic, readonly) unsigned long long edgeCount;
@property (nonatomic, readonly) id <CLSGraphVertex><NSObject> anyVertex;

- (id)init;
- (void)enumerate:(CDUnknownBlockType)arg1;
- (void)reset;
- (void)addVertex:(id)arg1;
- (id)initWithMemoryOptions:(unsigned long long)arg1;
- (unsigned long long)_degreeOfVertex:(id)arg1 inEdgeMap:(struct NSMapTable *)arg2;
- (_Bool)containsVertexWithVertexID:(id)arg1;
- (void)_removeEdgeFromVertexWithID:(id)arg1 toVertexWithID:(id)arg2;
- (id)outNeighboursOfVertex:(id)arg1;
- (void)removeVertex:(id)arg1;
- (unsigned long long)inDegree:(id)arg1;
- (void)removeSubtreeStartingAtVertex:(id)arg1;
- (void)enumerateNeighboursOfVertex:(id)arg1 enumerationBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateVerticesInEdges:(struct NSHashTable *)arg1 skipingEdges:(struct NSHashTable *)arg2 enumerationBlock:(CDUnknownBlockType)arg3;
- (void)enumerateInNeighboursOfVertex:(id)arg1 enumerationBlock:(CDUnknownBlockType)arg2;
- (void)enumerateOutNeighboursOfVertex:(id)arg1 enumerationBlock:(CDUnknownBlockType)arg2;
- (void)traverseVerticesPassingTest:(CDUnknownBlockType)arg1 enumerationBlock:(CDUnknownBlockType)arg2;
- (void)_traverseStartingAtVertex:(id)arg1 previousVertex:(id)arg2 visitedVertices:(id)arg3 enumerationBlock:(CDUnknownBlockType)arg4;
- (unsigned long long)degree:(id)arg1;
- (unsigned long long)outDegree:(id)arg1;
- (id)vertexWithVertexID:(id)arg1;
- (_Bool)containsVertex:(id)arg1;
- (_Bool)hasEdgeFromVertex:(id)arg1 toVertex:(id)arg2;
- (void)addEdgeFromVertex:(id)arg1 toVertex:(id)arg2;
- (void)removeEdgeFromVertex:(id)arg1 toVertex:(id)arg2;
- (id)neighboursOfVertex:(id)arg1;
- (id)inNeighboursOfVertex:(id)arg1;
- (void)traverse:(CDUnknownBlockType)arg1;
- (void)traverseStartingAtVertex:(id)arg1 enumerationBlock:(CDUnknownBlockType)arg2;

@end

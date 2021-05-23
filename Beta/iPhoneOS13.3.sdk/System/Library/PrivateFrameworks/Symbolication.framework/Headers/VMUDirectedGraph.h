/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface VMUDirectedGraph : NSObject

{
    long long _graphCompatibilityVersion;
    long long _graphVersion;
    unsigned int _nodeCount;
    unsigned int _edgeCount;
    unsigned int _edgeCapacity;
    unsigned int _externalEdges;
    void *_deadNodes;
    unsigned int _nextNodeName;
    unsigned int _nextEdgeName;
    unsigned int *_nodeAdjIndex;
    struct _VMUDirectedGraphEdge *_edges;
    NSDictionary *_additionalProperties;
    unsigned int _indexedNodeSpace;
    unsigned int _indexedEdges;
    int _insideSearch;
    _Bool _inverted;
    _Bool _graphIs64bit;
}

@property (nonatomic) _Bool inverted;
@property (copy, nonatomic) NSDictionary *additionalProperties;
@property (nonatomic, readonly) unsigned int nodeCount;
@property (nonatomic, readonly) unsigned int edgeCount;
@property (nonatomic, readonly) unsigned int nodeNamespaceSize;
@property (nonatomic, readonly) unsigned int edgeNamespaceSize;
@property (nonatomic, readonly) _Bool graphIs64bit;
@property (nonatomic, readonly) unsigned int pointerSize;

+ (id)_archivedBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
+ (id)_archivedObject:(id)arg1 options:(unsigned long long)arg2;
+ (void *)_copyUnarchived:(id)arg1 length:(unsigned long long *)arg2 options:(unsigned long long)arg3;
+ (id)_unarchivedObject:(id)arg1 ofClass:(Class)arg2 options:(unsigned long long)arg3;
+ (id)directedGraphWithData:(id)arg1 error:(id *)arg2;
+ (void)encapsulateData:(id)arg1 to:(id)arg2 withSupplementalDataTag:(const char *)arg3 dataGeneratorBlock:(CDUnknownBlockType)arg4;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)enumerateNodesWithBlock:(CDUnknownBlockType)arg1;
- (unsigned int)enumerateEdgesWithBlock:(CDUnknownBlockType)arg1;
- (void)setGraphVersion:(long long)arg1;
- (id)initWithArchived:(id)arg1 version:(long long)arg2 options:(unsigned long long)arg3 diskLogs:(id)arg4;
- (void)archiveDictionaryRepresentation:(id)arg1 options:(unsigned long long)arg2;
- (void)_renameWithNodeMap:(unsigned int *)arg1 nodeNamespace:(unsigned int)arg2 edgeMap:(unsigned int *)arg3 edgeNamespace:(unsigned int)arg4;
- (void)_internalAccessRawEdgesWithBlock:(CDUnknownBlockType)arg1;
- (unsigned int)_internalEnumerateEdgesOfNode:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)initWithPlistRepresentation:(id)arg1 error:(id *)arg2;
- (id)decapsulateIPSheaderInData:(id)arg1 error:(id *)arg2;
- (id)decapsulateSupplementalData:(id)arg1 forTag:(const char *)arg2;
- (id)decapsulatePlistData:(id)arg1 error:(id *)arg2;
- (void)_reorderEdgesNaturally;
- (id)initWithNodes:(unsigned int)arg1;
- (void)_internalAddEdgeFromNode:(unsigned int)arg1 toNode:(unsigned int)arg2 withName:(unsigned int)arg3;
- (void)_faultDeadNodeMap;
- (void)_removeEdges:(CDUnknownBlockType)arg1;
- (unsigned int)parentGroupForNode:(unsigned int)arg1;
- (_Bool)_adjustAdjacencyMap;
- (void)_dfsCore:(unsigned int)arg1 colors:(char *)arg2 visitBlock:(CDUnknownBlockType)arg3 examineBlock:(CDUnknownBlockType)arg4;
- (void)_searchMainLoop:(unsigned int)arg1 action:(CDUnknownBlockType)arg2;
- (void)_bfsCore:(unsigned int)arg1 colors:(char *)arg2 visitBlock:(CDUnknownBlockType)arg3 examineBlock:(CDUnknownBlockType)arg4;
- (void)removeMarkedNodes:(void *)arg1;
- (void)_renormalize;
- (void)setGraphCompatibilityVersion:(long long)arg1;
- (id)initWithPlistRepresentation:(id)arg1;
- (id)plistRepresentationWithOptions:(unsigned long long)arg1;
- (unsigned int)addNode;
- (unsigned int)addEdgeFromNode:(unsigned int)arg1 toNode:(unsigned int)arg2;
- (void *)_deadNodeMap;
- (void)removeMarkedEdges:(void *)arg1;
- (_Bool)isNodePresent:(unsigned int)arg1;
- (unsigned int)addGroupNodeForNodes:(const unsigned int *)arg1 count:(unsigned int)arg2;
- (void)ungroupNode:(unsigned int)arg1;
- (unsigned int)enumerateMembersOfGroupNode:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (unsigned int)enumerateEdgesOfNode:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)withNodeMarkingMap:(CDUnknownBlockType)arg1;
- (void)withEdgeMarkingMap:(CDUnknownBlockType)arg1;
- (void)depthFirstSearch:(unsigned int)arg1 nodeVisitBlock:(CDUnknownBlockType)arg2 edgeVisitBlock:(CDUnknownBlockType)arg3;
- (void)breadthFirstSearch:(unsigned int)arg1 nodeVisitBlock:(CDUnknownBlockType)arg2 edgeVisitBlock:(CDUnknownBlockType)arg3;
- (void)_dumpAdjacencyList;
- (void)invertEdges;
- (id)subgraphWithMarkedNodes:(void *)arg1;
- (id)renormalizedGraph;
- (id)invertedGraph;

@end

/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Symbolication/VMUDirectedGraph.h>

@class VMUClassInfoMap;

@interface VMUObjectGraph : VMUDirectedGraph

{
    struct _VMUObjectGraphEdge *_referenceTable;
    unsigned int _referenceTableCapacity;
    struct _VMUObjectGraphEdgeLarge *_referenceTableLarge;
    unsigned int _referenceTableLargeCount;
    unsigned int _referenceTableLargeCapacity;
    struct _VMUBlockNode *_internalizedNodes;
    unsigned int _internalizedCount;
    id *_classInfos;
    VMUClassInfoMap *_knownClassInfos;
    unsigned int _classInfosCount;
    CDUnknownBlockType _nodeProvider;
    VMUObjectGraph *_referenceGraph;
    unsigned int _referenceGraphNodeNamespaceSize;
    unsigned int _referenceGraphEdgeNamespaceSize;
    int _referencingCount;
}

@property (retain, nonatomic) VMUClassInfoMap *indexedClassInfos;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1;
- (unsigned int)nodeForAddress:(unsigned long long)arg1;
- (unsigned int)addEdgeFromNode:(unsigned int)arg1 sourceOffset:(unsigned long long)arg2 withScanType:(unsigned int)arg3 toNode:(unsigned int)arg4 destinationOffset:(unsigned long long)arg5;
- (CDStruct_599faf0f)nodeDetails:(unsigned int)arg1;
- (unsigned int)enumerateMarkedObjects:(void *)arg1 withBlock:(CDUnknownBlockType)arg2;
- (unsigned int)enumerateReferencesWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithNodesNoCopy:(struct _VMUBlockNode *)arg1 nodeCount:(unsigned int)arg2;
- (id)initWithArchived:(id)arg1 version:(long long)arg2 options:(unsigned long long)arg3 diskLogs:(id)arg4;
- (void)archiveDictionaryRepresentation:(id)arg1 options:(unsigned long long)arg2;
- (void)internalizeNodes;
- (unsigned int)enumerateReferencesOfNode:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_renameWithNodeMap:(unsigned int *)arg1 nodeNamespace:(unsigned int)arg2 edgeMap:(unsigned int *)arg3 edgeNamespace:(unsigned int)arg4;
- (void)_refineTypesWithOverlay:(id)arg1;
- (CDStruct_8b65991f)_rawReferenceInfoWithName:(unsigned int)arg1;
- (unsigned int)scanTypeOfReferenceWithName:(unsigned int)arg1;
- (unsigned int)addEdgeFromNode:(unsigned int)arg1 toNode:(unsigned int)arg2;
- (void)_modifyDerivativeGraphCount:(int)arg1;
- (void *)_compareWithGraph:(id)arg1 andMarkOnMatch:(_Bool)arg2;
- (id)initWithNodeCount:(unsigned int)arg1 nodeProvider:(CDUnknownBlockType)arg2;
- (unsigned int)enumerateObjectsOfGroupNode:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (unsigned int)nodeReferencedFromSourceNode:(unsigned int)arg1 byIvarWithName:(id)arg2;
- (unsigned int)enumerateObjectsContainedInCollection:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (CDStruct_8b65991f)referenceInfoWithName:(unsigned int)arg1;
- (void *)createMapForMinusGraph:(id)arg1;
- (void *)createMapForIntersectGraph:(id)arg1;
- (void)stronglyConnectedComponentSearch:(unsigned int)arg1 withRecorder:(CDUnknownBlockType)arg2;
- (id)subgraphWithShortestPathsFromNode:(unsigned int)arg1 toNodes:(void *)arg2;
- (id)subgraphWithUniquePathsFromNode:(unsigned int)arg1 toNodes:(void *)arg2;

@end

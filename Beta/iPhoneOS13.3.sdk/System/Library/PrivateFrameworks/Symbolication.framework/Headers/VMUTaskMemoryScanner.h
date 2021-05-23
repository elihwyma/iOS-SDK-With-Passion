/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, VMUClassInfoMap, VMUDebugTimer, VMUObjectIdentifier, VMUProcessObjectGraph, VMURangeArray, VMUTaskMemoryCache, VMUVMRegionIdentifier;

@interface VMUTaskMemoryScanner : NSObject

{
    unsigned int _task;
    int _pid;
    unsigned long long _suspendTime;
    unsigned int _suspensionToken;
    VMUTaskMemoryCache *_memoryCache;
    VMUObjectIdentifier *_objectIdentifier;
    VMUVMRegionIdentifier *_regionIdentifier;
    struct _VMUBlockNode *_blocks;
    unsigned int _blocksCount;
    unsigned int _blocksSize;
    struct _VMURegionNode *_regions;
    unsigned int _regionsCount;
    struct _VMURegionMap *_regionMap;
    VMURangeArray *_stackRanges;
    NSMutableArray *_zoneNames;
    struct _VMURange _dataSegmentsRangeInSharedCache;
    struct _VMURange _dataSegmentsRangeOutsideSharedCache;
    VMURangeArray *_dataSegmentsRangeArrayOutsideSharedCache;
    struct _VMUZoneNode *_zones;
    unsigned int _zonesCount;
    unsigned int _zonesSize;
    struct _VMUThreadNode *_threads;
    unsigned int _threadsCount;
    struct _VMUInstanceValues *_instanceValues;
    unsigned int _instanceValuesCount;
    unsigned int _instanceValuesSize;
    id *_classInfos;
    unsigned int _classInfosCount;
    VMUClassInfoMap *_classInfoIndexer;
    struct _VMUScanLocationCache **_scanCaches;
    unsigned int _autoreleasePoolBoundaryNode;
    unsigned int _recordAutoreleasePoolBoundaries;
    NSMutableArray *_sortedMethodCacheBucketPtrAddresses;
    unsigned long long _sortedMethodCacheBucketPtrAddressesIndex;
    unsigned long long _nextMethodCacheBucketPtrAddress;
    _Bool _exactScanningEnabled;
    unsigned long long _maxInteriorOffset;
    unsigned int _scanningMask;
    VMUDebugTimer *_debugTimer;
    _Bool _showRawClassNames;
    NSString *_processName;
    NSString *_processDescriptionString;
    NSString *_executablePath;
    NSString *_binaryImagesDescription;
    unsigned long long _physicalFootprint;
    unsigned long long _physicalFootprintPeak;
    unsigned long long _regionDescriptionOptions;
    CDUnknownBlockType _referenceLogger;
    CDUnknownBlockType _nodeLogger;
    _Bool _abandonedMarkingEnabled;
    VMUProcessObjectGraph *_processObjectGraph;
    void *_userMarkedAbandoned;
    NSMutableDictionary *_variantCachesByIsaIndex;
    unsigned long long _cfPasteboardReservedBase;
}

@property (nonatomic, readonly) VMUTaskMemoryCache *memoryCache;
@property (nonatomic, readonly) VMUObjectIdentifier *objectIdentifier;
@property (nonatomic) _Bool exactScanningEnabled;
@property (nonatomic) _Bool abandonedMarkingEnabled;
@property (nonatomic) unsigned long long maxInteriorOffset;
@property (nonatomic) unsigned int scanningMask;
@property (retain, nonatomic) VMUDebugTimer *debugTimer;
@property (nonatomic) _Bool showRawClassNames;
@property (nonatomic, readonly) unsigned int nodeCount;
@property (nonatomic, readonly) unsigned int zoneCount;
@property (nonatomic, readonly) unsigned int mallocNodeCount;
@property (nonatomic, readonly) VMUClassInfoMap *realizedClasses;
@property (nonatomic, readonly) unsigned int task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) _Bool is64bit;
@property (nonatomic, readonly) unsigned int vmPageSize;
@property (nonatomic, readonly) unsigned int regionCount;
@property (nonatomic, readonly) unsigned int nodeNamespaceSize;
@property (nonatomic, readonly) NSString *processName;
@property (nonatomic, readonly) NSString *processDescriptionString;
@property (nonatomic, readonly) NSString *executablePath;
@property (nonatomic, readonly) NSString *binaryImagesDescription;
@property (nonatomic, readonly) unsigned long long physicalFootprint;
@property (nonatomic, readonly) unsigned long long physicalFootprintPeak;

+ (void)initialize;
+ (id)nodeDescription:(CDStruct_599faf0f)arg1 withNodeOffset:(unsigned long long)arg2 sortedVMRegions:(id)arg3;
+ (id)referenceDescription:(CDStruct_8b65991f)arg1 withSourceNode:(CDStruct_599faf0f)arg2 destinationNode:(CDStruct_599faf0f)arg3 sortedVMRegions:(id)arg4 symbolicator:(struct _CSTypeRef)arg5 alignmentSpacing:(unsigned int)arg6;

- (void)dealloc;
- (_Bool)_suspend;
- (unsigned int)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithTask:(unsigned int)arg1;
- (unsigned int)enumerateNodesWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithTask:(unsigned int)arg1 options:(unsigned long long)arg2;
- (void)refineTypesWithOverlay:(id)arg1;
- (id)_initWithTask:(unsigned int)arg1 options:(unsigned long long)arg2;
- (void)setNodeScanningLogger:(CDUnknownBlockType)arg1;
- (void)setReferenceScanningLogger:(CDUnknownBlockType)arg1;
- (void)detachFromTask;
- (void)_destroyLinearClassInfos;
- (void)_withMemoryReaderBlock:(CDUnknownBlockType)arg1;
- (void)_addThreadNodesFromTask;
- (void)_addSpecialNodesFromTask;
- (void)_callRemoteMallocEnumerators:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)_sortAndClassifyBlocks;
- (void)_sortBlocks;
- (void)_buildRegionPageBlockMaps;
- (void)_fixupBlockIsas;
- (void)_findMarkedAbandonedBlocks;
- (unsigned int)nodeForAddress:(unsigned long long)arg1;
- (void)_withOrderedNodeMapper:(CDUnknownBlockType)arg1;
- (void)_identifyNonObjectsPointedToByTypedIvars;
- (void)_identifyObjCClassStructureBlocks;
- (void)_updateLinearClassInfos;
- (unsigned long long)checkSourceAddress:(unsigned long long)arg1 toMaskDestinationAddress:(unsigned long long)arg2;
- (void)_orderedScanWithScanner:(CDUnknownBlockType)arg1 recorder:(CDUnknownBlockType)arg2 keepMapped:(_Bool)arg3 actions:(CDUnknownBlockType)arg4;
- (void)_withScanningContext:(CDUnknownBlockType)arg1;
- (unsigned int)_removeFalsePositiveLeakedVMregionsFromNodes:(unsigned int *)arg1 nodeCount:(unsigned int)arg2 recorder:(CDUnknownBlockType)arg3;
- (void)markReachableNodesFromRoots:(void *)arg1 inMap:(void *)arg2;
- (id)processSnapshotGraphWithOptions:(unsigned long long)arg1;
- (id)labelForNode:(unsigned int)arg1;
- (void)scanNodesForReferences:(CDUnknownBlockType)arg1;
- (void)unmapAllRegions;
- (id)processSnapshotGraphWithMallocStackLogs:(_Bool)arg1;
- (CDStruct_599faf0f)nodeDetails:(unsigned int)arg1;
- (id)vmuVMRegionForAddress:(unsigned long long)arg1;
- (void *)contentForNode:(unsigned int)arg1;
- (void *)copyUserMarked;
- (id)zoneNameForIndex:(unsigned int)arg1;
- (id)vmuVMRegionForNode:(unsigned int)arg1;
- (unsigned int)enumerateMarkedObjects:(void *)arg1 withBlock:(CDUnknownBlockType)arg2;
- (unsigned int)enumerateRegionsWithBlock:(CDUnknownBlockType)arg1;
- (unsigned int)enumerateReferencesWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasLabelsForNodes;
- (id)shortLabelForNode:(unsigned int)arg1;
- (id)initWithSelfTaskAndOptions:(unsigned long long)arg1;
- (unsigned int)_indexForClassInfo:(id)arg1;
- (id)_cachedVariantForGenericInfo:(id)arg1 variantKey:(unsigned long long)arg2;
- (void)_registerVariant:(id)arg1 forGenericInfo:(id)arg2 variantKey:(unsigned long long)arg3;
- (void)addRootNodesFromTask;
- (void)addMallocNodesFromTask;
- (void)addMallocNodes:(id)arg1;
- (void)orderedNodeTraversal:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)removeRootReachableNodes;
- (id)processSnapshotGraph;
- (id)zoneNameForNode:(unsigned int)arg1;
- (id)classInfoForObjectAtAddress:(unsigned long long)arg1;
- (_Bool)validateAddressRange:(struct _VMURange)arg1;
- (_Bool)addressIsInDataSegment:(unsigned long long)arg1;
- (id)nodeDescription:(unsigned int)arg1;
- (id)nodeDescription:(unsigned int)arg1 withOffset:(unsigned long long)arg2;
- (id)referenceDescription:(CDStruct_8b65991f)arg1 withSourceNode:(unsigned int)arg2 destinationNode:(unsigned int)arg3 symbolicator:(struct _CSTypeRef)arg4 alignmentSpacing:(unsigned int)arg5;

@end

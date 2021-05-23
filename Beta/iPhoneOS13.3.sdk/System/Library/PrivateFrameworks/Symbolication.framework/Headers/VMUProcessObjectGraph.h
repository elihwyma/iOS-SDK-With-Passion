/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Symbolication/VMUObjectGraph.h>

@class NSArray, NSDictionary, NSString, VMUClassInfoMap, VMUDebugTimer, VMUGraphStackLogReader, VMUNodeToStringMap, VMURangeToStringMap;

@protocol VMUStackLogReader;

@interface VMUProcessObjectGraph : VMUObjectGraph

{
    int _pid;
    unsigned int _kernPageSize;
    unsigned long long _machAbsolute;
    NSArray *_regions;
    unsigned int _regionCount;
    NSArray *_zoneNames;
    NSString *_processName;
    NSString *_processDescriptionString;
    NSString *_executablePath;
    NSString *_binaryImagesDescription;
    VMURangeToStringMap *_threadNameRanges;
    VMURangeToStringMap *_binarySectionNameRanges;
    VMURangeToStringMap *_regionSymbolNameRanges;
    _Bool _gotObjcClassStructureRanges;
    _Bool _showRawClassNames;
    NSDictionary *_pthreadOffsets;
    VMUNodeToStringMap *_nodeLabels;
    void *_userMarked;
    VMUGraphStackLogReader *_stackLogReader;
    VMUDebugTimer *_debugTimer;
    unsigned long long _physicalFootprint;
    unsigned long long _physicalFootprintPeak;
    _Bool _showsPhysFootprint;
}

@property (nonatomic) unsigned long long snapshotMachTime;
@property (nonatomic) unsigned long long physicalFootprint;
@property (nonatomic) unsigned long long physicalFootprintPeak;
@property (retain, nonatomic) VMUDebugTimer *debugTimer;
@property (retain, nonatomic) id <VMUStackLogReader> stackLogReader;
@property (nonatomic) _Bool showRawClassNames;
@property (nonatomic) _Bool showsPhysFootprint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) _Bool is64bit;
@property (nonatomic, readonly) unsigned int vmPageSize;
@property (nonatomic, readonly) VMUClassInfoMap *realizedClasses;
@property (nonatomic, readonly) unsigned int zoneCount;
@property (nonatomic, readonly) unsigned int regionCount;
@property (nonatomic, readonly) unsigned int nodeCount;
@property (nonatomic, readonly) unsigned int nodeNamespaceSize;
@property (nonatomic, readonly) NSString *processName;
@property (nonatomic, readonly) NSString *processDescriptionString;
@property (nonatomic, readonly) NSString *executablePath;
@property (nonatomic, readonly) NSString *binaryImagesDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setProcessName:(id)arg1;
- (void)refineTypesWithOverlay:(id)arg1;
- (void)markReachableNodesFromRoots:(void *)arg1 inMap:(void *)arg2;
- (id)initWithPid:(int)arg1 nodes:(struct _VMUBlockNode *)arg2 nodeCount:(unsigned int)arg3 zoneNames:(id)arg4 classInfoMap:(id)arg5 regions:(id)arg6 pthreadOffsets:(id)arg7 userMarked:(void *)arg8;
- (void)setProcessDescriptionString:(id)arg1;
- (void)setBinaryImagesDescription:(id)arg1;
- (id)labelForNode:(unsigned int)arg1;
- (void)setLabel:(id)arg1 forNode:(unsigned int)arg2;
- (void)setBinarySectionName:(id)arg1 forRange:(struct _VMURange)arg2;
- (void)setRegionSymbolName:(id)arg1 forRange:(struct _VMURange)arg2;
- (void)setThreadName:(id)arg1 forRange:(struct _VMURange)arg2;
- (id)vmuVMRegionForAddress:(unsigned long long)arg1;
- (void *)contentForNode:(unsigned int)arg1;
- (void *)copyUserMarked;
- (id)zoneNameForIndex:(unsigned int)arg1;
- (id)vmuVMRegionForNode:(unsigned int)arg1;
- (unsigned int)enumerateRegionsWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasLabelsForNodes;
- (id)shortLabelForNode:(unsigned int)arg1;
- (id)nodeDescription:(unsigned int)arg1;
- (id)nodeDescription:(unsigned int)arg1 withOffset:(unsigned long long)arg2;
- (id)initWithArchived:(id)arg1 version:(long long)arg2 options:(unsigned long long)arg3 diskLogs:(id)arg4;
- (void)archiveDictionaryRepresentation:(id)arg1 options:(unsigned long long)arg2;
- (void)_deriveObjcClassStructureRanges;
- (struct _VMURange)rangeForSymbolName:(id)arg1 inRegion:(id)arg2;
- (unsigned int)enumerateReferencesFromDataRegion:(id)arg1 atGlobalSymbol:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)_renameWithNodeMap:(unsigned int *)arg1 nodeNamespace:(unsigned int)arg2 edgeMap:(unsigned int *)arg3 edgeNamespace:(unsigned int)arg4;
- (id)binarySectionNameForAddress:(unsigned long long)arg1;
- (struct _VMURange)binarySectionRangeContainingAddress:(unsigned long long)arg1;
- (id)regionSymbolNameForAddress:(unsigned long long)arg1;
- (struct _VMURange)regionSymbolRangeContainingAddress:(unsigned long long)arg1;
- (id)threadNameForAddress:(unsigned long long)arg1;
- (id)nodeDescription:(unsigned int)arg1 withOffset:(unsigned long long)arg2 showLabel:(_Bool)arg3;
- (id)_detailedNodeOffsetDescription:(CDStruct_8b65991f)arg1 withSourceNode:(unsigned int)arg2 destinationNode:(unsigned int)arg3 alignmentSpacing:(unsigned int)arg4;
- (id)_descriptionForRegionAddress:(unsigned long long)arg1 withOffset:(unsigned long long)arg2 showSegment:(_Bool)arg3;
- (void)markReachableNodesFromRoots:(void *)arg1 inMap:(void *)arg2 options:(unsigned int)arg3;
- (_Bool)nodeIsAutoreleasePoolContentPage:(unsigned int)arg1;
- (_Bool)nodeDetailIsAutoreleasePoolContentPage:(CDStruct_599faf0f)arg1;
- (unsigned int)nodeReferencedFromDataRegion:(id)arg1 byGlobalSymbol:(id)arg2;
- (void)setUserMarked:(void *)arg1;
- (id)shortNodeDescription:(unsigned int)arg1;
- (id)nodeDescription:(unsigned int)arg1 withDestinationNode:(unsigned int)arg2 referenceInfo:(CDStruct_8b65991f)arg3;
- (id)nodeOffsetDescription:(CDStruct_8b65991f)arg1 withSourceNode:(unsigned int)arg2 destinationNode:(unsigned int)arg3;
- (id)referenceDescription:(CDStruct_8b65991f)arg1 withSourceNode:(unsigned int)arg2 destinationNode:(unsigned int)arg3 alignmentSpacing:(unsigned int)arg4;
- (void)refineEdges:(unsigned int)arg1 withOptions:(unsigned int)arg2 markingInvalid:(void *)arg3;

@end

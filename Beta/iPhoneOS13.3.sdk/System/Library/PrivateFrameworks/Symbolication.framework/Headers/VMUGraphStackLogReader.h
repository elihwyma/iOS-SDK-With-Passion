/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Symbolication/VMUStackLogReaderBase.h>

@class NSData, NSSet, NSString, VMUDebugTimer, VMUProcessObjectGraph, VMURangeToStringMap, VMUVMRegionTracker;

@interface VMUGraphStackLogReader : VMUStackLogReaderBase

{
    struct _CSTypeRef _symbolicator;
    VMUProcessObjectGraph *_graph;
    NSData *_diskLogs;
    VMUDebugTimer *_debugTimer;
    unsigned int _nodeNamespaceSize;
    unsigned int *_nodeToStackIndexTable;
    unsigned long long *_nodeToMSLPayloadTable;
    struct vmu_backtrace_uniquing_table_t *_backtraceUniquingTable;
    struct backtrace_uniquing_table *_originalUniquingTable;
    VMURangeToStringMap *_functionNameRanges;
    VMURangeToStringMap *_sourceInfoRanges;
}

@property (weak, nonatomic) VMUProcessObjectGraph *graph;
@property (retain, nonatomic) NSData *diskLogs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned int task;
@property (readonly) _Bool is64bit;
@property (readonly) _Bool inspectingLiveProcess;
@property (readonly) _Bool usesLiteMode;
@property (readonly) _Bool coldestFrameIsNotThreadId;
@property (readonly) VMUVMRegionTracker *regionTracker;
@property (retain, nonatomic) NSSet *excludedFrames;
@property (readonly) unsigned long long nodesInUniquingTable;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (void)_claimUnarchivingOfClass:(id)arg1;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef)arg2 graph:(id)arg3 debugTimer:(id)arg4 collectDisklogs:(_Bool)arg5;
- (id)vmuVMRegionForAddress:(unsigned long long)arg1;
- (unsigned long long)stackIDForNode:(unsigned int)arg1;
- (long long)getFramesForStackID:(unsigned long long)arg1 stackFramesBuffer:(unsigned long long *)arg2;
- (long long)getFramesForNode:(unsigned int)arg1 inLiteZone:(_Bool)arg2 stackFramesBuffer:(unsigned long long *)arg3;
- (id)binaryImagePathForPCaddress:(unsigned long long)arg1;
- (id)functionNameForPCaddress:(unsigned long long)arg1;
- (struct _VMURange)functionRangeContainingPCaddress:(unsigned long long)arg1;
- (struct _VMURange)binaryImageRangeForPCaddress:(unsigned long long)arg1;
- (id)sourceFileNameAndLineNumberForPCaddress:(unsigned long long)arg1 fullPath:(_Bool)arg2;
- (int)enumerateRecords:(CDUnknownBlockType)arg1;
- (int)enumerateMSLRecordsAndPayloads:(CDUnknownBlockType)arg1;
- (long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(_Bool)arg3 stackFramesBuffer:(unsigned long long *)arg4;
- (id)sourcePathForPCaddress:(unsigned long long)arg1;
- (id)sourceFileNameForPCaddress:(unsigned long long)arg1;
- (unsigned int)sourceLineNumberForPCaddress:(unsigned long long)arg1;
- (void)streamFullStackLogsToBlock:(CDUnknownBlockType)arg1;
- (_Bool)copyOriginalUniquingTable:(id)arg1;
- (void)populateBacktraceUniquingTableWithStackLogs:(id)arg1;
- (void)symbolicateBacktraceUniquingTable;
- (void)_setFunctionName:(id)arg1 forPCAddressRange:(struct _VMURange)arg2;
- (void)_setSourcePath:(id)arg1 lineNumber:(unsigned int)arg2 forPCAddressRange:(struct _VMURange)arg3;
- (void)_parseSourceInfoString:(id)arg1 intoComponents:(unsigned int *)arg2;
- (struct _VMURange)sourceLineRangeContainingPCaddress:(unsigned long long)arg1;

@end

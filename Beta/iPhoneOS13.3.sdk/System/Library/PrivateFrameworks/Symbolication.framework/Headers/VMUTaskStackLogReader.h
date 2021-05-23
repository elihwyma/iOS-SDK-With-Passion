/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Symbolication/VMUStackLogReaderBase.h>

@class NSSet, NSString, VMUTaskMemoryScanner, VMUVMRegionTracker;

@interface VMUTaskStackLogReader : VMUStackLogReaderBase

{
    VMUTaskMemoryScanner *_scanner;
    struct _CSTypeRef _symbolicator;
    unsigned long long _msl_payload_version;
}

@property (weak, nonatomic) VMUTaskMemoryScanner *scanner;
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

- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1;
- (id)vmuVMRegionForAddress:(unsigned long long)arg1;
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
- (unsigned long long)liteModeStackIDforAddress:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (unsigned long long)liteModeStackIDforVMregionAddress:(unsigned long long)arg1;
- (CDStruct_69d7cc99)liteMSLPayloadforMallocAddress:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (CDStruct_69d7cc99)liteMSLPayloadforVMregionAddress:(unsigned long long)arg1;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef)arg2;

@end

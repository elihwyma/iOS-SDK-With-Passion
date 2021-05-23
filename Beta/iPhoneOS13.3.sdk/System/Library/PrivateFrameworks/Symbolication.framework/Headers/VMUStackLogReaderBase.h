/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableDictionary, NSSet, NSString, VMUVMRegionTracker;

@interface VMUStackLogReaderBase : NSObject

{
    unsigned int _task;
    VMUVMRegionTracker *_regionTracker;
    NSMapTable *_addressToSymbolicationMap;
    NSSet *_excludedFrames;
    NSMutableDictionary *_binaryImagePathToIdentifierMap;
    _Bool _usesLiteMode;
    _Bool _coldestFrameIsNotThreadId;
}

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

- (id)vmuVMRegionForAddress:(unsigned long long)arg1;
- (long long)getFramesForStackID:(unsigned long long)arg1 stackFramesBuffer:(unsigned long long *)arg2;
- (long long)getFramesForNode:(unsigned int)arg1 inLiteZone:(_Bool)arg2 stackFramesBuffer:(unsigned long long *)arg3;
- (id)symbolicatedBacktraceForFrames:(unsigned long long *)arg1 frameCount:(long long)arg2 options:(unsigned long long)arg3;
- (id)binaryImagePathForPCaddress:(unsigned long long)arg1;
- (id)identifierForBinaryImagePath:(id)arg1;
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
- (id)symbolicatedBacktraceForNode:(unsigned int)arg1 nodeDetails:(CDStruct_599faf0f)arg2 isLiteZone:(_Bool)arg3 options:(unsigned long long)arg4;
- (id)symbolicatedBacktraceForStackID:(unsigned long long)arg1 options:(unsigned long long)arg2;

@end

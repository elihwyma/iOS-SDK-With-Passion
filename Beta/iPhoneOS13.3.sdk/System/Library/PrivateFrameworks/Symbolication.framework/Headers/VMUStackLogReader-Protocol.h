/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Symbolication/Swift-Protocol.h>

@class NSSet, VMUVMRegionTracker;

@protocol VMUStackLogReader <Swift>

@property (readonly) unsigned int task;
@property (readonly) _Bool is64bit;
@property (readonly) _Bool inspectingLiveProcess;
@property (readonly) _Bool usesLiteMode;
@property (readonly) _Bool coldestFrameIsNotThreadId;
@property (readonly) VMUVMRegionTracker *regionTracker;
@property (retain, nonatomic) NSSet *excludedFrames;
@property (readonly) unsigned long long nodesInUniquingTable;

- (unsigned short)vmuVMRegionForAddress: /* Error: Ran out of types for this method. */;
- (unsigned short)getFramesForStackID:stackFramesBuffer: /* Error: Ran out of types for this method. */;
- (unsigned short)getFramesForNode:inLiteZone:stackFramesBuffer: /* Error: Ran out of types for this method. */;
- (unsigned short)symbolicatedBacktraceForFrames:frameCount:options: /* Error: Ran out of types for this method. */;
- (unsigned short)binaryImagePathForPCaddress: /* Error: Ran out of types for this method. */;
- (unsigned short)functionNameForPCaddress: /* Error: Ran out of types for this method. */;
- (unsigned short)functionRangeContainingPCaddress: /* Error: Ran out of types for this method. */;
- (unsigned short)binaryImageRangeForPCaddress: /* Error: Ran out of types for this method. */;
- (unsigned short)sourceFileNameAndLineNumberForPCaddress:fullPath: /* Error: Ran out of types for this method. */;
- (unsigned short)enumerateRecords: /* Error: Ran out of types for this method. */;
- (unsigned short)enumerateMSLRecordsAndPayloads: /* Error: Ran out of types for this method. */;
- (unsigned short)getFramesForAddress:size:inLiteZone:stackFramesBuffer: /* Error: Ran out of types for this method. */;
- (unsigned short)sourcePathForPCaddress: /* Error: Ran out of types for this method. */;
- (unsigned short)sourceFileNameForPCaddress: /* Error: Ran out of types for this method. */;
- (unsigned short)sourceLineNumberForPCaddress: /* Error: Ran out of types for this method. */;
- (unsigned short)symbolicatedBacktraceForNode:nodeDetails:isLiteZone:options: /* Error: Ran out of types for this method. */;
- (unsigned short)symbolicatedBacktraceForStackID:options: /* Error: Ran out of types for this method. */;

@end

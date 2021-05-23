/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsObject.h>

@class NSString;

@interface MTLToolsIndirectComputeCommand : MTLToolsObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reset;
- (void)setComputePipelineState:(id)arg1;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setStageInRegion:(CDStruct_1e3be3a8)arg1;
- (unsigned long long)getCommandType;
- (unsigned long long)getPipelineStateUniqueIdentifier;
- (void)setKernelBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)concurrentDispatchThreadgroups:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (void)concurrentDispatchThreads:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (void)setBarrier;
- (void)clearBarrier;
- (void *)getKernelBufferAtIndex:(unsigned long long)arg1;
- (id)dispatchThreadgroupsArguments;
- (id)dispatchThreadsArguments;
- (unsigned long long)getThreadgroupMemoryLengthAtIndex:(unsigned long long)arg1;
- (CDStruct_1e3be3a8)getStageInRegion;
- (_Bool)hasBarrier;
- (void)acceptVisitor:(id)arg1;

@end

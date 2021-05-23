/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _MTLIndirectComputeCommand : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reset;
- (void)setComputePipelineState:(id)arg1;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setStageInRegion:(CDStruct_caaed6bc)arg1;
- (unsigned long long)getCommandType;
- (unsigned long long)getPipelineStateUniqueIdentifier;
- (void)setKernelBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)concurrentDispatchThreadgroups:(CDStruct_da2e99ad)arg1 threadsPerThreadgroup:(CDStruct_da2e99ad)arg2;
- (void)concurrentDispatchThreads:(CDStruct_da2e99ad)arg1 threadsPerThreadgroup:(CDStruct_da2e99ad)arg2;
- (void)setBarrier;
- (void)clearBarrier;
- (void *)getKernelBufferAtIndex:(unsigned long long)arg1;
- (id)dispatchThreadgroupsArguments;
- (id)dispatchThreadsArguments;
- (unsigned long long)getThreadgroupMemoryLengthAtIndex:(unsigned long long)arg1;
- (CDStruct_caaed6bc)getStageInRegion;
- (_Bool)hasBarrier;
- (void)setKernelArgument:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;

@end

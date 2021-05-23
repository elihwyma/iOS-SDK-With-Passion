/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class CMMTLCommandBuffer, CMMTLComputePipelineState, NSString;

@protocol MTLComputeCommandEncoder, MTLDevice;

@interface CMMTLComputeCommandEncoder : NSObject

{
    id <MTLComputeCommandEncoder> _computeEncoder;
    CMMTLComputePipelineState *_cmComputePipelineState;
    CMMTLCommandBuffer *_cmCommandBuffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long dispatchType;

- (void)forwardInvocation:(id)arg1;
- (void)setComputePipelineState:(id)arg1;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)dispatchThreadgroups:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (void)endEncoding;
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithCMMTLCommandBuffer:(id)arg1;
- (id)initWithCMMTLCommandBuffer:(id)arg1 dispatchType:(unsigned long long)arg2;
- (void)dispatchThreads:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;

@end

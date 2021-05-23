/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsObject.h>

@class MTLToolsPointerArray, NSArray, NSString;

@protocol MTLDevice, MTLPipelineCache;

@interface MTLToolsPipelineLibrary : MTLToolsObject

{
    MTLToolsPointerArray *_pipelineStates;
    MTLToolsPointerArray *_computePipelineStates;
}

@property (nonatomic, readonly) MTLToolsPointerArray *pipelineStates;
@property (nonatomic, readonly) MTLToolsPointerArray *computePipelineStates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy) NSString *label;
@property (readonly) id <MTLDevice> device;
@property (readonly) NSArray *pipelineNames;
@property _Bool disableRunTimeCompilation;
@property (nonatomic, readonly) id <MTLPipelineCache> pipelineCache;
@property (nonatomic, readonly) id <MTLPipelineCache> functionCache;

- (void)dealloc;
- (id)newRenderPipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newComputePipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newComputePipelineDescriptorWithName:(id)arg1 error:(id *)arg2;
- (id)newRenderPipelineDescriptorWithName:(id)arg1 error:(id *)arg2;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (void)acceptVisitor:(id)arg1;

@end

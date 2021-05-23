/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsComputePipelineState.h>

@class MTLComputePipelineDescriptor, MTLComputePipelineReflection, NSArray;

@protocol MTLFunction;

@interface MTLDebugComputePipelineState : MTLToolsComputePipelineState

{
    unsigned long long _maxThreadPositionInGrid[3];
    unsigned long long _maxThreadsPerGrid[3];
    unsigned long long _maxThreadPositionInThreadgroup[3];
    unsigned long long _maxThreadIndexInThreadgroup[3];
    unsigned long long _maxThreadsPerThreadgroup[3];
    unsigned long long _maxThreadgroupPositionInGrid[3];
    unsigned long long _maxThreadgroupsPerGrid[3];
    unsigned long long _maxStageInGridSize[3];
    unsigned long long _maxStageInGridOrigin[3];
    id <MTLFunction> _function;
    MTLComputePipelineDescriptor *_descriptor;
    MTLComputePipelineReflection *_reflection;
    NSArray *_imageFilterFunctions;
    CDStruct_dbc1e4aa *_imageFilterFunctionInfo;
}

@property (nonatomic, readonly) id <MTLFunction> function;
@property (nonatomic, readonly) MTLComputePipelineDescriptor *descriptor;
@property (nonatomic, readonly) MTLComputePipelineReflection *reflection;
@property (nonatomic, readonly) NSArray *imageFilterFunctions;
@property (nonatomic, readonly) CDStruct_dbc1e4aa *imageFilterFunctionInfo;

- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithComputePipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4;
- (id)getParameter:(id)arg1;
- (void)setImageFilterFunctions:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2;

@end

/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLComputePipelineReflection.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface MTLComputePipelineReflectionInternal : MTLComputePipelineReflection

{
    NSArray *_arguments;
    NSArray *_builtInArguments;
    NSDictionary *_performanceStatistics;
    CDStruct_596dc0d1 _flags;
    unsigned int _traceBufferIndex;
    NSArray *_constantSamplerUniqueIdentifiers;
    NSArray *_constantSamplerDescriptors;
}

- (void)dealloc;
- (id)description;
- (id)arguments;
- (CDStruct_596dc0d1)usageFlags;
- (id)performanceStatistics;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)builtInArguments;
- (id)initWithSerializedData:(id)arg1 serializedStageInputDescriptor:(id)arg2 device:(id)arg3 options:(unsigned long long)arg4 flags:(CDStruct_596dc0d1)arg5;
- (id)initWithSerializedData:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 flags:(CDStruct_596dc0d1)arg4;
- (void)setPerformanceStatistics:(id)arg1;
- (unsigned int)traceBufferIndex;
- (id)constantSamplerUniqueIdentifiers;
- (id)constantSamplerDescriptors;
- (void)setConstantSamplerUniqueIdentifiers:(id)arg1;
- (void)setConstantSamplerDescriptorsFromBitmasks:(unsigned long long *)arg1 count:(unsigned long long)arg2;

@end

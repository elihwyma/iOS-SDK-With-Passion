/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLRenderPipelineReflection.h>

@class MTLArgument, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface MTLRenderPipelineReflectionInternal : MTLRenderPipelineReflection

{
    CDStruct_7ce1aa5b _flags;
    NSArray *_vertexBuiltInArguments;
    unsigned long long _postVertexDumpStride;
    NSArray *_postVertexDumpOutputs;
    NSArray *_inferredInputs;
    NSArray *_vertexArguments;
    NSArray *_fragmentArguments;
    NSArray *_tileArguments;
    NSArray *_tileBuiltInArguments;
    MTLArgument *_imageBlockDataReturn;
    NSDictionary *_performanceStatistics;
    unsigned int _traceBufferIndex;
    NSArray *_constantSamplerUniqueIdentifiers;
    NSArray *_constantSamplerDescriptors;
}

- (void)dealloc;
- (id)description;
- (CDStruct_7ce1aa5b)usageFlags;
- (id)performanceStatistics;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)setPerformanceStatistics:(id)arg1;
- (unsigned int)traceBufferIndex;
- (id)constantSamplerUniqueIdentifiers;
- (id)constantSamplerDescriptors;
- (void)setConstantSamplerUniqueIdentifiers:(id)arg1;
- (void)setConstantSamplerDescriptorsFromBitmasks:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (id)initWithTileArguments:(id *)arg1 argumentCount:(unsigned int)arg2 builtInArgumentCount:(unsigned int)arg3 imageBlockDataReturn:(id)arg4 device:(id)arg5 traceBufferIndex:(unsigned int)arg6 flags:(CDStruct_7ce1aa5b)arg7;
- (id)initWithVertexData:(id)arg1 fragmentData:(id)arg2 serializedVertexDescriptor:(id)arg3 device:(id)arg4 options:(unsigned long long)arg5 flags:(CDStruct_7ce1aa5b)arg6;
- (id)initWithTileData:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 flags:(CDStruct_7ce1aa5b)arg4;
- (id)initWithTileData:(id)arg1 functionType:(unsigned long long)arg2 device:(id)arg3 options:(unsigned long long)arg4 flags:(CDStruct_7ce1aa5b)arg5;
- (id)vertexBuiltInArguments;
- (unsigned long long)postVertexDumpStride;
- (id)postVertexDumpOutputs;
- (id)inferredInputs;
- (id)vertexArguments;
- (id)fragmentArguments;
- (id)tileArguments;
- (id)imageBlockDataReturn;

@end

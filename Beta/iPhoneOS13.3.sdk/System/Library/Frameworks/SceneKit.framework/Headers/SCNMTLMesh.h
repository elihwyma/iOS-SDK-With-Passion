/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class MTLStageInputOutputDescriptor, MTLVertexDescriptor, NSArray;

@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface SCNMTLMesh : NSObject

{
    long long _mutabilityTimestamp;
    MTLVertexDescriptor *_vertexDescriptor;
    MTLVertexDescriptor *_tessellationVertexDescriptor;
    unsigned long long _vertexDescriptorHash;
    unsigned long long _tessellationVertexDescriptorHash;
    NSArray *_buffers;
    NSArray *_elements;
    MTLStageInputOutputDescriptor *_stageDescriptor;
    id <MTLBuffer> _volatileBuffer;
    unsigned long long volatileOffset;
    unsigned long long volatileStride;
    unsigned long long volatileSize;
    long long verticesCount;
}

@property (copy, nonatomic) NSArray *buffers;
@property (copy, nonatomic) NSArray *elements;
@property (retain, nonatomic) MTLStageInputOutputDescriptor *stageDescriptor;
@property (copy, nonatomic) MTLVertexDescriptor *vertexDescriptor;
@property (nonatomic, readonly) unsigned long long vertexDescriptorHash;
@property (nonatomic, readonly) MTLVertexDescriptor *tessellationVertexDescriptor;
@property (nonatomic, readonly) unsigned long long tessellationVertexDescriptorHash;
@property (retain, nonatomic) id <MTLBuffer> volatileBuffer;
@property (nonatomic) unsigned long long volatileOffset;
@property (nonatomic) unsigned long long volatileStride;
@property (nonatomic) unsigned long long volatileSize;
@property (nonatomic) long long verticesCount;
@property (nonatomic) long long mutabilityTimestamp;

- (void)dealloc;
- (id)description;
- (id)bufferForAttribute:(long long)arg1;
- (void)buildTessellationVertexDescriptorIfNeeded;

@end

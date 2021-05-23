/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class PKMetalBuffer;

@protocol MTLBuffer;

@interface PKMetalParticleRenderCacheBuffer : NSObject

{
    PKMetalBuffer *_pkUniformsBuffer;
    PKMetalBuffer *_pkStrokePointBuffer;
    unsigned long long _uniformsBufferOffset;
    unsigned long long _strokePointBufferOffset;
    unsigned long long _numVertices;
    unsigned long long _numParticles;
    unsigned long long _numPoints;
}

@property (nonatomic, readonly) id <MTLBuffer> uniformsBuffer;
@property (nonatomic, readonly) unsigned long long uniformsBufferOffset;
@property (nonatomic, readonly) id <MTLBuffer> strokePointBuffer;
@property (nonatomic, readonly) unsigned long long strokePointBufferOffset;
@property (nonatomic, readonly) unsigned long long numVertices;
@property (nonatomic, readonly) unsigned long long numParticles;
@property (nonatomic, readonly) unsigned long long numPoints;

- (_Bool)lockPurgeableResourcesAddToSet:(id)arg1;
- (id)initWithUniforms:(const struct PKMetalParticleKernelUniforms *)arg1 points:(const struct PKMetalParticleStrokePoint *)arg2 numPoints:(unsigned long long)arg3 resourceHandler:(id)arg4;

@end

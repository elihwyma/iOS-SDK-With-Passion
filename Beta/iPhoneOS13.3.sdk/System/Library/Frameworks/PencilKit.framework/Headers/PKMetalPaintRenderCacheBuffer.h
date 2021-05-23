/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class PKMetalBuffer;

@protocol MTLBuffer;

@interface PKMetalPaintRenderCacheBuffer : NSObject

{
    PKMetalBuffer *_pkUniformsBuffer;
    PKMetalBuffer *_pkStrokePointBuffer;
    unsigned long long _uniformsBufferOffset;
    unsigned long long _strokePointBufferOffset;
    unsigned long long _numVertices;
    unsigned long long _numPoints;
}

@property (nonatomic, readonly) id <MTLBuffer> uniformsBuffer;
@property (nonatomic, readonly) unsigned long long uniformsBufferOffset;
@property (nonatomic, readonly) id <MTLBuffer> strokePointBuffer;
@property (nonatomic, readonly) unsigned long long strokePointBufferOffset;
@property (nonatomic, readonly) unsigned long long numVertices;
@property (nonatomic, readonly) unsigned long long numPoints;

- (id)init;
- (_Bool)lockPurgeableResourcesAddToSet:(id)arg1;
- (id)initWithUniforms:(const struct PKMetalPaintKernelUniforms *)arg1 points:(const struct PKMetalPaintStrokePoint *)arg2 numPoints:(unsigned long long)arg3 numVertices:(unsigned long long)arg4 resourceHandler:(id)arg5;

@end

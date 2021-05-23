/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@protocol MTLBuffer;

@interface PKMetalLiveStrokePaintRenderCacheBuffer : NSObject

{
    id <MTLBuffer> _strokePointBuffer;
    unsigned long long _strokePointBufferOffset;
    id <MTLBuffer> _liveStrokePointBuffer;
    unsigned long long _liveStrokePointBufferOffset;
    unsigned long long _numVertices;
    unsigned long long _numPoints;
}

@property (nonatomic, readonly) id <MTLBuffer> strokePointBuffer;
@property (nonatomic, readonly) unsigned long long strokePointBufferOffset;
@property (nonatomic, readonly) id <MTLBuffer> liveStrokePointBuffer;
@property (nonatomic, readonly) unsigned long long liveStrokePointBufferOffset;
@property (nonatomic, readonly) unsigned long long numVertices;
@property (nonatomic, readonly) unsigned long long numPoints;

- (id)init;
- (id)initWithPoints:(const struct PKMetalPaintStrokePoint *)arg1 liveStrokePoints:(const struct PKMetalLiveStrokePaintStrokePoint *)arg2 numPoints:(unsigned long long)arg3 numVertices:(unsigned long long)arg4 resourceHandler:(id)arg5;

@end

/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class PKMetalBuffer;

@protocol MTLBuffer;

@interface PKMetalStrokeRenderCacheBuffer : NSObject

{
    PKMetalBuffer *_buffer;
    unsigned long long _offset;
    unsigned long long _numVertices;
}

@property (nonatomic, readonly) unsigned long long offset;
@property (nonatomic, readonly) unsigned long long numVertices;
@property (nonatomic, readonly) id <MTLBuffer> vertexBuffer;

- (id)init;
- (id)initWithBuffer:(id)arg1 offset:(unsigned long long)arg2 numVertices:(unsigned long long)arg3;
- (_Bool)lockPurgeableResourcesAddToSet:(id)arg1;

@end

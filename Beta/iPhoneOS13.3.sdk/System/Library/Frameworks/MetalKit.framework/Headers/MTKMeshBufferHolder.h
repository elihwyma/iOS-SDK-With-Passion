/*
 Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

#import <Foundation/NSObject.h>

@class MTKMeshBuffer;

__attribute__((visibility("hidden")))
@interface MTKMeshBufferHolder : NSObject

{
    MTKMeshBuffer *_buffer;
}

@property MTKMeshBuffer *buffer;

@end

/*
 Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

#import <Foundation/NSObject.h>

@class MTKMeshBufferAllocator, NSMutableOrderedSet, NSString;

@protocol MDLMeshBufferAllocator, MTLBuffer;

__attribute__((visibility("hidden")))
@interface MTKMeshBufferZone : NSObject

{
    NSMutableOrderedSet *_buffers;
    _Bool _destroyInvoked;
    MTKMeshBufferAllocator *_allocator;
    unsigned long long _capacity;
    id <MTLBuffer> _buffer;
}

@property (nonatomic, readonly) unsigned long long capacity;
@property (nonatomic, readonly) id <MDLMeshBufferAllocator> allocator;
@property (nonatomic, readonly) id <MTLBuffer> buffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCapacity:(unsigned long long)arg1 allocator:(id)arg2;
- (id)newBufferWithLength:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (void)destroyBuffer:(id)arg1;

@end

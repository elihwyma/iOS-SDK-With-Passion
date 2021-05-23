/*
 Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import <Foundation/NSObject.h>

@class GLKMeshBufferAllocator, NSMutableOrderedSet, NSString;

@protocol MDLMeshBufferAllocator;

@interface GLKMeshBufferZone : NSObject

{
    NSMutableOrderedSet *_buffers;
    _Bool _destroyInvoked;
    GLKMeshBufferAllocator *_allocator;
    unsigned int _glBufferName;
    unsigned long long _capacity;
}

@property (nonatomic, readonly) unsigned long long capacity;
@property (nonatomic, readonly) id <MDLMeshBufferAllocator> allocator;
@property (nonatomic, readonly) unsigned int glBufferName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1 allocator:(id)arg2;
- (id)newBufferWithLength:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (void)destroyBuffer:(id)arg1;

@end

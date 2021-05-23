/*
 Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import <GLKit/Swift-Protocol.h>

@protocol MDLMeshBufferAllocator;

@protocol MDLMeshBufferZone <Swift>

@property (nonatomic, readonly) unsigned long long capacity;
@property (nonatomic, readonly) id <MDLMeshBufferAllocator> allocator;

@end

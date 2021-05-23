/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <ModelIO/Swift-Protocol.h>

@protocol MDLMeshBufferAllocator;

@protocol MDLMeshBufferZone <Swift>

@property (nonatomic, readonly) unsigned long long capacity;
@property (nonatomic, readonly) id <MDLMeshBufferAllocator> allocator;

@end

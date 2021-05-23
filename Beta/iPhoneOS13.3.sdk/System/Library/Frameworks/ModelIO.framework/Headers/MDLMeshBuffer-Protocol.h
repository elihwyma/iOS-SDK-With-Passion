/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <ModelIO/Swift-Protocol.h>

@protocol MDLMeshBufferAllocator, MDLMeshBufferZone;

@protocol MDLMeshBuffer <Swift>

@property (nonatomic, readonly) unsigned long long length;
@property (retain, nonatomic, readonly) id <MDLMeshBufferAllocator> allocator;
@property (retain, nonatomic, readonly) id <MDLMeshBufferZone> zone;
@property (nonatomic, readonly) unsigned long long type;

- (unsigned short)map;
- (unsigned short)fillData:offset: /* Error: Ran out of types for this method. */;

@end

/*
 Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

#import <MetalKit/Swift-Protocol.h>

@class MISSING_TYPE;

@protocol MDLMeshBufferAllocator, MDLMeshBufferZone;

@protocol MDLMeshBuffer <Swift>

@property (nonatomic, readonly) unsigned long long length;
@property (retain, nonatomic, readonly) id <MDLMeshBufferAllocator> allocator;
@property (retain, nonatomic, readonly) id <MDLMeshBufferZone> zone;
@property (nonatomic, readonly) unsigned long long type;

- (MISSING_TYPE *)map;
- (MISSING_TYPE *)fillData:offset: /* Error: Ran out of types for this method. */;

@end

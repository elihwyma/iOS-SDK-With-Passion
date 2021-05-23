/*
 Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

#import <Foundation/NSObject.h>

@class MTKMeshBufferAllocator, MTKMeshBufferZone, NSString;

@protocol MDLMeshBufferZone, MTLBuffer;

@interface MTKMeshBuffer : NSObject

{
    MTKMeshBufferZone *_zone;
    unsigned long long _length;
    MTKMeshBufferAllocator *_allocator;
    id <MTLBuffer> _buffer;
    unsigned long long _offset;
    unsigned long long _type;
}

@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, readonly) MTKMeshBufferAllocator *allocator;
@property (nonatomic, readonly) id <MDLMeshBufferZone> zone;
@property (nonatomic, readonly) id <MTLBuffer> buffer;
@property (nonatomic, readonly) unsigned long long offset;
@property (nonatomic, readonly) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *name;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)map;
- (void)fillData:(id)arg1 offset:(unsigned long long)arg2;
- (id)_initWithLength:(unsigned long long)arg1 allocator:(id)arg2 type:(unsigned long long)arg3;
- (id)_initWithData:(id)arg1 allocator:(id)arg2 type:(unsigned long long)arg3;
- (id)_initWithLength:(unsigned long long)arg1 offset:(unsigned long long)arg2 zone:(id)arg3 type:(unsigned long long)arg4;
- (id)_initWithBytes:(const void *)arg1 length:(unsigned long long)arg2 offset:(unsigned long long)arg3 allocator:(id)arg4 zone:(id)arg5 type:(unsigned long long)arg6;
- (id)_newMap;

@end

/*
 Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import <Foundation/NSObject.h>

@class GLKMeshBufferAllocator, GLKMeshBufferZone, NSString;

@protocol MDLMeshBufferZone;

@interface GLKMeshBuffer : NSObject

{
    unsigned int _mapCount;
    void *_mapPtr;
    unsigned int _target;
    GLKMeshBufferZone *_zone;
    unsigned int _glBufferName;
    unsigned long long _length;
    GLKMeshBufferAllocator *_allocator;
    unsigned long long _offset;
    unsigned long long _type;
}

@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, readonly) GLKMeshBufferAllocator *allocator;
@property (nonatomic, readonly) unsigned int glBufferName;
@property (nonatomic, readonly) unsigned long long offset;
@property (nonatomic, readonly) id <MDLMeshBufferZone> zone;
@property (nonatomic, readonly) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)map;
- (void)fillData:(id)arg1 offset:(unsigned long long)arg2;
- (id)_initWithLength:(unsigned long long)arg1 allocator:(id)arg2 type:(unsigned long long)arg3;
- (id)_initWithData:(id)arg1 allocator:(id)arg2 type:(unsigned long long)arg3;
- (id)_initWithLength:(unsigned long long)arg1 offset:(unsigned long long)arg2 zone:(id)arg3 type:(unsigned long long)arg4;
- (id)_initWithBytes:(const void *)arg1 length:(unsigned long long)arg2 offset:(unsigned long long)arg3 allocator:(id)arg4 zone:(id)arg5 type:(unsigned long long)arg6;

@end

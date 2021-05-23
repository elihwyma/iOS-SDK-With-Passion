/*
 Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

#import <Foundation/NSObject.h>

@class MTKMesh, MTKMeshBuffer, NSString;

@interface MTKSubmesh : NSObject

{
    unsigned long long _primitiveType;
    unsigned long long _indexType;
    MTKMeshBuffer *_indexBuffer;
    unsigned long long _indexCount;
    MTKMesh *_mesh;
    NSString *_name;
}

@property (nonatomic, readonly) unsigned long long primitiveType;
@property (nonatomic, readonly) unsigned long long indexType;
@property (nonatomic, readonly) MTKMeshBuffer *indexBuffer;
@property (nonatomic, readonly) unsigned long long indexCount;
@property (weak, nonatomic, readonly) MTKMesh *mesh;
@property (copy, nonatomic) NSString *name;

- (id)initWithMesh:(id)arg1 submesh:(id)arg2 device:(id)arg3 error:(id *)arg4;

@end

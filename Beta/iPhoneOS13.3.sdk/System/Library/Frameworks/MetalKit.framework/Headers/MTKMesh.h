/*
 Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

#import <Foundation/NSObject.h>

@class MDLVertexDescriptor, NSArray, NSMutableArray, NSString;

@interface MTKMesh : NSObject

{
    NSMutableArray *_submeshes;
    NSMutableArray *_vertexBuffers;
    MDLVertexDescriptor *_vertexDescriptor;
    unsigned long long _vertexCount;
    NSString *_name;
}

@property (nonatomic, readonly) NSArray *vertexBuffers;
@property (nonatomic, readonly) MDLVertexDescriptor *vertexDescriptor;
@property (nonatomic, readonly) NSArray *submeshes;
@property (nonatomic, readonly) unsigned long long vertexCount;
@property (copy, nonatomic) NSString *name;

+ (void)_createMeshesFromObject:(id)arg1 newMeshes:(id)arg2 sourceMeshes:(id)arg3 device:(id)arg4 error:(id *)arg5;
+ (id)newMeshesFromAsset:(id)arg1 device:(id)arg2 sourceMeshes:(id *)arg3 error:(id *)arg4;

- (id)initWithMesh:(id)arg1 device:(id)arg2 error:(id *)arg3;

@end

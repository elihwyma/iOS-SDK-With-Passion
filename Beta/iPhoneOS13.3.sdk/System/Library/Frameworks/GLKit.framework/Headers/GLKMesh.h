/*
 Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import <Foundation/NSObject.h>

@class MDLVertexDescriptor, NSArray, NSMutableArray, NSString;

@interface GLKMesh : NSObject

{
    NSMutableArray *_submeshes;
    NSMutableArray *_vertexBuffers;
    unsigned long long _vertexCount;
    MDLVertexDescriptor *_vertexDescriptor;
    NSString *_name;
}

@property (nonatomic, readonly) unsigned long long vertexCount;
@property (nonatomic, readonly) NSArray *vertexBuffers;
@property (nonatomic, readonly) MDLVertexDescriptor *vertexDescriptor;
@property (nonatomic, readonly) NSArray *submeshes;
@property (nonatomic, readonly) NSString *name;

+ (void)_createMeshesFromObject:(id)arg1 newMeshes:(id)arg2 sourceMeshes:(id)arg3 error:(id *)arg4;
+ (id)newMeshesFromAsset:(id)arg1 sourceMeshes:(id *)arg2 error:(id *)arg3;

- (id)initWithMesh:(id)arg1 error:(id *)arg2;

@end

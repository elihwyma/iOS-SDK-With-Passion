/*
 Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import <Foundation/NSObject.h>

@class GLKMesh, GLKMeshBuffer, NSString;

@interface GLKSubmesh : NSObject

{
    unsigned int _type;
    unsigned int _mode;
    int _elementCount;
    GLKMeshBuffer *_elementBuffer;
    GLKMesh *_mesh;
    NSString *_name;
}

@property (nonatomic, readonly) unsigned int type;
@property (nonatomic, readonly) unsigned int mode;
@property (nonatomic, readonly) int elementCount;
@property (nonatomic, readonly) GLKMeshBuffer *elementBuffer;
@property (weak, nonatomic, readonly) GLKMesh *mesh;
@property (nonatomic, readonly) NSString *name;

- (id)initWithMesh:(id)arg1 submesh:(id)arg2 error:(id *)arg3;

@end

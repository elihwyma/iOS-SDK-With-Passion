/*
 Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import <GLKit/GLKBaseEffect.h>

@class GLKEffectPropertyTexture;

@interface GLKReflectionMapEffect : GLKBaseEffect

{
    GLKEffectPropertyTexture *_textureCubeMap;
    union _GLKMatrix3 _matrix;
    _Bool _dirtyUniforms;
    int _matrixLoc;
}

@property (nonatomic) _Bool dirtyUniforms;
@property (nonatomic) int matrixLoc;
@property (nonatomic, readonly) GLKEffectPropertyTexture *textureCubeMap;
@property (nonatomic) union _GLKMatrix3 matrix;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)prepareToDraw;

@end

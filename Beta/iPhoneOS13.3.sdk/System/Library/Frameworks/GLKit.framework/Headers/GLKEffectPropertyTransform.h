/*
 Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import <GLKit/GLKEffectProperty.h>

@interface GLKEffectPropertyTransform : GLKEffectProperty

{
    union _GLKMatrix4 _modelviewMatrix;
    union _GLKMatrix4 _projectionMatrix;
    union _GLKMatrix3 _normalMatrix;
    int _mvpMatrixLoc;
    int _modelviewMatrixLoc;
    int _projectionMatrixLoc;
    int _normalMatrixLoc;
    int _invModelviewMatrixLoc;
    union _GLKMatrix4 _invModelviewMatrix;
    union _GLKMatrix4 _mvpMatrix;
}

@property (nonatomic) union _GLKMatrix4 mvpMatrix;
@property (nonatomic) union _GLKMatrix4 invModelviewMatrix;
@property (nonatomic) int projectionMatrixLoc;
@property (nonatomic) int modelviewMatrixLoc;
@property (nonatomic) int mvpMatrixLoc;
@property (nonatomic) int normalMatrixLoc;
@property (nonatomic) int invModelviewMatrixLoc;
@property (nonatomic) union _GLKMatrix4 modelviewMatrix;
@property (nonatomic) union _GLKMatrix4 projectionMatrix;
@property (nonatomic, readonly) union _GLKMatrix3 normalMatrix;

+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)bind;
- (void)dirtyAllUniforms;
- (void)setShaderBindings;
- (void)loadMatrix:(int)arg1 matrix:(union _GLKMatrix4)arg2;
- (void)loadIdentity:(int)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierPoint3D : TSDGLShaderQualifier

{
    CDStruct_03942939 _GLPoint3DValue;
    CDStruct_03942939 _proposedGLPoint3DValue;
}

@property (nonatomic, readonly) CDStruct_03942939 GLPoint3DValue;
@property (nonatomic) CDStruct_03942939 proposedGLPoint3DValue;

- (id)description;
- (void)setGLUniformWithShader:(id)arg1;

@end

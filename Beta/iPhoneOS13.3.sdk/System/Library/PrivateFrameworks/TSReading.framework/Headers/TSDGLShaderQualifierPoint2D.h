/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierPoint2D : TSDGLShaderQualifier

{
    CDStruct_6e3f967a _GLPoint2DValue;
    CDStruct_6e3f967a _proposedGLPoint2DValue;
}

@property (nonatomic, readonly) CDStruct_6e3f967a GLPoint2DValue;
@property (nonatomic) CDStruct_6e3f967a proposedGLPoint2DValue;

- (id)description;
- (void)setGLUniformWithShader:(id)arg1;

@end

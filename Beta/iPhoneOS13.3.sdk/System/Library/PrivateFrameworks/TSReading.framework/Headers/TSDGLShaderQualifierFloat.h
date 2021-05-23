/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierFloat : TSDGLShaderQualifier

{
    float _GLfloatValue;
    float _proposedGLfloatValue;
}

@property (nonatomic, readonly) float GLfloatValue;
@property (nonatomic) float proposedGLfloatValue;

- (id)description;
- (void)setGLUniformWithShader:(id)arg1;

@end

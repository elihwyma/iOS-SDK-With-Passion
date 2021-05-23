/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierInt : TSDGLShaderQualifier

{
    int _GLintValue;
    int _proposedGLintValue;
}

@property (nonatomic, readonly) int GLintValue;
@property (nonatomic) int proposedGLintValue;

- (id)description;
- (void)setGLUniformWithShader:(id)arg1;

@end

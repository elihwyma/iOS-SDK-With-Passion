/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierPoint4D : TSDGLShaderQualifier

{
    CDStruct_f2e236b6 _GLPoint4DValue;
    CDStruct_f2e236b6 _proposedGLPoint4DValue;
}

@property (nonatomic, readonly) CDStruct_f2e236b6 GLPoint4DValue;
@property (nonatomic) CDStruct_f2e236b6 proposedGLPoint4DValue;

- (id)description;
- (void)setGLUniformWithShader:(id)arg1;

@end

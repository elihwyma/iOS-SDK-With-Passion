/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierMat3 : TSDGLShaderQualifier

{
    struct CGAffineTransform _affineTransform;
    struct CGAffineTransform _proposedAffineTransform;
}

@property (nonatomic, readonly) struct CGAffineTransform affineTransform;
@property (nonatomic) struct CGAffineTransform proposedAffineTransform;

- (id)description;
- (void)setGLUniformWithShader:(id)arg1;
- (id)initWithAffineTransform:(struct CGAffineTransform)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierMat4 : TSDGLShaderQualifier

{
    struct CATransform3D _transform3D;
    struct CATransform3D _proposedTransform3D;
}

@property (nonatomic, readonly) struct CATransform3D transform3D;
@property (nonatomic) struct CATransform3D proposedTransform3D;

- (id)description;
- (void)setGLUniformWithShader:(id)arg1;
- (id)initWithTransform3D:(struct CATransform3D)arg1;

@end

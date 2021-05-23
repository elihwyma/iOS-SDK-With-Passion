/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUGLObject.h>

@class NSDictionary, NSError, NUGLShader;

@interface NUGLProgram : NUGLObject

{
    long long _buildStatus;
    NSError *_buildError;
    NSDictionary *_uniforms;
    NSDictionary *_attributes;
    NUGLShader *_shader;
}

@property (readonly) NUGLShader *shader;
@property (readonly) NSDictionary *uniforms;
@property (readonly) NSDictionary *attributes;

- (id)init;
- (void)delete;
- (void)generate:(id)arg1;
- (id)initWithShader:(id)arg1;
- (_Bool)build:(id)arg1 error:(out id *)arg2;
- (void)_build:(id)arg1;

@end

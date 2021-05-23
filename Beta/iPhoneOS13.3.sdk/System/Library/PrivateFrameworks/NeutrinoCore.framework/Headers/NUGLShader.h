/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUGLObject.h>

@class NSError, NSString;

@interface NUGLShader : NUGLObject

{
    long long _compilationStatus;
    NSError *_compilationError;
    long long _type;
    NSString *_source;
}

@property (readonly) unsigned int glType;
@property (readonly) unsigned int glStage;
@property (readonly) long long type;
@property (readonly) NSString *source;

- (id)init;
- (void)delete;
- (void)generate:(id)arg1;
- (id)initWithType:(long long)arg1 source:(id)arg2;
- (_Bool)compile:(id)arg1 error:(out id *)arg2;
- (void)_compile:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TSDGLShaderQualifier : NSObject

{
    int _uniformLocation;
    _Bool _needsUpdate;
    NSString *_name;
}

@property (nonatomic, readonly) _Bool needsUpdate;
@property (nonatomic) int uniformLocation;
@property (nonatomic, readonly) NSString *name;

- (void)dealloc;
- (id)initWithName:(id)arg1;
- (void)setGLUniformWithShader:(id)arg1;
- (void)setGLUniformCheckWithShader:(id)arg1;
- (void)updateUniformLocationWithShaderProgramObject:(int)arg1;

@end

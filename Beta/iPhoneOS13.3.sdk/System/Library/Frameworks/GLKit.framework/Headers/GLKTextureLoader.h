/*
 Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import <Foundation/NSObject.h>

@class EAGLContext, NSLock;

@interface GLKTextureLoader : NSObject

{
    _Bool _supportsASTC_LDR;
    _Bool _supportsETC2;
    EAGLContext *_glContext;
    NSLock *_nsLock;
}

@property (retain) EAGLContext *glContext;
@property (retain) NSLock *nsLock;
@property _Bool supportsASTC_LDR;
@property _Bool supportsETC2;

+ (id)textureWithName:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 error:(id *)arg5;
+ (id)lockAndSwitchContext:(id)arg1 glContext:(id)arg2;
+ (id)_textureWithTexture:(id)arg1 error:(id *)arg2;
+ (void)unlockAndRestoreContext:(id)arg1 glContext:(id)arg2;
+ (id)_textureWithTextureTXR:(id)arg1 error:(id *)arg2;
+ (id)textureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)commonTextureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)commonTextureWithName:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 error:(id *)arg5 lock:(id)arg6 glContext:(id)arg7;
+ (id)commonTextureWithContentsOfData:(id)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)commonTextureWithCGImage:(struct CGImage *)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)commonCubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)cubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)commonCubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)textureWithContentsOfFile:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)textureWithContentsOfData:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)textureWithCGImage:(struct CGImage *)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)cubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)cubeMapWithContentsOfFile:(id)arg1 options:(id)arg2 error:(id *)arg3;

- (void)dealloc;
- (id)initWithSharegroup:(id)arg1;
- (void)textureWithContentsOfURL:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)textureWithContentsOfFile:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)textureWithName:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 queue:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)textureWithContentsOfData:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)textureWithCGImage:(struct CGImage *)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cubeMapWithContentsOfFile:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

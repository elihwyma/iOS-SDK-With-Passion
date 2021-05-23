/*
 Image: /System/Library/Frameworks/OpenGLES.framework/OpenGLES
 */

#import <Foundation/NSObject.h>

@class EAGLSharegroup, NSString;

@interface EAGLContext : NSObject

{
    struct _EAGLContextPrivate *_private;
    NSString *debugLabel;
}

@property (readonly) unsigned long long API;
@property (readonly) EAGLSharegroup *sharegroup;
@property (copy, nonatomic) NSString *debugLabel;
@property (nonatomic, getter=isMultiThreaded) _Bool multiThreaded;

+ (id)currentContext;
+ (_Bool)setCurrentContext:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithAPI:(unsigned long long)arg1 properties:(id)arg2;
- (struct EAGLMacroContext *)getMacroContextPrivate;
- (unsigned long long)setParameter:(unsigned int)arg1 to:(int *)arg2;
- (_Bool)texImageIOSurface:(struct __IOSurface *)arg1 target:(unsigned long long)arg2 internalFormat:(unsigned long long)arg3 width:(unsigned int)arg4 height:(unsigned int)arg5 format:(unsigned long long)arg6 type:(unsigned long long)arg7 plane:(unsigned int)arg8 invert:(_Bool)arg9;
- (id)initWithAPI:(unsigned long long)arg1;
- (_Bool)presentRenderbuffer:(unsigned long long)arg1 atTime:(double)arg2;
- (_Bool)attachImage:(unsigned long long)arg1 toCoreSurface:(struct __IOSurface *)arg2 invertedRender:(_Bool)arg3;
- (id)initWithAPI:(unsigned long long)arg1 sharegroup:(id)arg2;
- (_Bool)renderbufferStorage:(unsigned long long)arg1 fromDrawable:(id)arg2;
- (unsigned long long)getParameter:(unsigned int)arg1 to:(int *)arg2;
- (_Bool)presentRenderbuffer:(unsigned long long)arg1;
- (_Bool)texImageIOSurface:(struct __IOSurface *)arg1 target:(unsigned long long)arg2 internalFormat:(unsigned long long)arg3 width:(unsigned int)arg4 height:(unsigned int)arg5 format:(unsigned long long)arg6 type:(unsigned long long)arg7 plane:(unsigned int)arg8;
- (_Bool)setBlockFence:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (id)commonInitWithAPI:(unsigned long long)arg1 properties:(id)arg2;
- (id)initWithAPI:(unsigned long long)arg1 sharedWithCompute:(_Bool)arg2;
- (_Bool)presentRenderbuffer:(unsigned long long)arg1 afterMinimumDuration:(double)arg2;
- (void)sendNotification:(unsigned int)arg1 forTransaction:(unsigned int)arg2 onLayer:(unsigned int)arg3;
- (void)swapNotification:(struct __IOMobileFramebuffer *)arg1 forTransaction:(unsigned int)arg2 onLayer:(unsigned int)arg3;
- (struct EAGLMacroContext *)GetMacroContextPrivate;

@end

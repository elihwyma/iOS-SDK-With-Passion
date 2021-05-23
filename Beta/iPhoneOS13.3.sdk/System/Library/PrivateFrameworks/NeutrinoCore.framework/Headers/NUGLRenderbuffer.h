/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUGLObject.h>

@class NUPixelFormat;

@protocol EAGLDrawable;

@interface NUGLRenderbuffer : NUGLObject

{
    id <EAGLDrawable> _drawable;
    NUPixelFormat *_format;
    CDStruct_d58201db _size;
}

@property (nonatomic, readonly) CDStruct_912cb5d2 size;
@property (nonatomic, readonly) NUPixelFormat *format;

- (id)init;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2;
- (void)delete;
- (void)generate:(id)arg1;
- (void)attachToFramebuffer:(id)arg1 atPoint:(unsigned int)arg2 context:(id)arg3;
- (void)detachFromFramebuffer:(id)arg1 atPoint:(unsigned int)arg2 context:(id)arg3;
- (id)initWithDrawable:(id)arg1;
- (void)flushDrawableWithContext:(id)arg1;
- (void)draw:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)read:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)copyRect:(CDStruct_996ac03c)arg1 toBuffer:(id)arg2 atPoint:(CDStruct_912cb5d2)arg3 context:(id)arg4;

@end

/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUGLObject.h>

@class NUPixelFormat;

@interface NUGLTexture : NUGLObject

{
    NUPixelFormat *_format;
    CDStruct_d58201db _size;
}

@property (readonly) _Bool isSurface;
@property (nonatomic, readonly) CDStruct_912cb5d2 size;
@property (nonatomic, readonly) NUPixelFormat *format;

+ (id)textureWithIOSurface:(id)arg1;

- (id)init;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2;
- (void)delete;
- (void)generate:(id)arg1;
- (void)ensure:(id)arg1;
- (void)attachToFramebuffer:(id)arg1 atPoint:(unsigned int)arg2 context:(id)arg3;
- (void)detachFromFramebuffer:(id)arg1 atPoint:(unsigned int)arg2 context:(id)arg3;
- (void)read:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)copyRect:(CDStruct_996ac03c)arg1 toBuffer:(id)arg2 atPoint:(CDStruct_912cb5d2)arg3 context:(id)arg4;
- (id)newRenderDestination;
- (void)allocateStorage:(id)arg1;
- (void)write:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)copyRect:(CDStruct_996ac03c)arg1 fromBuffer:(id)arg2 atPoint:(CDStruct_912cb5d2)arg3 context:(id)arg4;
- (void)copyRect:(CDStruct_996ac03c)arg1 fromTexture:(id)arg2 atPoint:(CDStruct_912cb5d2)arg3 context:(id)arg4;
- (void)copyRect:(CDStruct_996ac03c)arg1 toTexture:(id)arg2 atPoint:(CDStruct_912cb5d2)arg3 context:(id)arg4;
- (void)drawRect:(CDStruct_996ac03c)arg1 atPoint:(CDStruct_912cb5d2)arg2 context:(id)arg3;

@end

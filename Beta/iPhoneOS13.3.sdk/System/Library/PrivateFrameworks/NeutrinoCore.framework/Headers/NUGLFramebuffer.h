/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUGLObject.h>

@class NSMutableDictionary;

@interface NUGLFramebuffer : NUGLObject

{
    NSMutableDictionary *_attachments;
}

- (id)init;
- (void)delete;
- (void)removeAllAttachments;
- (void)generate:(id)arg1;
- (void)read:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)write:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)attach:(id)arg1 to:(unsigned int)arg2;
- (void)detach:(id)arg1 from:(unsigned int)arg2;
- (void)useWithTarget:(unsigned int)arg1 context:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)bind:(unsigned int)arg1 context:(id)arg2;
- (void)unbind:(unsigned int)arg1 context:(id)arg2;

@end

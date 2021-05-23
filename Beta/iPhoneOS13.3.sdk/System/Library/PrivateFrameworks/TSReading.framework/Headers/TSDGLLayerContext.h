/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class EAGLContext, NSString;

@interface TSDGLLayerContext : NSObject

{
    EAGLContext *mContext;
    unsigned int mRenderbuffer;
    unsigned int mFramebuffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)isValid;
- (void)lock;
- (void)unlock;
- (void)teardown;
- (_Bool)makeCurrentContext;
- (_Bool)createFramebufferFromLayer:(id)arg1;
- (void)presentRenderbuffer;

@end

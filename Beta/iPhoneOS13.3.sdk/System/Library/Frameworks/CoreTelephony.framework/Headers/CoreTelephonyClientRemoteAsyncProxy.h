/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSProxy.h>

@class NSObject, NSString;

@protocol CTXPCServiceInterface;

__attribute__((visibility("hidden")))
@interface CoreTelephonyClientRemoteAsyncProxy : NSProxy

{
    NSObject<CTXPCServiceInterface> *_target;
    struct queue _userQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id).cxx_construct;
- (id)initWithXPCObject:(id)arg1 userQueue:(struct queue)arg2 errorHandler:(CDUnknownBlockType)arg3;

@end

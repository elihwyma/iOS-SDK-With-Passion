/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <HMFoundation/__HMFMessageHandler.h>

__attribute__((visibility("hidden")))
@interface __HMFBlockMessageHandler : __HMFMessageHandler

{
    CDUnknownBlockType _handler;
}

@property (copy, readonly) CDUnknownBlockType handler;

- (_Bool)invokeWithMessage:(id)arg1;

@end

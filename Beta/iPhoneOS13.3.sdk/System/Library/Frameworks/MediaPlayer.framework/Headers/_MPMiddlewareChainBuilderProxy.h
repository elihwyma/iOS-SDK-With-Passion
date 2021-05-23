/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSProxy.h>

@class Protocol;

@interface _MPMiddlewareChainBuilderProxy : NSProxy

{
    Protocol *_protocol;
}

+ (id)allocWithProtocol:(id)arg1;

- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (struct objc_method_description)_methodDescriptionFromProtocol:(id)arg1 selector:(SEL)arg2;
- (struct objc_method_description)_methodDescriptionFromProtocolHierarchy:(id)arg1 selector:(SEL)arg2;

@end

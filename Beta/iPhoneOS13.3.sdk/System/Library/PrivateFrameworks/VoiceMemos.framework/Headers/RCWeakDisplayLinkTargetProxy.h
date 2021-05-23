/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <VoiceMemos/RCDisplayLinkTargetProxy.h>

@class RCWeakRef;

__attribute__((visibility("hidden")))
@interface RCWeakDisplayLinkTargetProxy : RCDisplayLinkTargetProxy

{
    RCWeakRef *_weakTarget;
    SEL _weakTargetSelector;
}

- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)displayLinkFired:(id)arg1;

@end

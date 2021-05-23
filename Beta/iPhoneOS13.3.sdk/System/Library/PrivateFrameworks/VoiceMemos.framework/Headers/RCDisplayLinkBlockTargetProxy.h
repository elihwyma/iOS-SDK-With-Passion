/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <VoiceMemos/RCDisplayLinkTargetProxy.h>

__attribute__((visibility("hidden")))
@interface RCDisplayLinkBlockTargetProxy : RCDisplayLinkTargetProxy

{
    CDUnknownBlockType _handlerBlock;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType handlerBlock;

- (void)dealloc;
- (void)displayLinkFired:(id)arg1;
- (id)initWithHandlerBlock:(CDUnknownBlockType)arg1;

@end

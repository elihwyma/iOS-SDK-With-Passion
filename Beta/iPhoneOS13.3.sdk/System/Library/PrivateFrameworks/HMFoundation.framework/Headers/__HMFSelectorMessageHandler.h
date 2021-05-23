/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <HMFoundation/__HMFMessageHandler.h>

__attribute__((visibility("hidden")))
@interface __HMFSelectorMessageHandler : __HMFMessageHandler

{
    SEL _selector;
}

@property (readonly) SEL selector;

- (_Bool)isEqual:(id)arg1;
- (_Bool)invokeWithMessage:(id)arg1;

@end

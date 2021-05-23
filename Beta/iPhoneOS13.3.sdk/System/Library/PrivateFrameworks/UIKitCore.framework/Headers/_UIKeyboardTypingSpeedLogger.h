/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIKeyboardTypingSpeedLogger : NSObject

{
    long long _typingDelaySamples[7];
    long long _typingDelaySampleCount;
}

- (id)init;
- (void)logToAggregate;
- (void)recordTypingDelay:(double)arg1;

@end

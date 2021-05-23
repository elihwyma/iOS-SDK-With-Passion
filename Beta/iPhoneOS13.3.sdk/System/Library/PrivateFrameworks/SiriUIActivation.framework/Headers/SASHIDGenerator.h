/*
 Image: /System/Library/PrivateFrameworks/SiriUIActivation.framework/SiriUIActivation
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface SASHIDGenerator : NSObject

{
    struct __IOHIDEventSystemClient *_ioSystemClient;
    NSObject<OS_dispatch_queue> *_generatorQueue;
}

- (id)init;
- (void)dealloc;
- (void)_sendHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)_sendHIDHoldHomeButton;
- (void)_sendHIDHoldLockButton;
- (void)sendHoldHomeButtonHIDEvents;
- (void)sendHoldLockButtonHIDEvents;

@end

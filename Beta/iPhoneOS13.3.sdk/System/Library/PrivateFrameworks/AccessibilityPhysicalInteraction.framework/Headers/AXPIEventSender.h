/*
 Image: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface AXPIEventSender : NSObject

{
    struct __IOHIDEventSystemClient *_ioSystemPostBackClient;
    NSObject<OS_dispatch_queue> *_eventSendingQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void)sendEventRepresentation:(id)arg1;

@end

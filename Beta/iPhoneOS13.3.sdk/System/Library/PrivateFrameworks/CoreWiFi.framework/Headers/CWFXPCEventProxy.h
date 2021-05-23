/*
 Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol CWFXPCEventProxyDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CWFXPCEventProxy : NSObject

{
    NSObject<OS_dispatch_queue> *_mutex;
    NSMutableDictionary *_mutableEventAckMap;
    id <CWFXPCEventProxyDelegate> _delegate;
}

@property id <CWFXPCEventProxyDelegate> delegate;

- (id)init;
- (void)__acknowledgeEventWithUUID:(id)arg1;
- (void)receivedXPCEvent:(id)arg1;
- (void)receivedAcknowledgedXPCEvent:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end

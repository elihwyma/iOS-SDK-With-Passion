/*
 Image: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface FudInternalConnection : NSObject

{
    NSString *clientIdentifier;
    NSObject<OS_dispatch_queue> *handlerQueue;
    CDUnknownBlockType messageHandler;
    NSMutableDictionary *pendingRequests;
    _Bool didStop;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stop;
- (void)sendMessageToFud:(id)arg1;
- (void)sendMessageToFud:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)initWithClientIdentifier:(id)arg1 handlerQueue:(id)arg2 messageHandler:(CDUnknownBlockType)arg3;
- (void)handleInboundNotification:(id)arg1;
- (long long)getNextMessageID;

@end

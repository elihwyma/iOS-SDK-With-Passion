/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface AFUserNotificationProvider : NSObject

{
    NSXPCConnection *_connection;
    NSMutableDictionary *_responseHandlersByNotificationID;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (id)_connection;
- (void)withdrawNotificationRequestWithIdentifier:(id)arg1;
- (void)receivedNotificationResponse:(id)arg1;
- (void)postNotificationRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;

@end

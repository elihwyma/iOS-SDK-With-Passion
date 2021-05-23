/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue, OS_xpc_object;

@interface AFSiriTether : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    _Bool _isAttached;
    CDUnknownBlockType _attachmentStatusChangedHandler;
    NSMutableArray *_pendingEvents;
    int _notifyToken;
}

- (id)init;
- (void)dealloc;
- (id)_connection;
- (void)attach:(CDUnknownBlockType)arg1;
- (void)_logEvent:(id)arg1;
- (void)_attach:(CDUnknownBlockType)arg1;
- (void)_connectionInterrupted:(id)arg1;
- (void)_connectionInvalid:(id)arg1;
- (void)_attachmentStatusUpdate:(_Bool)arg1;
- (void)_listenForLaunchNotification;
- (void)waitForAttachment:(double)arg1;
- (void)setAttachmentStatusChangedHandler:(CDUnknownBlockType)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface BRUITestMessageCenter : NSObject

{
    NSMutableDictionary *_pendingReplies;
    NSMutableDictionary *_messageHandlers;
    NSObject<OS_dispatch_queue> *_messageQueue;
    _Bool _started;
    _Bool _isSender;
}

+ (id)defaultCenter;

- (id)init;
- (id)_init;
- (void)stop;
- (void)didReceiveMessage:(id)arg1;
- (void)setHandler:(id)arg1 forMessageNamed:(id)arg2;
- (void)_sendMessageNamed:(id)arg1 userInfo:(id)arg2 isReply:(_Bool)arg3 messageUUID:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)startSender;
- (void)startReceiver;
- (void)sendMessageNamed:(id)arg1 userInfo:(id)arg2 reply:(CDUnknownBlockType)arg3;

@end

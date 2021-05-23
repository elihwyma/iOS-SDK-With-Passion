/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

@interface CSVoiceIdXPCConnection : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;

- (id)initWithConnection:(id)arg1;
- (void)_handleClientEvent:(id)arg1;
- (void)_handleClientMessage:(id)arg1 client:(id)arg2;
- (void)_handleClientError:(id)arg1 client:(id)arg2;
- (void)_sendReplyMessageWithResult:(_Bool)arg1 error:(id)arg2 event:(id)arg3 client:(id)arg4;
- (void)activateConnection;

@end

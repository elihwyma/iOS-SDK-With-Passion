/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <Foundation/NSObject.h>

@class IDSService, NSMutableDictionary, NSString;

@protocol NMRIDSMessageCenterDelegate, OS_dispatch_queue;

@interface NMRIDSMessageCenter : NSObject

{
    NSObject<OS_dispatch_queue> *_idsQueue;
    IDSService *_idsService;
    NSMutableDictionary *_messageHandlers;
    id <NMRIDSMessageCenterDelegate> _delegate;
}

@property (weak, nonatomic) id <NMRIDSMessageCenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (_Bool)_sendMessageWithProtobufData:(id)arg1 messageType:(unsigned short)arg2 priority:(unsigned long long)arg3 timeout:(double)arg4 bypassDuet:(_Bool)arg5 skipStorage:(_Bool)arg6 isResponse:(_Bool)arg7 additionalOptions:(id)arg8 resultingMessageIdentifier:(id *)arg9 error:(id *)arg10;
- (void)setMessageHandlerTarget:(id)arg1 action:(SEL)arg2 forIncomingMessagesOfType:(unsigned short)arg3;
- (void)startHandlingMessages;
- (_Bool)sendMessageWithProtobufData:(id)arg1 messageType:(unsigned short)arg2 priority:(unsigned long long)arg3 timeout:(double)arg4 bypassDuet:(_Bool)arg5 skipStorage:(_Bool)arg6 expectReply:(_Bool)arg7 queueOneIdentifier:(id)arg8 resultingMessageIdentifier:(id *)arg9 error:(id *)arg10;
- (_Bool)sendMessageWithProtobufData:(id)arg1 messageType:(unsigned short)arg2 priority:(unsigned long long)arg3 timeout:(double)arg4 bypassDuet:(_Bool)arg5 skipStorage:(_Bool)arg6 inReplyTo:(id)arg7 resultingMessageIdentifier:(id *)arg8 error:(id *)arg9;

@end

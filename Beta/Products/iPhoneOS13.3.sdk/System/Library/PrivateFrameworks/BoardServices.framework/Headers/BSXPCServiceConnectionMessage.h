/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

@interface BSXPCServiceConnectionMessage : BSXPCCoder <BSInvalidatable, BSXPCServiceConnectionMessage> {
    id /* block */  _completion;
    <BSServiceDispatchingQueue> * _replyQueue;
    int  _sendFlag;
    NSObject<OS_dispatch_queue> * _targetQueue;
}

@property (nonatomic) unsigned long long childIdentifier;
@property (nonatomic) bool childIdentifierIsRemotelyDefined;
@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *messageID;
@property (nonatomic, retain) <BSServiceDispatchingQueue> *replyQueue;
@property (nonatomic, retain) NSString *selectorName;
@property (readonly) Class superclass;

+ (id)messageWithXPCConnection:(id)arg1 targetQueue:(id)arg2;

- (void).cxx_destruct;
- (bool)_sendSynchronously:(bool)arg1;
- (unsigned long long)childIdentifier;
- (bool)childIdentifierIsRemotelyDefined;
- (id /* block */)completion;
- (id)createReply;
- (bool)expectsReply;
- (id)initWithMessage:(id)arg1;
- (id)initWithXPCConnection:(id)arg1 targetQueue:(id)arg2;
- (void)invalidate;
- (id)messageID;
- (id)replyQueue;
- (id)selectorName;
- (bool)send;
- (bool)sendSynchronously;
- (id)sendSynchronouslyWithError:(out id*)arg1;
- (void)setChildIdentifier:(unsigned long long)arg1;
- (void)setChildIdentifierIsRemotelyDefined:(bool)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setMessageID:(id)arg1;
- (void)setReplyQueue:(id)arg1;
- (void)setSelectorName:(id)arg1;

@end
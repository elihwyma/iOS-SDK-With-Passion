/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/__NSCFLocalSessionTask.h>

@class NSData, NSError, NSMutableArray, NSString;

@interface __NSURLSessionWebSocketTask : __NSCFLocalSessionTask

{
    _Bool _webSocketHandshakeCompleted;
    _Bool _readInProgress;
    int _pingSeed;
    long long _maximumMessageSize;
    long long _closeCode;
    NSData *_closeReason;
    NSMutableArray *_pendingSendWork;
    NSMutableArray *_pendingReceiveWork;
    NSMutableArray *_highPriorityPendingWork;
    NSMutableArray *_delegateWork;
    NSError *_webSocketError;
    NSString *_protocolPicked;
}

@property (retain) NSMutableArray *pendingSendWork;
@property (retain) NSMutableArray *pendingReceiveWork;
@property (retain) NSMutableArray *highPriorityPendingWork;
@property (retain) NSMutableArray *delegateWork;
@property int pingSeed;
@property _Bool webSocketHandshakeCompleted;
@property _Bool readInProgress;
@property (retain) NSError *webSocketError;
@property (retain) NSString *protocolPicked;
@property long long maximumMessageSize;
@property (readonly) long long closeCode;
@property (copy, readonly) NSData *closeReason;

- (void)dealloc;
- (_Bool)isKindOfClass:(Class)arg1;
- (void)cancel;
- (void)_onqueue_checkForCompletion;
- (id)initWithOriginalRequest:(id)arg1 ident:(unsigned long long)arg2 taskGroup:(id)arg3;
- (void)_onqueue_cancel;
- (void)_onqueue_didReceiveResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)connection:(id)arg1 didFinishLoadingWithError:(id)arg2;
- (void)_onqueue_resume;
- (void)_onqueue_ioTick;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)receiveMessageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)sendPingWithPongReceiveHandler:(CDUnknownBlockType)arg1;
- (void)cancelWithCloseCode:(long long)arg1 reason:(id)arg2;
- (void)_onqueue_enableWebSocketFraming:(id)arg1;
- (void)_onqueue_pingWithPongHandler:(CDUnknownBlockType)arg1;
- (void)_onqueue_sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_onqueue_receiveMessageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_onqueue_cancelWithCloseCode:(long long)arg1 reason:(id)arg2;
- (void)_onqueue_cancelWebSocketTaskWithError:(long long)arg1;
- (void)_onqueue_handshakeFailureWithReason:(unsigned long long)arg1;
- (_Bool)_onqueue_validateWebSocketHandshake;

@end

/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/NSURLSessionTask.h>

@class NSData;

@interface NSURLSessionWebSocketTask : NSURLSessionTask

{
    long long _maximumMessageSize;
    long long _closeCode;
    NSData *_closeReason;
}

@property long long maximumMessageSize;
@property (readonly) long long closeCode;
@property (copy, readonly) NSData *closeReason;

- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)receiveMessageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)sendPingWithPongReceiveHandler:(CDUnknownBlockType)arg1;
- (void)cancelWithCloseCode:(long long)arg1 reason:(id)arg2;

@end

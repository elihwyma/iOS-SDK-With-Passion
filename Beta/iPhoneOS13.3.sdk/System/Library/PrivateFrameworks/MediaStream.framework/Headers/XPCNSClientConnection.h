/*
 Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

#import <Foundation/NSObject.h>

@class NSString, XPCClientConnection;

@protocol XPCNSClientConnectionDelegate;

@interface XPCNSClientConnection : NSObject

{
    XPCClientConnection *_clientConnection;
    id <XPCNSClientConnectionDelegate> _delegate;
}

@property (nonatomic, readonly) id <XPCNSClientConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithServiceName:(id)arg1 delegate:(id)arg2;
- (void)shutDownCompletionBlock:(CDUnknownBlockType)arg1;
- (void)XPCClientConnection:(id)arg1 didReceiveRequest:(id)arg2;
- (void)sendMessage:(id)arg1 data:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)sendMessageReliably:(id)arg1 data:(id)arg2 maxRetryCount:(int)arg3 withHandler:(CDUnknownBlockType)arg4;

@end

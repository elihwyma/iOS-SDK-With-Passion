//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaStream/XPCClientConnectionDelegate-Protocol.h>

@class XPCClientConnection;
@protocol XPCNSClientConnectionDelegate;

@interface XPCNSClientConnection : NSObject <XPCClientConnectionDelegate>
{
    XPCClientConnection *_clientConnection;
    id <XPCNSClientConnectionDelegate> _delegate;
}

@property(readonly, nonatomic) id <XPCNSClientConnectionDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)XPCClientConnection:(id)arg1 didReceiveRequest:(id)arg2;
- (void)shutDownCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)sendMessageReliably:(id)arg1 data:(id)arg2 maxRetryCount:(int)arg3 withHandler:(id /* CDUnknownBlockType */)arg4;
- (void)sendMessage:(id)arg1 data:(id)arg2 withHandler:(id /* CDUnknownBlockType */)arg3;
- (id)initWithServiceName:(id)arg1 delegate:(id)arg2;

@end


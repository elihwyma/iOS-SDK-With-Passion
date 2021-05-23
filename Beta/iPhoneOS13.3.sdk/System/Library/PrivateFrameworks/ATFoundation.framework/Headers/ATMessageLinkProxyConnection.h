/*
 Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

#import <Foundation/NSObject.h>

#import <ATFoundation/Swift-Protocol.h>

@class ATMessageLink, NSString, NSXPCConnection;

@interface ATMessageLinkProxyConnection : NSObject <Swift>

{
    NSXPCConnection *_connection;
    ATMessageLink *_messageLink;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) ATMessageLink *messageLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)stop;
- (void)sendResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)connectWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addRequestHandler:(id)arg1 forDataClass:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeRequestHandlerForDataClass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)messageLinkWasOpened:(id)arg1;
- (void)messageLinkWasInitialized:(id)arg1;
- (void)messageLinkWasClosed:(id)arg1;
- (void)messageLink:(id)arg1 didReceiveRequest:(id)arg2;
- (id)initWithMessageLink:(id)arg1 connection:(id)arg2;

@end

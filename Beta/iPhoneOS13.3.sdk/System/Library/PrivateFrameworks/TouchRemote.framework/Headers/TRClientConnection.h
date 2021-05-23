/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <TouchRemote/TRConnection.h>

@class SFSession;

@interface TRClientConnection : TRConnection

{
    SFSession *_session;
}

@property (retain) SFSession *session;

- (void)invalidate;
- (void)setInvalidationHandler:(CDUnknownBlockType)arg1;
- (void)setInterruptionHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)interruptionHandler;
- (CDUnknownBlockType)invalidationHandler;
- (void)sendResponse:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)sendRequest:(id)arg1;
- (void)setEventMessageHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)eventMessageHandler;
- (CDUnknownBlockType)requestMessageHandler;
- (void)setRequestMessageHandler:(CDUnknownBlockType)arg1;
- (void)connectToNearbyDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end

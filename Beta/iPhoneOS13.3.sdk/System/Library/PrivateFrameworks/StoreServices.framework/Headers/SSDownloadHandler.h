/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, SSXPCConnection;

@protocol OS_dispatch_queue, SSDownloadHandlerDelegate;

@interface SSDownloadHandler : NSObject

{
    SSXPCConnection *_controlConnection;
    id <SSDownloadHandlerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_downloadPhasesToIgnore;
    long long _handlerID;
    SSXPCConnection *_observerConnection;
    _Bool _sessionsNeedPowerAssertion;
    _Bool _sessionsShouldBlockOtherDownloads;
}

@property (readonly) long long handlerIdentifier;
@property id <SSDownloadHandlerDelegate> delegate;
@property (copy) NSArray *downloadPhasesToIgnore;
@property _Bool sessionsNeedPowerAssertion;
@property _Bool sessionsShouldBlockOtherDownloads;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)_setValue:(id)arg1 forProperty:(const char *)arg2;
- (void)_connectToDaemon;
- (void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2;
- (void)_sendDisconnectMessage;
- (_Bool)_sendAuthenticationSessionWithMessage:(id)arg1;
- (_Bool)_sendSessionHandleWithMessage:(id)arg1;
- (_Bool)_sendSessionCancelWithMessage:(id)arg1;
- (_Bool)_sendSessionPauseWithMessage:(id)arg1;
- (id)_controlConnection;
- (id)_newSessionWithMessage:(id)arg1;
- (void)resetDisavowedSessions;

@end

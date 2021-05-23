/*
 Image: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection, TCSCall;

@protocol TCSCallCenterDelegate;

@interface TCSCallCenter : NSObject

{
    NSXPCConnection *_connection;
    TCSCall *_call;
    id <TCSCallCenterDelegate> _delegate;
}

@property (weak, nonatomic) id <TCSCallCenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (_Bool)hasValidConnection;
- (void)disconnectCall:(id)arg1;
- (void)applicationWillEnterForeground;
- (id)activeCall;
- (id)currentCall;
- (void)sessionViewControllerViewDidAppear;
- (void)setUplinkMuted:(_Bool)arg1 for:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)queryIsTinCannable:(id)arg1;
- (void)callConnected:(id)arg1;
- (void)callStatusChanged:(id)arg1;
- (void)remoteUplinkMuteChanged:(id)arg1;
- (void)synchronouslyFetchCall;
- (id)_callPassingPredicate:(CDUnknownBlockType)arg1;
- (id)ringingCall;
- (id)endingCall;
- (void)logEntryForCallWithUniqueProxyIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/_RWIRelayClientConnection.h>

@class NSString, _RWITCPConnection;

__attribute__((visibility("hidden")))
@interface _RWIRelayClientTCPConnection : _RWIRelayClientConnection

{
    _RWITCPConnection *_connection;
}

@property (retain, nonatomic) _RWITCPConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)connectionFromTCPConnection:(id)arg1 delegate:(id)arg2;
+ (id)connectionFromLockdownCheckinWithInfo:(void *)arg1 delegate:(id)arg2;

- (void)sendMessage:(id)arg1;
- (void)closeInternal;
- (id)initWithTCPConnection:(id)arg1 delegate:(id)arg2;
- (void)tcpConnection:(id)arg1 didReceiveMessage:(id)arg2;
- (void)tcpConnectionDidClose:(id)arg1;

@end

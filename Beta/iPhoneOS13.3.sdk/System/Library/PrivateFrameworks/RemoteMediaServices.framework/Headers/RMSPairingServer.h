/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, RMSPairingServerDelegate;

__attribute__((visibility("hidden")))
@interface RMSPairingServer : NSObject

{
    struct __CFDictionary *_HTTPServerConnections;
    struct _CFHTTPServer *_HTTPServer;
    NSObject<OS_dispatch_queue> *_HTTPServerQueue;
    NSString *_expectedPasscodeHash;
    NSString *_successfulPairingGUID;
    NSString *_successfulPairingServiceName;
    NSString *_advertisedDeviceName;
    NSString *_advertisedDeviceModel;
    unsigned short _port;
    id <RMSPairingServerDelegate> _delegate;
}

@property (weak, nonatomic) id <RMSPairingServerDelegate> delegate;
@property (nonatomic, readonly) unsigned short port;

- (void)stopServer;
- (_Bool)startServerWithExpectedPasscodeHash:(id)arg1 advertisedDeviceName:(id)arg2 advertisedDeviceModel:(id)arg3;
- (id)_parsedQueryParametersWithQueryString:(id)arg1;
- (void)handleHTTPServerInvalidated;
- (void)handleHTTPServerDidReceiveError:(struct __CFError *)arg1;
- (void)handleHTTPServerDidOpenConnection:(struct _CFHTTPServerConnection *)arg1;
- (void)handleHTTPServerDidCloseConnection:(struct _CFHTTPServerConnection *)arg1;
- (void)handleHTTPServerConnectionInvalidated;
- (void)handleHTTPServerConnectionDidReceiveError:(struct __CFError *)arg1;
- (void)handleHTTPServerConnectionDidReceiveRequest:(struct _CFHTTPServerRequest *)arg1;
- (void)handleHTTPServerConnectionDidReplyToRequest:(struct _CFHTTPServerRequest *)arg1 withResponse:(struct _CFHTTPServerResponse *)arg2;
- (void)handleHTTPServerConnectionDidFailToReplyToRequest:(struct _CFHTTPServerRequest *)arg1 withResponse:(struct _CFHTTPServerResponse *)arg2;

@end

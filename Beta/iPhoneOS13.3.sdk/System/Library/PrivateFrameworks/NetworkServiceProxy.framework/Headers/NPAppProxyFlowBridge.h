/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <Foundation/NSObject.h>

@class NEAppProxyFlow, NSError, NWEndpoint;

@protocol OS_dispatch_queue, OS_nw_connection;

@interface NPAppProxyFlowBridge : NSObject

{
    int _currentState;
    NEAppProxyFlow *_flow;
    NWEndpoint *_remoteEndpoint;
    NSObject<OS_nw_connection> *_connection;
    NSError *_connectionError;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) NEAppProxyFlow *flow;
@property (retain) NWEndpoint *remoteEndpoint;
@property (retain) NSObject<OS_nw_connection> *connection;
@property (retain) NSError *connectionError;
@property int currentState;
@property (retain) NSObject<OS_dispatch_queue> *queue;

- (void)startConnection;
- (void)readDataFromClient;
- (void)readMultipleFromClient;
- (void)readMultipleFromConnection;
- (void)readDataFromConnection;
- (void)writeMultipleToConnection:(id *)arg1 count:(unsigned int)arg2;
- (void)writeDataToConnection:(id)arg1;
- (id)initWithAppProxyFlow:(id)arg1;

@end

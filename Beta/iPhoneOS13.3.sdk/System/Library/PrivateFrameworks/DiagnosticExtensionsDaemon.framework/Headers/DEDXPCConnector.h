/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@class DEDXPCInbound, NSString, NSXPCConnection, NSXPCListener;

@protocol DEDXPCConnectorDaemonDelegate, OS_os_log;

@interface DEDXPCConnector : NSObject

{
    _Bool _isDaemon;
    _Bool _started;
    NSXPCConnection *_connection;
    id <DEDXPCConnectorDaemonDelegate> _daemonDelegate;
    NSObject<OS_os_log> *_log;
    DEDXPCInbound *_inbound;
    NSXPCListener *_listener;
    unsigned long long _connType;
}

@property (retain) NSObject<OS_os_log> *log;
@property (retain) DEDXPCInbound *inbound;
@property (retain) NSXPCConnection *connection;
@property (retain) NSXPCListener *listener;
@property unsigned long long connType;
@property _Bool isDaemon;
@property _Bool started;
@property (weak) id <DEDXPCConnectorDaemonDelegate> daemonDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)start;
- (void)configureXPCInbound:(id)arg1;
- (void)configureConnectionType:(unsigned long long)arg1;
- (void)configureDaemonModeWithDelegate:(id)arg1;
- (void)startForDaemon;
- (void)startForApp;
- (_Bool)validateConnection:(id)arg1;
- (id)_whitelistedXPCInterface;
- (id)connectionWithEndpoint:(id)arg1 forMachService:(id)arg2;

@end

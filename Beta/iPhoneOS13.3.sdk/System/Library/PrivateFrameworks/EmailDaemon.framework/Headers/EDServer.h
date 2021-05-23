/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDDaemonInterfaceFactory, NSMutableArray, NSString, NSXPCListener, NSXPCListenerEndpoint;

@interface EDServer : NSObject

{
    NSXPCListener *_listener;
    NSMutableArray *_connectedClients;
    EDDaemonInterfaceFactory *_daemonInterfaceFactory;
}

@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSMutableArray *connectedClients;
@property (retain, nonatomic) EDDaemonInterfaceFactory *daemonInterfaceFactory;
@property (nonatomic, readonly) NSXPCListenerEndpoint *serverXPCEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)start;
- (void)test_tearDown;
- (id)initWithDaemonInterfaceFactory:(id)arg1 listener:(id)arg2;
- (void)removeRemoteClient:(id)arg1;
- (void)addRemoteClient:(id)arg1;
- (id)initWithDaemonInterfaceFactory:(id)arg1;

@end

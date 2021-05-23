/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSXPCInterface, NSXPCListener, Protocol;

@interface SLServiceListener : NSObject

{
    Class _sessionClass;
    Protocol *_serviceProtocol;
    NSXPCInterface *_clientInterface;
    NSXPCListener *_listener;
    NSString *_persistentStoreName;
    NSString *_managedObjectModelPath;
    NSArray *_allowedEntitlements;
    NSString *_serviceName;
}

@property (retain) NSString *serviceName;
@property (retain) NSXPCInterface *clientInterface;
@property (retain) NSString *persistentStoreName;
@property (retain) NSString *managedObjectModelPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (_Bool)_verifyAuthorizationForConnection:(id)arg1;
- (id)initWithExportedSessionClass:(Class)arg1 serviceProtocol:(id)arg2;
- (void)restrictToClientsWithEntitlements:(id)arg1;
- (void)beginAcceptingConnections;

@end

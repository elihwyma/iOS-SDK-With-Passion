/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEONavigationServer, NSString, NSXPCListener;

@interface GEONavdServer : NSObject

{
    NSXPCListener *_pushNavigationStateListener;
    NSXPCListener *_getNavigationStateListener;
    NSXPCListener *_monitorDestinationListener;
    GEONavigationServer *_navigationServer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end

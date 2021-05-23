/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <NSObject.h>

@class NSMapTable, NSMutableArray, NSString, NSXPCListener;

@interface ATXPCListener : NSObject

{
    NSXPCListener *_xpcListener;
    NSMutableArray *_connections;
    NSMapTable *_proxyMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)run;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)stop;
- (id)connections;
- (id)proxyForConnection:(id)arg1;

@end

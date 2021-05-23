/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEONavdClientInfo, NSMutableDictionary, NSXPCConnection;

@interface GEONavdPeer : NSObject

{
    NSXPCConnection *_connection;
    NSMutableDictionary *_entitlementCache;
    GEONavdClientInfo *_clientInfo;
    _Bool _expectingUpdates;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic, readonly) GEONavdClientInfo *clientInfo;
@property (nonatomic) _Bool expectingUpdates;

- (void)dealloc;
- (id)initWithXPCConnection:(id)arg1;
- (_Bool)hasEntitlement:(id)arg1;
- (void)updateConnection:(id)arg1;

@end

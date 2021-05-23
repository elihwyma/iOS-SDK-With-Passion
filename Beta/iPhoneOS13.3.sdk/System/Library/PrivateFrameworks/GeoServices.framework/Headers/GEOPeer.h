/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEODaemon, GEOProxyClient, NSMutableDictionary, NSString;

@protocol NSObject, OS_xpc_object;

@interface GEOPeer : NSObject

{
    GEODaemon *_daemon;
    NSObject<OS_xpc_object> *_connection;
    GEOProxyClient *_clientIdentifier;
    _Bool _preloading;
    _Bool _preloadingExclusively;
    NSString *_peerID;
    NSString *_debugIdentifier;
    NSMutableDictionary *_entitlementCache;
    id <NSObject> _peerTransaction;
    id <NSObject> _preloadingTransaction;
}

@property (copy, nonatomic) NSString *debugIdentifier;
@property (retain, nonatomic) NSMutableDictionary *entitlementCache;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *connection;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) NSString *peerID;
@property (nonatomic) _Bool preloading;
@property (nonatomic) _Bool preloadingExclusively;
@property (nonatomic, readonly) _Bool isLocationd;
@property (nonatomic, readonly) GEOProxyClient *clientIdentifier;

- (void)dealloc;
- (id)description;
- (_Bool)hasEntitlement:(id)arg1;
- (void)_handleEvent:(id)arg1;
- (id)initWithConnection:(id)arg1 daemon:(id)arg2;

@end

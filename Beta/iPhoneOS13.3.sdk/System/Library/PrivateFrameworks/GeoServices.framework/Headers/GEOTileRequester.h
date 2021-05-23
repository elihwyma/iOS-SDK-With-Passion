/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOResourceManifestManager, GEOTileRequest, NSString, NSThread;

@protocol GEOTileRequesterDelegate, OS_dispatch_queue;

@interface GEOTileRequester : NSObject

{
    GEOTileRequest *_tileRequest;
    id <GEOTileRequesterDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id _context;
    NSThread *_thread;
    NSString *_deviceCountry;
    NSString *_deviceRegion;
}

@property (nonatomic, readonly) GEOResourceManifestManager *resourceManifestManager;
@property (nonatomic, readonly) GEOTileRequest *tileRequest;
@property (weak, nonatomic, readonly) id <GEOTileRequesterDelegate> delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) id context;
@property (retain, nonatomic) NSString *deviceCountry;
@property (retain, nonatomic) NSString *deviceRegion;

+ (unsigned char)tileProviderIdentifier;
+ (unsigned long long)expiringTilesetsCount;
+ (CDStruct_e4886f83 *)newExpiringTilesets;
+ (_Bool)skipNetworkForKeysWhenPreloading:(id)arg1;

- (id)init;
- (void)cancel;
- (void)start;
- (void)tearDown;
- (id)initWithTileRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3;
- (id)activeTileSetForKey:(const struct _GEOTileKey *)arg1;
- (void)cancelKey:(const struct _GEOTileKey *)arg1;
- (void)reprioritizeKey:(const struct _GEOTileKey *)arg1 newPriority:(unsigned int)arg2;
- (unsigned int)tileSetForKey:(const struct _GEOTileKey *)arg1;

@end

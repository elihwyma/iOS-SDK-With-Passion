/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEOTileCache, NSString, geo_isolater;

@protocol OS_dispatch_source;

@interface MKTileOverlay : NSObject

{
    NSString *_URLTemplate;
    struct CGSize _tileSize;
    _Bool _geometryFlipped;
    long long _minimumZ;
    long long _maximumZ;
    _Bool _canReplaceMapContent;
    unsigned int _providerID;
    GEOTileCache *_tileCache;
    GEOTileCache *_minimumLifetimeTileCache;
    geo_isolater *_minimumLifetimeTileCacheEvictionTimerIsolation;
    NSObject<OS_dispatch_source> *_minimumLifetimeTileCacheEvictionTimer;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
    _Bool _needsAdditionalMinimumLifetimeCleanup;
}

@property struct CGSize tileSize;
@property (getter=isGeometryFlipped) _Bool geometryFlipped;
@property long long minimumZ;
@property long long maximumZ;
@property (readonly) NSString *URLTemplate;
@property (nonatomic) _Bool canReplaceMapContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CLLocationCoordinate2D coordinate;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) CDStruct_02837cd9 boundingMapRect;

- (id)init;
- (void)dealloc;
- (void)_receivedMemoryNotification;
- (id)initWithURLTemplate:(id)arg1;
- (void)_assignProviderID;
- (id)URLForTilePath:(CDStruct_cbb88d5e)arg1;
- (void)_scheduleMinLifetimeCacheCleanupIfNecessary;
- (void)_minLifetimeCacheCleanupFired;
- (int)_zoomLevelForScale:(double)arg1;
- (struct _GEOTileKey)_keyForPath:(CDStruct_cbb88d5e)arg1;
- (void)loadTileAtPath:(CDStruct_cbb88d5e)arg1 result:(CDUnknownBlockType)arg2;
- (void)_loadTile:(const struct _GEOTileKey *)arg1 result:(CDUnknownBlockType)arg2;
- (id)_tilesInMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2 contentScale:(double)arg3;
- (void)_flushCaches;

@end

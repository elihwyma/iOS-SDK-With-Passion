/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class GEOComposedRoute, NSObject;

@protocol GEORoutePreloadSessionDelegate, OS_os_log;

@protocol GEORoutePreloadSession <Swift>

@property (nonatomic, readonly) GEOComposedRoute *route;
@property (weak, nonatomic) id <GEORoutePreloadSessionDelegate> delegate;
@property (nonatomic) unsigned long long networkQuality;
@property (nonatomic, readonly) NSObject<OS_os_log> *preloaderLog;

- (unsigned short)stop;
- (unsigned short)start;
- (unsigned short)stopLoading;
- (unsigned short)setTraits: /* Error: Ran out of types for this method. */;
- (unsigned short)tearDown;
- (unsigned short)beginLoading;
- (unsigned short)isSufficientlyLoaded;
- (unsigned short)minimalDebuggingEnabled;
- (unsigned short)fullDebuggingEnabled;
- (unsigned short)loggingEnabled;
- (unsigned short)addTileSetStyle:betweenZoom:andZoom: /* Error: Ran out of types for this method. */;
- (unsigned short)preloadStateForTile: /* Error: Ran out of types for this method. */;
- (unsigned short)getPreloadSetCoordinates:maxLength:actualLength: /* Error: Ran out of types for this method. */;
- (unsigned short)updateWithRouteMatch: /* Error: Ran out of types for this method. */;

@end

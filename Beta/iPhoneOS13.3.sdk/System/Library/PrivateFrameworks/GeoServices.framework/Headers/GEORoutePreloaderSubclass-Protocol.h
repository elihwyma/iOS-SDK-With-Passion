/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSObject;

@protocol OS_os_log;

@protocol GEORoutePreloaderSubclass

@property (nonatomic, readonly) NSObject<OS_os_log> *preloaderLog;

- (unsigned short)stopLoading;
- (unsigned short)beginLoading;
- (unsigned short)updateWithRouteMatch: /* Error: Ran out of types for this method. */;

@end

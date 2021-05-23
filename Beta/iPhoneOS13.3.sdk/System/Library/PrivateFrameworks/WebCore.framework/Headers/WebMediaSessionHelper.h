/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface WebMediaSessionHelper : NSObject

{
    struct MediaSessionManageriOS *_callback;
    struct RetainPtr<AVRouteDetector> _routeDetector;
    _Bool _monitoringAirPlayRoutes;
    _Bool _startMonitoringAirPlayRoutesPending;
}

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithCallback:(struct MediaSessionManageriOS *)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)clearCallback;
- (_Bool)hasWirelessTargetsAvailable;
- (void)startMonitoringAirPlayRoutes;
- (void)stopMonitoringAirPlayRoutes;
- (void)interruption:(id)arg1;
- (void)carPlayServerDied:(id)arg1;
- (void)carPlayIsConnectedDidChange:(id)arg1;
- (void)activeAudioRouteDidChange:(id)arg1;
- (void)wirelessRoutesAvailableDidChange:(id)arg1;

@end

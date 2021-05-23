/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

#import <MediaControls/MediaControlsEndpointController.h>

@class MPCFuture, MSVPersistentTimer, NSString;

__attribute__((visibility("hidden")))
@interface MediaControlsActiveEndpointController : MediaControlsEndpointController

{
    _Bool _isDeferred;
    long long _routeType;
    NSString *_activeRouteUID;
    MPCFuture *_deferredPlayerPathFuture;
    id _deferredPlayerPathInvalidationToken;
    MSVPersistentTimer *_deferredPlayerPathTimer;
    NSString *_activeEndpointUID;
}

@property (retain, nonatomic) MPCFuture *deferredPlayerPathFuture;
@property (retain, nonatomic) id deferredPlayerPathInvalidationToken;
@property (retain, nonatomic) MSVPersistentTimer *deferredPlayerPathTimer;
@property (retain, nonatomic) NSString *activeEndpointUID;
@property (nonatomic) long long routeType;
@property (nonatomic) _Bool isDeferred;
@property (nonatomic, readonly) NSString *activeRouteUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)mediaRecentlyPlayedTimeout;

- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (_Bool)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2;
- (void)setOnScreen:(_Bool)arg1;
- (void)setDeviceUnlocked:(_Bool)arg1;
- (id)initWithActiveRouteType:(long long)arg1;
- (void)endpointController:(id)arg1 willAttemptToConnectToRoute:(id)arg2;
- (id)_routeForEndpoint:(void *)arg1;
- (void)activeSystemRouteDidChangeNotification:(id)arg1;
- (void)_updateActiveSystemRoute;
- (void)_maybeRestoreDeferredPlayerPath;
- (void)_maybeUpdateActiveSystemRoute;
- (void)_activeSystemRouteDidChangeWithChangeType:(long long)arg1;
- (void)_resetDeferredPlayerPath;
- (void)_restoreDeferredPlayerPath;
- (void)_fetchActiveSystemRoute:(CDUnknownBlockType)arg1;

@end

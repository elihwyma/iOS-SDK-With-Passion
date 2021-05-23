/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

#import <MediaControls/MediaControlsEndpointController.h>

@class MPAVRoutingController, MPMRAVEndpointObserverWrapper, NSString;

__attribute__((visibility("hidden")))
@interface MediaControlsStandaloneEndpointController : MediaControlsEndpointController

{
    _Bool _allowsAutomaticResponseLoading;
    _Bool _endpointDiscovered;
    NSString *_routeUID;
    MPAVRoutingController *_routingController;
    MPMRAVEndpointObserverWrapper *_endpointObserver;
}

@property (nonatomic, getter=isEndpointDiscovered) _Bool endpointDiscovered;
@property (nonatomic, readonly) MPAVRoutingController *routingController;
@property (retain, nonatomic) MPMRAVEndpointObserverWrapper *endpointObserver;
@property (retain, nonatomic) NSString *routeUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithEndpoint:(id)arg1;
- (void)setRoute:(id)arg1;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (_Bool)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2;
- (void)beginObserving;
- (void)endObserving;
- (void)setAllowsAutomaticResponseLoading:(_Bool)arg1;
- (id)initWithRouteUID:(id)arg1;
- (id)proxyDelegate;
- (void)endpointController:(id)arg1 willAttemptToConnectToRoute:(id)arg2;
- (void)updateAllowsAutomaticResponseLoading;
- (id)_routeForEndpoint:(void *)arg1;

@end

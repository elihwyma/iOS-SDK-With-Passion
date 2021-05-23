/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

#import <Foundation/NSObject.h>

@class MPAVEndpointRoute, MPAVRoutingController, MPCPlayerPath, MPCPlayerResponse, MPMediaControlsConfiguration, MPRequestResponseController, NSArray, NSString;

@protocol MediaControlsEndpointControllerConnectionDelegate, MediaControlsEndpointControllerDelegate, MediaControlsEndpointObserverDelegate;

__attribute__((visibility("hidden")))
@interface MediaControlsEndpointController : NSObject

{
    _Bool _allowsAutomaticResponseLoading;
    _Bool _onScreen;
    _Bool _deviceUnlocked;
    _Bool _hasEverReceivedResponse;
    _Bool _attemptingConnection;
    _Bool _automaticResponseLoading;
    MPMediaControlsConfiguration *_configuration;
    NSArray *_routeNames;
    long long _state;
    id <MediaControlsEndpointControllerDelegate> _delegate;
    id <MediaControlsEndpointObserverDelegate> _proxyDelegate;
    MPRequestResponseController *_requestController;
    MPAVRoutingController *_routingController;
    id <MediaControlsEndpointControllerConnectionDelegate> _connectionDelegate;
}

@property (nonatomic, readonly) MPRequestResponseController *requestController;
@property (nonatomic) _Bool hasEverReceivedResponse;
@property (nonatomic) long long state;
@property (nonatomic, getter=isAttemptingConnection) _Bool attemptingConnection;
@property (retain, nonatomic) MPAVRoutingController *routingController;
@property (retain, nonatomic) MPAVEndpointRoute *route;
@property (nonatomic, getter=isAutomaticResponseLoading) _Bool automaticResponseLoading;
@property (weak, nonatomic) id <MediaControlsEndpointControllerConnectionDelegate> connectionDelegate;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic, readonly) NSString *bundleID;
@property (copy, nonatomic, readonly) NSString *representedBundleID;
@property (retain, nonatomic) MPMediaControlsConfiguration *configuration;
@property (nonatomic, readonly) MPCPlayerPath *playerPath;
@property (nonatomic, readonly) MPCPlayerResponse *response;
@property (copy, nonatomic, readonly) NSArray *routeNames;
@property (nonatomic) _Bool allowsAutomaticResponseLoading;
@property (nonatomic, readonly) _Bool hasAvailableRoutes;
@property (nonatomic, readonly, getter=isAirPlaying) _Bool airplaying;
@property (nonatomic, readonly) _Bool isDeviceSystemRoute;
@property (nonatomic, readonly, getter=isRoutingToWireless) _Bool routingToWireless;
@property (nonatomic) _Bool onScreen;
@property (nonatomic) _Bool deviceUnlocked;
@property (weak, nonatomic) id <MediaControlsEndpointControllerDelegate> delegate;
@property (weak, nonatomic) id <MediaControlsEndpointObserverDelegate> proxyDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithEndpoint:(id)arg1;
- (void)_updateState;
- (void)_connectIfNeeded;
- (id)_stateDumpObject;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)routingController:(id)arg1 pickedRouteDidChange:(id)arg2;
- (void)controller:(id)arg1 defersResponseReplacement:(CDUnknownBlockType)arg2;
- (_Bool)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2;
- (void)launchNowPlayingApp;
- (void)representsLongFormVideoContentWithCompletion:(CDUnknownBlockType)arg1;
- (void)connectAllowingAuthenticationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_initRoutingController;
- (void)_createRequestController;
- (void)_maybeReloadPlayerPathWithRoute:(id)arg1;
- (void)_getConnected:(_Bool *)arg1 invalid:(_Bool *)arg2;
- (void)_reloadPlayerPathWithRoute:(id)arg1;
- (void)_connectionDidInvalidate:(id)arg1;
- (void)_connectionDidConnect:(id)arg1;
- (void)updateRoutePropertiesIfNeeded;
- (void)_connectionHasBecomeInvalid;

@end

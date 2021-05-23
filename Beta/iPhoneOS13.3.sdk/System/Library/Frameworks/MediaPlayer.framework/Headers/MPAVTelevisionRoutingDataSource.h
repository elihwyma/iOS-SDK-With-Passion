/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAVRoutingDataSource.h>

@class NSMutableArray, NSObject;

@protocol OS_dispatch_queue;

@interface MPAVTelevisionRoutingDataSource : MPAVRoutingDataSource

{
    void *_discoveryController;
    NSMutableArray *_discoveredTelevisions;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (id)init;
- (void)dealloc;
- (void)setDiscoveryMode:(long long)arg1;
- (_Bool)devicePresenceDetected;
- (id)_discoveredTelevisions;
- (void)getRoutesForCategory:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getPickedRouteHasVolumeControlWithCompletion:(CDUnknownBlockType)arg1;
- (void)_onQueue_controllerDidDiscoverTelevision:(void *)arg1;
- (void)_onQueue_controllerDidRemoveTelevision:(void *)arg1;

@end

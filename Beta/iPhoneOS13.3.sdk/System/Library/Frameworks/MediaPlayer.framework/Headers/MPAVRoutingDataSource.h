/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface MPAVRoutingDataSource : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    _Bool _devicePresenceDetected;
    long long _discoveryMode;
    long long _filterMode;
}

@property (nonatomic) long long discoveryMode;
@property (nonatomic, readonly) _Bool devicePresenceDetected;
@property (nonatomic, readonly) _Bool supportsMultipleSelection;
@property (nonatomic) long long filterMode;

- (id)init;
- (void)dealloc;
- (void)getRoutesForCategory:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getPickedRouteHasVolumeControlWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)routeIsLeaderOfEndpoint:(id)arg1;
- (void)_activeAudioRouteDidChangeNotification:(id)arg1;
- (void)_externalScreenTypeDidChangeNotification:(id)arg1;
- (void)_volumeControlAvailabilityDidChangeNotification:(id)arg1;
- (void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getExternalScreenTypeWithCompletion:(CDUnknownBlockType)arg1;
- (void)unpickAirPlayAVRoutesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_superclassRegisterNotifications;
- (void)_superclassUnregisterNotifications;

@end

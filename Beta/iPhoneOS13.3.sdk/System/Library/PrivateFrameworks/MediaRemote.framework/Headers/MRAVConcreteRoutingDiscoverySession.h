/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRAVRoutingDiscoverySession.h>

@class AVOutputDeviceDiscoverySession, NSArray, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface MRAVConcreteRoutingDiscoverySession : MRAVRoutingDiscoverySession

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    AVOutputDeviceDiscoverySession *_avDiscoverySession;
    unsigned int _endpointFeatures;
    unsigned int _discoveryMode;
    unsigned int _targetAudioSessionID;
    NSString *_routingContextUID;
    NSArray *_availableOutputDevices;
    _Bool _scheduledAvailableEndpointsAndOutputDevicesReload;
    int _airplayActiveNotificationToken;
    _Bool _isLocalDeviceBeingAirplayedTo;
}

@property (nonatomic, readonly) NSArray *availableEndpoints;
@property (nonatomic, readonly) NSArray *availableOutputDevices;

- (void)dealloc;
- (void)setDiscoveryMode:(unsigned int)arg1;
- (id)routingContextUID;
- (unsigned int)discoveryMode;
- (_Bool)devicePresenceDetected;
- (void)setRoutingContextUID:(id)arg1;
- (void)_availableOutputDevicesDidChangeNotification:(id)arg1;
- (unsigned int)endpointFeatures;
- (id)initWithEndpointFeatures:(unsigned int)arg1;
- (unsigned int)targetAudioSessionID;
- (void)setTargetAudioSessionID:(unsigned int)arg1;
- (void)_scheduleAvailableEndpointsAndOutputDevicesReload;
- (void)_onQueue_reloadAvailableOutputDevices;

@end

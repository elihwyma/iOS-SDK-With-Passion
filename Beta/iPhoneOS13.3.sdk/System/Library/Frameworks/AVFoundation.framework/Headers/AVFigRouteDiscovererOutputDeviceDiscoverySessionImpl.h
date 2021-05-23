/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAudioSession, AVOutputDeviceDiscoverySession, AVOutputDeviceDiscoverySessionAvailableOutputDevices, AVWeakReference, NSString;

@interface AVFigRouteDiscovererOutputDeviceDiscoverySessionImpl : NSObject

{
    CDUnknownBlockType _routeDiscovererCreator;
    struct OpaqueFigRouteDiscoverer *_discoverer;
    AVWeakReference *_weakObserver;
    AVOutputDeviceDiscoverySession *_parentSession;
}

@property (nonatomic, readonly) struct OpaqueFigRouteDiscoverer *routeDiscoverer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak) AVOutputDeviceDiscoverySession *parentOutputDeviceDiscoverySession;
@property (retain, nonatomic) AVAudioSession *targetAudioSession;
@property (nonatomic, readonly) AVOutputDeviceDiscoverySessionAvailableOutputDevices *availableOutputDevicesObject;
@property (nonatomic, readonly) _Bool devicePresenceDetected;

- (id)init;
- (void)dealloc;
- (void)_serverDied;
- (void)outputDeviceDiscoverySessionDidChangeDiscoveryMode:(id)arg1;
- (id)initWithFigRouteDiscovererCreator:(CDUnknownBlockType)arg1;
- (void)_availableRoutesChanged;
- (void)_routePresentChanged;

@end

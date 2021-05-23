/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAudioSession, AVOutputDeviceDiscoverySessionAvailableOutputDevices, AVOutputDeviceDiscoverySessionInternal, NSArray;

@interface AVOutputDeviceDiscoverySession : NSObject

{
    AVOutputDeviceDiscoverySessionInternal *_outputDeviceDiscoverySession;
}

@property (readonly) struct OpaqueFigRouteDiscoverer *routeDiscoverer;
@property (nonatomic) long long discoveryMode;
@property (retain, nonatomic) AVAudioSession *targetAudioSession;
@property (nonatomic, readonly) NSArray *availableOutputDevices;
@property (nonatomic, readonly) AVOutputDeviceDiscoverySessionAvailableOutputDevices *availableOutputDevicesObject;
@property (nonatomic, readonly) _Bool devicePresenceDetected;

+ (void)initialize;
+ (id)outputDeviceDiscoverySessionFactory;

- (id)init;
- (void)dealloc;
- (id)impl;
- (id)initWithDeviceFeatures:(unsigned long long)arg1;
- (void)outputDeviceDiscoverySessionImplDidChangeAvailableOutputDevices:(id)arg1;
- (id)initWithOutputDeviceDiscoverySessionImpl:(id)arg1;
- (void)outputDeviceDiscoverySessionImpl:(id)arg1 didExpireWithReplacement:(id)arg2;

@end

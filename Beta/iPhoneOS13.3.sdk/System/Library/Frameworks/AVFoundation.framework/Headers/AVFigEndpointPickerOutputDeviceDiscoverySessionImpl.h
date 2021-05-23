/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAudioSession, AVOutputDeviceDiscoverySession, AVOutputDeviceDiscoverySessionAvailableOutputDevices, AVWeakReference, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVFigEndpointPickerOutputDeviceDiscoverySessionImpl : NSObject

{
    AVOutputDeviceDiscoverySession *_parentSession;
    AVWeakReference *_weakReference;
    NSObject<OS_dispatch_queue> *_pickerQueue;
    struct OpaqueFigEndpointPicker *_endpointPicker;
    unsigned long long _features;
}

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
- (id)initWithDeviceFeatures:(unsigned long long)arg1;
- (void)outputDeviceDiscoverySessionDidChangeDiscoveryMode:(id)arg1;
- (int)_configureFigEndpointPickerWithFeature:(unsigned long long)arg1;
- (void)_removeFigEndpointPickerNotifications;
- (void)_addFigEndpointPickerNotifications;
- (void)_handlePickerServerConnectionDiedNotification;

@end

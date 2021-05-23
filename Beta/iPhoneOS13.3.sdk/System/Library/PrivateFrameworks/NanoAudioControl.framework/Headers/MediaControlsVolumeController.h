/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <Foundation/NSObject.h>

@class MPAVEndpointRoute, MPAVOutputDeviceRoute, MPVolumeController, NSHashTable, NSString;

__attribute__((visibility("hidden")))
@interface MediaControlsVolumeController : NSObject

{
    _Bool _isSplitRoute;
    NSString *_volumeAudioCategory;
    MPAVEndpointRoute *_systemRoute;
    NSHashTable *_observers;
    MPVolumeController *_systemVolumeController;
    MPVolumeController *_primaryVolumeController;
    MPVolumeController *_secondaryVolumeController;
    MPAVOutputDeviceRoute *_systemOutputDeviceRoute;
    MPAVOutputDeviceRoute *_primaryOutputDeviceRoute;
    MPAVOutputDeviceRoute *_secondaryOutputDeviceRoute;
}

@property (retain, nonatomic) MPAVEndpointRoute *systemRoute;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) MPVolumeController *systemVolumeController;
@property (retain, nonatomic) MPVolumeController *primaryVolumeController;
@property (retain, nonatomic) MPVolumeController *secondaryVolumeController;
@property (retain, nonatomic) MPAVOutputDeviceRoute *systemOutputDeviceRoute;
@property (retain, nonatomic) MPAVOutputDeviceRoute *primaryOutputDeviceRoute;
@property (retain, nonatomic) MPAVOutputDeviceRoute *secondaryOutputDeviceRoute;
@property (nonatomic, readonly) _Bool isSplitRoute;
@property (copy, nonatomic) NSString *volumeAudioCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(_Bool)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (float)volumeForRouteType:(unsigned long long)arg1;
- (id)routeNameForRouteType:(unsigned long long)arg1;
- (id)availableBluetoothListeningModeForRouteType:(unsigned long long)arg1;
- (id)currentBluetoothListeningModeForRouteType:(unsigned long long)arg1;
- (void)routeDidChangeNotification;
- (_Bool)_setupOutputDevicesAndVolumeControllersIfNeeded;
- (void)_notifyVolumeChangedForVolumeController:(id)arg1 volumeControlAvailable:(_Bool)arg2 effectiveVolume:(float)arg3;
- (unsigned long long)_routeForVolumeController:(id)arg1;
- (_Bool)volumeControlAvailableForRouteType:(unsigned long long)arg1;
- (void)setVolume:(float)arg1 forRouteType:(unsigned long long)arg2;
- (_Bool)setCurrentBluetoothListeningModeForRouteType:(unsigned long long)arg1 bluetoothListeningMode:(id)arg2 error:(id *)arg3;
- (id)imageForRouteType:(unsigned long long)arg1;

@end

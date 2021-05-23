/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

#import <Foundation/NSObject.h>

@class MPAVEndpointRoute, MPAVOutputDeviceRoute, MPVolumeController, NSHashTable, NSString;

@interface MediaControlsVolumeController : NSObject

{
    _Bool _isSplitRoute;
    _Bool _primaryInteractionEnabled;
    _Bool _secondaryInteractionEnabled;
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
@property (nonatomic) _Bool primaryInteractionEnabled;
@property (nonatomic) _Bool secondaryInteractionEnabled;
@property (nonatomic, readonly) _Bool isSplitRoute;
@property (copy, nonatomic) NSString *volumeAudioCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isDefaultPackage:(id)arg1;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(_Bool)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (void)setUserInteractionEnabled:(_Bool)arg1 forRouteType:(unsigned long long)arg2;
- (id)glyphStateForVolumeLevel:(double)arg1 packageName:(id)arg2;
- (id)packageNameForRouteType:(unsigned long long)arg1 isRTL:(_Bool)arg2 isSlider:(_Bool)arg3;
- (float)volumeForRouteType:(unsigned long long)arg1;
- (id)routeNameForRouteType:(unsigned long long)arg1;
- (id)availableBluetoothListeningModeForRouteType:(unsigned long long)arg1;
- (id)currentBluetoothListeningModeForRouteType:(unsigned long long)arg1;
- (id)setCurrentBluetoothListeningModeForRouteType:(unsigned long long)arg1 bluetoothListeningMode:(id)arg2;
- (void)routeDidChangeNotification;
- (_Bool)_setupOutputDevicesAndVolumeControllersIfNeeded;
- (id)_packageNameForRoute:(id)arg1 isRTL:(_Bool)arg2 isSlider:(_Bool)arg3;
- (void)_notifyUserInteractionEnabledChanged:(_Bool)arg1 routeType:(unsigned long long)arg2;
- (void)_notifyVolumeChangedForVolumeController:(id)arg1 volumeControlAvailable:(_Bool)arg2 effectiveVolume:(float)arg3;
- (unsigned long long)_routeForVolumeController:(id)arg1;
- (id)_volumePackageNameForRTL:(_Bool)arg1;
- (_Bool)volumeControlAvailableForRouteType:(unsigned long long)arg1;
- (void)setVolume:(float)arg1 forRouteType:(unsigned long long)arg2;
- (_Bool)userInteractionEnabledForRouteType:(unsigned long long)arg1;

@end

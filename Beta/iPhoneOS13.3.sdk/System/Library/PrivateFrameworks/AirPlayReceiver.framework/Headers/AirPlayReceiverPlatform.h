/*
 Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

#import <Foundation/NSObject.h>

@class AirPlayControllerServer, DEExtension, NSString;

__attribute__((visibility("hidden")))
@interface AirPlayReceiverPlatform : NSObject

{
    struct AirPlayReceiverServerPrivate *_server;
    int _uiErrorNotifyToken;
    int _lockDownActivationStateToken;
    unsigned char _playbackPrevented;
    int _playbackAllowNotifyToken;
    int _playbackPreventNotifyToken;
    int _prefChangedNotifyToken;
    int _managedDefaultsChangedNotificationToken;
    int _systemBufferSamples;
    int _systemSampleRate;
    unsigned char _voiceForSiri;
    unsigned char _voiceForTelephony;
    AirPlayControllerServer *_controllerServer;
    float _volumeSliderValue;
    int _volumeControlType;
    unsigned char _isMuted;
    float _volumeSliderValueBeforeMute;
    DEExtension *_wifiDiagnosticExtension;
    NSString *_wifiDECaptureUUID;
    unsigned long long _stalledSessionCount;
    unsigned char _isAmbientAudioPlaying;
    unsigned char _isMediaAudioPlaying;
    unsigned char _isVideoPlaying;
}

@property (nonatomic) unsigned char isAmbientAudioPlaying;
@property (nonatomic) unsigned char isMediaAudioPlaying;
@property (nonatomic) unsigned char isVideoPlaying;

- (void)_avSystemControllerVolumeConfigChanged:(id)arg1;
- (void)_avSystemControllerVolumeChanged:(id)arg1;
- (void)_setupVolumeNotificationHandlers;
- (void)_handleVolumeControlTypeChange;
- (void)_handleAVAudioSessionInterruption:(id)arg1;
- (void)_handleAVAudioSessionServicesReset:(id)arg1;
- (void)_updateMediaSessionActivationStateBasedOnMediaAudioPlayingState:(unsigned char)arg1 andVideoPlayingState:(unsigned char)arg2;

@end

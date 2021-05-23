/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSSet, NSString, _TVRCMROriginWrapper, _TVRCMRTelevisionWrapper, _TVRCMediaRemoteEventTranslator, _TVRCMediaRemoteKeyboardImplManager, _TVRXDevice, _TVRXKeyboardController, _TVRXVoiceRecorder;

@interface _TVRCMediaRemoteDeviceImpl : NSObject

{
    unsigned int _voiceDeviceID;
    _TVRXDevice *_device;
    _TVRCMRTelevisionWrapper *_television;
    _TVRCMROriginWrapper *_origin;
    NSSet *_mediaButtons;
    NSSet *_volumeButtons;
    unsigned long long _touchDeviceID;
    unsigned long long _gameControllerID;
    long long _gameControllerState;
    _TVRCMediaRemoteEventTranslator *_eventTranslator;
    _TVRXVoiceRecorder *_voiceRecorder;
    NSMutableArray *_queuedAudioBuffers;
    _TVRXKeyboardController *_keyboardController;
    _TVRCMediaRemoteKeyboardImplManager *_keyboardImplManager;
}

@property (retain, nonatomic) _TVRCMRTelevisionWrapper *television;
@property (retain, nonatomic) _TVRCMROriginWrapper *origin;
@property (copy, nonatomic) NSSet *mediaButtons;
@property (copy, nonatomic) NSSet *volumeButtons;
@property (nonatomic) unsigned long long touchDeviceID;
@property (nonatomic) unsigned int voiceDeviceID;
@property (nonatomic) unsigned long long gameControllerID;
@property (nonatomic) long long gameControllerState;
@property (retain, nonatomic) _TVRCMediaRemoteEventTranslator *eventTranslator;
@property (retain, nonatomic) _TVRXVoiceRecorder *voiceRecorder;
@property (retain, nonatomic) NSMutableArray *queuedAudioBuffers;
@property (retain, nonatomic) _TVRXKeyboardController *keyboardController;
@property (retain, nonatomic) _TVRCMediaRemoteKeyboardImplManager *keyboardImplManager;
@property (weak, nonatomic) _TVRXDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)implWithTelevision:(id)arg1;

- (void)dealloc;
- (id)name;
- (id)identifier;
- (void)disconnect;
- (long long)connectionType;
- (id)model;
- (void)connect;
- (id)initWithTelevision:(id)arg1;
- (void)sendButtonEvent:(id)arg1;
- (void)sendGameControllerEvent:(id)arg1;
- (id)supportedButtons;
- (_Bool)supportsTouchEvents;
- (void)sendTouchEvent:(id)arg1;
- (id)alternateIdentifiers;
- (unsigned long long)pairingCapability;
- (void)voiceRecorder:(id)arg1 isAboutToBeginRecording:(CDUnknownBlockType)arg2;
- (void)voidRecorderDidStop:(id)arg1;
- (id)createBufferWithSettings:(id)arg1 packetCapacity:(unsigned long long)arg2 maxPacketSize:(unsigned long long)arg3;
- (void)voiceRecorder:(id)arg1 bufferAvailable:(id)arg2;
- (void)setAuthenticationSupported:(_Bool)arg1;
- (void)_nameChanged:(id)arg1;
- (void)_connectionRequestedPairing:(CDStruct_d008d4b8)arg1 continuation:(CDUnknownBlockType)arg2;
- (void)_addConnectionStateHandler;
- (void)_becameDisconnected:(id)arg1;
- (void)_removeConnectionStateHandler;
- (void)_resetAllState;
- (void)_sendEquivalentGameButton:(id)arg1;
- (void)_connectionStateChanged:(unsigned int)arg1 error:(id)arg2;
- (void)_becameConnected;
- (void)_registerTouchDevice;
- (void)_setupVoiceRecorder;
- (void)_beginObservingNowPlaying;
- (void)_setupKeyboardController;
- (void)_setupVolumeControls;
- (void)_registerGameControllerInputModeHandler;
- (void)_removePairingRecords;
- (void)_unregisterGameControllerInputModeHandler;
- (void)_teardownVolumeControls;
- (void)_registerVoiceDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)_voiceRecorderStateChanged:(unsigned int)arg1;
- (void)_drainAndClearAudioBufferQueue;
- (void)_setupOriginIfNeeded;
- (void)_volumeControlsDidUpdate:(id)arg1;
- (void)_reloadVolumeControlAvailability;
- (void)_enableVolumeButtons:(_Bool)arg1;
- (_Bool)_isSystemVersionSupported;
- (void)_gameControllerInputModeChanged:(unsigned int)arg1;
- (void)_registerGameControllerID;
- (void)_unregisterGameControllerID;
- (void)origin:(id)arg1 updatedSupportedCommands:(id)arg2;

@end

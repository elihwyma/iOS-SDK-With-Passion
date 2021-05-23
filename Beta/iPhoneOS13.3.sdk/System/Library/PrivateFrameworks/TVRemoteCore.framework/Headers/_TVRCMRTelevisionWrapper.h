/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, _TVRCMROriginWrapper;

@interface _TVRCMRTelevisionWrapper : NSObject

{
    void *_television;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSDictionary *alternateIdentifiers;
@property (copy, nonatomic, readonly) NSString *softwareVersion;
@property (readonly) _Bool isPairingAllowed;
@property (nonatomic, readonly) unsigned int voiceRecordingState;
@property (copy, nonatomic, readonly) _TVRCMROriginWrapper *customOrigin;

+ (void)deletePairedDevice:(id)arg1;
+ (id)wrapperWithTelevision:(void *)arg1;

- (void)dealloc;
- (id)description;
- (void)disconnect;
- (void)setText:(id)arg1;
- (void)connect;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (void)clearText;
- (id)initWithTelevision:(void *)arg1;
- (void)sendButtonEvent:(struct _MRHIDButtonEvent)arg1;
- (void)setConnectionStateHandler:(CDUnknownBlockType)arg1;
- (void)setNameChangedHandler:(CDUnknownBlockType)arg1;
- (void)setPairingHandler:(CDUnknownBlockType)arg1;
- (void)sendTouchEvent:(struct _MRHIDTouchEvent)arg1 withDeviceID:(unsigned long long)arg2;
- (void)sendGameControllerDigitizerEvent:(id)arg1 withControllerID:(unsigned long long)arg2;
- (void)setWantsNowPlayingUpdates:(_Bool)arg1;
- (void)registerVirtualTouchDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setVoiceRecordingStateHandler:(CDUnknownBlockType)arg1;
- (void)registerVirtualVoiceInputDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendAudioData:(id)arg1 withDeviceID:(unsigned int)arg2;
- (void)setWantsVolumeControlAvailabilityUpdates:(_Bool)arg1;
- (void)setGameControllerInputModeHandler:(CDUnknownBlockType)arg1;
- (void)registerGameControllerDevice:(CDUnknownBlockType)arg1;
- (void)unregisterGameControllerDevice:(unsigned long long)arg1;
- (void)sendGameControllerButtonEventWithButton:(unsigned long long)arg1 isDown:(_Bool)arg2 controllerID:(unsigned long long)arg3;
- (void)setTextEditingHandler:(CDUnknownBlockType)arg1;
- (void)getTextEditingSession:(CDUnknownBlockType)arg1;
- (void)setRTISessionHandler:(CDUnknownBlockType)arg1;
- (void)getCurrentRTISourceSession:(CDUnknownBlockType)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, TVRCDeviceInfo, TVRCKeyboardController, TVRCVoiceRecorder, _TVRCDeviceState;

@protocol TVRCDeviceDelegate;

@interface TVRCDevice : NSObject

{
    id <TVRCDeviceDelegate> _delegate;
    NSString *_identifier;
    TVRCVoiceRecorder *_voiceRecorder;
    TVRCKeyboardController *_keyboardController;
    TVRCDeviceInfo *_info;
    NSString *_name;
    _TVRCDeviceState *_deviceState;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) _TVRCDeviceState *deviceState;
@property (retain, nonatomic) TVRCKeyboardController *keyboardController;
@property (retain, nonatomic) TVRCVoiceRecorder *voiceRecorder;
@property (retain, nonatomic) TVRCDeviceInfo *info;
@property (nonatomic, readonly) long long connectionType;
@property (weak, nonatomic) id <TVRCDeviceDelegate> delegate;
@property (copy, nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) _Bool supportsTouchEvents;
@property (nonatomic, readonly) long long connectionState;
@property (copy, nonatomic, readonly) NSSet *supportedButtons;
@property (nonatomic, readonly, getter=isPaired) _Bool paired;
@property (nonatomic, readonly) unsigned long long pairingCapability;

- (void)dealloc;
- (id)description;
- (_Bool)isEqualToDevice:(id)arg1;
- (void)connect;
- (_Bool)containsIdentifier:(id)arg1;
- (id)initWithDeviceIdentifier:(id)arg1;
- (void)sendButtonEvent:(id)arg1;
- (void)sendGameControllerEvent:(id)arg1;
- (void)sendTouchEvent:(id)arg1;
- (void)_sendRTIDataPayload:(id)arg1;
- (void)disconnectWithType:(unsigned long long)arg1;
- (void)_deviceEncounteredAuthChallengeType:(long long)arg1 attributes:(long long)arg2 codeToEnterOnDevice:(id)arg3;
- (void)_deviceUpdatedState:(id)arg1;
- (void)_disconnectDeviceDueToConnectionInterruption;
- (_Bool)isInEditingSession;

@end

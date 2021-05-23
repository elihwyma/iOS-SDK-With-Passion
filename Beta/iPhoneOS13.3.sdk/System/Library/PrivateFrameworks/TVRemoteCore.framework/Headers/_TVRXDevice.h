/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSSet, NSString, _TVRXKeyboardController, _TVRXVoiceRecorder;

@protocol _TVRCDeviceImpl, _TVRXDeviceDelegate;

@interface _TVRXDevice : NSObject

{
    id <_TVRXDeviceDelegate> _delegate;
    NSString *_identifier;
    NSDictionary *_alternateIdentifiers;
    NSString *_name;
    NSString *_model;
    long long _connectionState;
    NSSet *_supportedButtons;
    id <_TVRCDeviceImpl> _impl;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDictionary *alternateIdentifiers;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSSet *supportedButtons;
@property (retain, nonatomic, getter=_impl, setter=_setImpl:) id <_TVRCDeviceImpl> impl;
@property (weak, nonatomic) id <_TVRXDeviceDelegate> delegate;
@property (nonatomic, readonly) long long connectionType;
@property (nonatomic, readonly) _Bool supportsTouchEvents;
@property (nonatomic, readonly) _Bool paired;
@property (nonatomic, readonly) long long connectionState;
@property (nonatomic, readonly) _TVRXVoiceRecorder *voiceRecorder;
@property (nonatomic, readonly) _TVRXKeyboardController *keyboardController;
@property (nonatomic, readonly) unsigned long long pairingCapability;

- (id)description;
- (id)_init;
- (void)disconnect;
- (void)connect;
- (id)allIdentifiers;
- (_Bool)containsIdentifier:(id)arg1;
- (void)sendButtonEvent:(id)arg1;
- (void)sendGameControllerEvent:(id)arg1;
- (void)sendTouchEvent:(id)arg1;
- (void)_connectionAttemptSucceeded;
- (void)_disconnected:(long long)arg1 error:(id)arg2;
- (void)_setDeviceName:(id)arg1;
- (void)sendEvent:(id)arg1 options:(id)arg2 response:(CDUnknownBlockType)arg3;
- (void)_encounteredAuthenticationChallenge:(id)arg1;
- (void)_setSupportedButtons:(id)arg1;
- (void)_applyButtonEventSideEffects:(id)arg1;
- (_Bool)_authenticationIsSupported;
- (void)_setActiveEndpoint;
- (void)_setIdentifier:(id)arg1 alternateIdentifiers:(id)arg2 name:(id)arg3 model:(id)arg4 supportedButtons:(id)arg5;

@end

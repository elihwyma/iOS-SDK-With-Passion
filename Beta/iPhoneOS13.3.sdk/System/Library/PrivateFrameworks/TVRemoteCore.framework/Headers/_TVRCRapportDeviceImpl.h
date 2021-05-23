/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSString, _TVRCRPCompanionLinkClientWrapper, _TVRCRapportRemoteTextInputKeyboardImpl, _TVRXDevice, _TVRXKeyboardController;

@interface _TVRCRapportDeviceImpl : NSObject

{
    _TVRXDevice *_device;
    _TVRCRPCompanionLinkClientWrapper *_deviceWrapper;
    _TVRXKeyboardController *_keyboardController;
    _TVRCRapportRemoteTextInputKeyboardImpl *_keyboardImpl;
}

@property (retain, nonatomic) _TVRCRPCompanionLinkClientWrapper *deviceWrapper;
@property (retain, nonatomic) _TVRXKeyboardController *keyboardController;
@property (retain, nonatomic) _TVRCRapportRemoteTextInputKeyboardImpl *keyboardImpl;
@property (weak, nonatomic) _TVRXDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)implWithDevice:(id)arg1;

- (id)name;
- (id)identifier;
- (void)disconnect;
- (long long)connectionType;
- (id)model;
- (id)initWithDevice:(id)arg1;
- (void)connect;
- (_Bool)isPaired;
- (void)sendButtonEvent:(id)arg1;
- (void)sendGameControllerEvent:(id)arg1;
- (id)supportedButtons;
- (_Bool)supportsTouchEvents;
- (void)sendTouchEvent:(id)arg1;
- (id)voiceRecorder;
- (id)alternateIdentifiers;
- (unsigned long long)pairingCapability;
- (void)setAuthenticationSupported:(_Bool)arg1;
- (void)sendEvent:(id)arg1 options:(id)arg2 response:(CDUnknownBlockType)arg3;
- (void)_setupKeyboardController;
- (void)deviceEncounteredAuthenticationChallenge:(id)arg1;
- (void)disconnectedFromDevice:(id)arg1 error:(id)arg2;
- (void)deviceUpdatedSupportedButtons:(id)arg1;
- (void)connectedToDevice:(id)arg1;

@end

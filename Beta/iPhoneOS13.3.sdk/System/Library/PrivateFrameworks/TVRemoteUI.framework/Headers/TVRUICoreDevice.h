/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, TVRCDevice, TVRCDeviceAuthenticationChallenge;

@protocol TVRUIDeviceDelegate;

@interface TVRUICoreDevice : NSObject

{
    _Bool _supportsVolumeControl;
    _Bool _supportsLaunchingApplications;
    _Bool _supportsCaptionsToggle;
    _Bool _captionsEnabled;
    _Bool _connecting;
    TVRCDevice *_device;
    id <TVRUIDeviceDelegate> _delegate;
    TVRCDeviceAuthenticationChallenge *_currentChallenge;
    NSMutableDictionary *_coreButtons;
}

@property (retain, nonatomic) TVRCDevice *device;
@property (weak, nonatomic) id <TVRUIDeviceDelegate> delegate;
@property (retain, nonatomic) TVRCDeviceAuthenticationChallenge *currentChallenge;
@property (nonatomic, readonly) _Bool supportsVolumeControl;
@property (nonatomic, readonly) _Bool supportsLaunchingApplications;
@property (nonatomic, readonly) _Bool supportsCaptionsToggle;
@property (nonatomic, readonly) _Bool captionsEnabled;
@property (nonatomic, getter=isConnecting) _Bool connecting;
@property (retain, nonatomic) NSMutableDictionary *coreButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)_coreButtonEventTypeForEventType:(long long)arg1;
+ (long long)_coreButtonTypeForButton:(long long)arg1;
+ (long long)_uiButtonTypeFromCore:(long long)arg1;

- (id)name;
- (id)identifier;
- (id)model;
- (_Bool)isEqualToDevice:(id)arg1;
- (void)connect;
- (id)currentText;
- (_Bool)isConnected;
- (_Bool)isPaired;
- (void)sendButtonEvent:(id)arg1;
- (void)sendText:(id)arg1;
- (id)keyboardAttributes;
- (void)disconnectUserInitiated;
- (void)disconnectSystemInitiated;
- (_Bool)supportsTouchEvents;
- (_Bool)supportsDonatingIntents;
- (void)cancelAuthenitcationChallenge;
- (_Bool)hasIdentifier:(id)arg1;
- (void)sendAuthenticationCode:(id)arg1;
- (void)sendTextInputPayload:(id)arg1;
- (void)sendReturnKey;
- (id)deviceContextInformation;
- (void)disconnectWithTimeOut;
- (void)sendTouchEvent:(id)arg1;
- (void)startVoiceRecorder;
- (void)stopVoiceRecorder;
- (void)deviceBeganConnecting:(id)arg1;
- (long long)_tvrcTouchPhaseFromUITouchPhase:(long long)arg1;
- (void)_disconnectWithType:(unsigned long long)arg1;
- (void)_processButtonsForFeatureAdditions:(id)arg1;
- (long long)_disconnectReasonFromCoreReason:(long long)arg1;
- (void)_processButtonsForFeatureRemovals:(id)arg1;
- (_Bool)_isMediaButton:(id)arg1;
- (_Bool)_isVolumeButton:(id)arg1;
- (_Bool)_isLaunchApplicationButton:(id)arg1;
- (_Bool)_isCaptionsToggleButton:(id)arg1;
- (void)device:(id)arg1 encounteredAuthenticationChallenge:(id)arg2;
- (void)deviceConnected:(id)arg1;
- (void)device:(id)arg1 disconnectedForReason:(long long)arg2 error:(id)arg3;
- (void)device:(id)arg1 removedSupportedButtons:(id)arg2 added:(id)arg3;
- (void)keyboardController:(id)arg1 beganTextEditingWithAttributes:(id)arg2;
- (void)keyboardControllerEndedTextEditing:(id)arg1;
- (void)keyboardController:(id)arg1 didUpdateText:(id)arg2;
- (void)keyboardController:(id)arg1 didUpdateAttributes:(id)arg2;
- (id)_initWithDeviceIdentifier:(id)arg1;
- (id)_initWithCoreDevice:(id)arg1;

@end

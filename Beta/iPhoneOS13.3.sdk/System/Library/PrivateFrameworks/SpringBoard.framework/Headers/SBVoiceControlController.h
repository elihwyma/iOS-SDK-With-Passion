/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, SBVoiceControlTransientOverlayViewController, SiriLongPressButtonSource;

@protocol SiriAssertion;

@interface SBVoiceControlController : NSObject

{
    _Bool _delayedAssistantActivationPending;
    _Bool _headsetDownDelayedActionPerformed;
    NSArray *_nextRecognitionAudioInputPaths;
    SBVoiceControlTransientOverlayViewController *_transientOverlayViewController;
    SiriLongPressButtonSource *_siriHeadsetDeviceSource;
    id <SiriAssertion> _siriPreheatAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (_Bool)isVisible;
- (void)_spokenLanguageDidChange:(id)arg1;
- (void)configureVoiceControl;
- (void)dismissTransientOverlay;
- (void)headsetAvailabilityChanged;
- (void)handleHeadsetButtonDownWithClickCount:(unsigned long long)arg1;
- (_Bool)handleHeadsetButtonUp;
- (_Bool)handleHeadsetButtonUpNotInCall;
- (void)bluetoothDeviceInitiatedVoiceControl:(id)arg1;
- (void)bluetoothDeviceEndedVoiceControl:(id)arg1;
- (_Bool)handleHomeButtonHeld;
- (void)_updateNextRecognitionAudioInputPaths:(id)arg1;
- (void)_assistantActivationSettingsDidChange:(id)arg1;
- (_Bool)_shouldEnterVoiceControl;
- (id)_newVoiceControlTransientOverlayViewControllerWithSource:(id)arg1;
- (void)_performDelayedHeadsetActionForAssistant;
- (void)_performDelayedHeadsetActionForVoiceControl;
- (void)_prepareDelayedHeadsetAction;
- (void)_cancelDelayedHeadsetAction;
- (id)siriBluetoothDeviceSource:(id)arg1;
- (void)voiceControlTransientOverlayViewControllerDidDisappear:(id)arg1;
- (void)voiceControlTransientOverlayViewControllerRequestsDismissal:(id)arg1;

@end

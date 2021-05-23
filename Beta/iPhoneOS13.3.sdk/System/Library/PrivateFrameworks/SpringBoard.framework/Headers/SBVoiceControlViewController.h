/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSDictionary, NSString, NSTimer, SBVoiceControlPresentationSource, SUICFlamesView, SiriUISuggestionsView, UILabel, UIView, VSRecognitionSession;

@protocol SBVoiceControlViewControllerDelegate;

@interface SBVoiceControlViewController : UIViewController

{
    NSString *_avAudioRouteName;
    NSString *_avAudioRouteUID;
    UIView *_contentView;
    NSTimer *_delayedConfirmationActionTimer;
    SUICFlamesView *_flamesView;
    _Bool _hasConfiguredRouting;
    NSDictionary *_localizationKeys;
    _Bool _isHeadsetButtonPressedDown;
    _Bool _prefersProximityDetectionEnabled;
    VSRecognitionSession *_session;
    SBVoiceControlPresentationSource *_source;
    long long _startingKeywordIndex;
    UILabel *_subtitleLabel;
    SiriUISuggestionsView *_suggestionsView;
    UILabel *_titleLabel;
    _Bool _wasRecognizing;
    _Bool _shouldAllowSensitiveActions;
    _Bool _shouldDisableHandlerActions;
    _Bool _shouldDisableVoiceControlForBluetoothRequests;
    _Bool _voiceControlLoggingEnabled;
    NSArray *_nextRecognitionAudioInputPaths;
    id <SBVoiceControlViewControllerDelegate> _voiceControlDelegate;
}

@property (copy, nonatomic) NSArray *nextRecognitionAudioInputPaths;
@property (nonatomic, readonly) _Bool prefersProximityDetectionEnabled;
@property (nonatomic) _Bool shouldAllowSensitiveActions;
@property (nonatomic) _Bool shouldDisableHandlerActions;
@property (nonatomic) _Bool shouldDisableVoiceControlForBluetoothRequests;
@property (nonatomic, getter=isVoiceControlLoggingEnabled) _Bool voiceControlLoggingEnabled;
@property (weak, nonatomic) id <SBVoiceControlViewControllerDelegate> voiceControlDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (float)audioLevelForFlamesView:(id)arg1;
- (id)initWithSource:(id)arg1;
- (void)_resetSession;
- (void)_requestDismissal;
- (void)_setTitleText:(id)arg1;
- (void)_setStatusText:(id)arg1;
- (void)recognitionSessionDidBeginAction:(id)arg1;
- (_Bool)recognitionSessionWillBeginAction:(id)arg1;
- (id)recognitionSession:(id)arg1 openURL:(id)arg2;
- (void)recognitionSession:(id)arg1 didCompleteActionWithError:(id)arg2;
- (void)recognitionSession:(id)arg1 didFinishSpeakingFeedbackStringWithError:(id)arg2;
- (void)_setSession:(id)arg1;
- (id)_localizedStringForKey:(id)arg1;
- (_Bool)handleHomeButtonPress;
- (struct CGRect)_flamesViewFrame;
- (id)nextSuggestionsForSuggestionsView:(id)arg1 maxSuggestions:(unsigned long long)arg2;
- (void)resetSessionWithSource:(id)arg1;
- (void)handleHeadsetButtonUpFromButtonDownSource:(_Bool)arg1;
- (double)_titleBaseline;
- (double)_subtitleBaseline;
- (void)performDismissalTransitionAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)finalizeDismissalTransition;
- (void)performPresentationTransitionAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setPrefersProximityDetectionEnabled:(_Bool)arg1;
- (void)_setAVAudioRouteUID:(id)arg1;
- (void)_deviceProximityStateDidChangeNotification:(id)arg1;
- (void)_setFeedbackVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_newRecognitionSession;
- (void)_startSession;
- (void)_performNoMatchFound;
- (void)_handleButtonUpCancel;
- (void)_configureRoutingIfNeeded;
- (void)_speakFeedbackText;
- (void)_continueWithRecognitionAction;
- (_Bool)_openDialRequest:(id)arg1;
- (void)_continueRecognitionAction;
- (id)_currentPreferredRouteDictionary;
- (void)_setNeedsRoutingUpdate;
- (void)_avSystemControllerPickableRoutesDidChangeNotification:(id)arg1;
- (void)_avSystemControllerHeadphoneJackIsConnectedDidChangeNotification:(id)arg1;
- (id)_popNextRecognitionAudioInputPath;
- (void)_performConfirmationAction;
- (id)_availableRouteDictionaries;
- (id)_preferredRouteDictionaryWithAvailableRouteDictionaries:(id)arg1 preferredAVAudioRouteName:(id)arg2 preferredAVAudioRouteUID:(id)arg3 shouldPreferBluetooth:(_Bool)arg4;
- (_Bool)_hasPickableBluetoothDevice;
- (void)_speakText:(id)arg1;
- (void)_recognitionSessionKeywordsDidChangeNotification:(id)arg1;

@end

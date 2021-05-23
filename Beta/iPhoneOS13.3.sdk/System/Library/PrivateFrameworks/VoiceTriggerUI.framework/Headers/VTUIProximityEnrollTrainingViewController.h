/*
 Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

#import <UIKit/UIViewController.h>

@class AFMyriadCoordinator, AFUISiriLanguage, CSVTUITrainingManager, NSArray, NSObject, NSString, UIView, VTUIAudioHintPlayer, VTUIProximityEnrollTrainingView, VTUIProximityEnrollmentLanguageOptionsView, VTUIProximityEnrollmentSetupIntroView, VTUIProximityEnrollmentSuccessView, VTUIProximityTryAgainView, VTUISiriDataSharingOptInPresenter;

@protocol AFUIDebugControlling, OS_dispatch_queue, VTUIEnrollTrainingViewControllerDelegate;

@interface VTUIProximityEnrollTrainingViewController : UIViewController

{
    NSArray *_trainingPageInstructions;
    long long _currentTrainingState;
    _Bool _hasRetriedTraining;
    id <AFUIDebugControlling> _debugController;
    CSVTUITrainingManager *_trainingManager;
    float _audioRms;
    unsigned long long _sessionId;
    long long _consecutiveTimeoutCount;
    AFUISiriLanguage *_siriLanguage;
    NSArray *_siriLanguageOptions;
    _Bool _hasPHSInCloud;
    NSObject<OS_dispatch_queue> *_hasPHSInCloudFetchQueue;
    CDUnknownBlockType _hasPHSInCloudFetchBlock;
    _Bool _isResignedActive;
    UIView *_siriDataSharingProximityView;
    VTUISiriDataSharingOptInPresenter *_siriDataSharingOptInPresenter;
    _Bool _hasSkippedTraining;
    _Bool _skipToEndForTesting;
    _Bool _skipToDataSharingForTesting;
    _Bool _disambiguateLanguageOptionsForTesting;
    _Bool _shouldTurnOnMyriad;
    id <VTUIEnrollTrainingViewControllerDelegate> _delegate;
    VTUIProximityEnrollTrainingView *_enrollTrainingView;
    VTUIProximityEnrollmentSuccessView *_successView;
    VTUIProximityEnrollmentSetupIntroView *_introView;
    VTUIProximityTryAgainView *_tryAgainView;
    unsigned long long _badMicRetryCount;
    unsigned long long _AVVCRetryCount;
    NSString *_spokenLanguageCode;
    VTUIProximityEnrollmentLanguageOptionsView *_languageOptionsView;
    UIView *_aboutTappedSender;
    AFMyriadCoordinator *_myriadCoordinator;
    VTUIAudioHintPlayer *_audioHintPlayer;
    long long _orientation;
}

@property (retain, nonatomic) CSVTUITrainingManager *trainingManager;
@property (nonatomic, readonly) unsigned long long sessionId;
@property (nonatomic) long long currentTrainingState;
@property (nonatomic) _Bool hasRetriedTraining;
@property (nonatomic) float audioRms;
@property (nonatomic) _Bool skipToEndForTesting;
@property (nonatomic) _Bool skipToDataSharingForTesting;
@property (nonatomic) _Bool disambiguateLanguageOptionsForTesting;
@property (retain, nonatomic) VTUIProximityEnrollTrainingView *enrollTrainingView;
@property (retain, nonatomic) VTUIProximityEnrollmentSuccessView *successView;
@property (retain, nonatomic) VTUIProximityEnrollmentSetupIntroView *introView;
@property (retain, nonatomic) VTUIProximityTryAgainView *tryAgainView;
@property (nonatomic) unsigned long long badMicRetryCount;
@property (nonatomic) unsigned long long AVVCRetryCount;
@property (retain, nonatomic) NSString *spokenLanguageCode;
@property (retain, nonatomic) VTUIProximityEnrollmentLanguageOptionsView *languageOptionsView;
@property (retain, nonatomic) UIView *aboutTappedSender;
@property (nonatomic) _Bool shouldTurnOnMyriad;
@property (retain, nonatomic) AFMyriadCoordinator *myriadCoordinator;
@property (retain, nonatomic) NSArray *trainingPageInstructions;
@property (retain, nonatomic) VTUIAudioHintPlayer *audioHintPlayer;
@property (nonatomic) long long orientation;
@property (weak, nonatomic) id <VTUIEnrollTrainingViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)finish:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (float)audioLevelForFlamesView:(id)arg1;
- (void)siriDataSharingOptInRequestsDismissalFromPresenter:(id)arg1;
- (void)siriDataSharingOptInViewDismissButtonTappedFromPresenter:(id)arg1;
- (void)_resignActive;
- (void)shouldContinue:(id)arg1;
- (void)shouldAbortAnotherDeviceBetter:(id)arg1;
- (void)_becomeActive;
- (void)_didEnterBackground;
- (void)_dismiss:(id)arg1;
- (void)_resetIdleTimer;
- (void)siriLanguageSpokenLanguageCodeDidChange:(id)arg1;
- (void)VTUITrainingManagerFeedLevel:(float)arg1;
- (void)VTUITrainingManagerStopListening;
- (void)_setLanguageOptionsAndContinue:(id)arg1;
- (void)_continueFromIntro:(id)arg1;
- (void)_setupMode;
- (_Bool)_isTrainingInProgress;
- (void)_cleanupTrainingManagerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_checkForPHSCloudDataIfNecessary:(id)arg1;
- (void)_setupTrainingStates;
- (void)_setupEnrollTrainingView;
- (void)_showEnrollmentSuccessView;
- (_Bool)_shouldShowSiriDataSharingOptInView;
- (void)_stopGLDrawing;
- (void)_resumeGLDrawing;
- (void)_startEnrollment;
- (void)_showTrainingInstruction:(long long)arg1 afterDelay:(double)arg2 isRetry:(_Bool)arg3 animate:(_Bool)arg4;
- (void)_resetTrainingManager;
- (void)_resetEnrollment;
- (void)_showBadMicAlertCompletion:(CDUnknownBlockType)arg1;
- (void)skipTraining:(id)arg1;
- (void)_showUnsupportedLocaleAlertCompletion:(CDUnknownBlockType)arg1;
- (void)_finishSiriSetup:(id)arg1;
- (void)skipAssistant:(id)arg1;
- (void)_logAggdCount:(long long)arg1 forKey:(id)arg2;
- (_Bool)_siriLanguageIsIncompatibleWithPairedWatch;
- (_Bool)_shouldSpeakAudioHint;
- (_Bool)_isLocaleSupported:(id)arg1;
- (void)_showUnsupportedLocaleAlert;
- (void)_showIntroView;
- (void)_setPHSEnrollmentPrefEnabled:(_Bool)arg1;
- (void)_hideInstruction;
- (void)_createTrainingManagerIfNeeded;
- (void)_showInstruction:(long long)arg1 isRetry:(_Bool)arg2;
- (void)_logAggdScalar:(long long)arg1 forKey:(id)arg2;
- (void)_updatePageNumberForInstruction:(long long)arg1;
- (void)_showStatusMessage:(id)arg1 afterDelay:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleTrainingResultForNonRetryablePhraseWithStatus:(int)arg1;
- (void)_handleTrainingResultForRetryablePhraseWithStatus:(int)arg1 shouldShowCheckMark:(_Bool)arg2;
- (long long)interpretSessionManagerStatus:(int)arg1 forInstruction:(long long)arg2;
- (void)_cleanupTrainingManagerWithCompletion:(CDUnknownBlockType)arg1 status:(long long)arg2;
- (void)_retryAfterBadMicAlert;
- (void)_advanceState;
- (void)_showResultMark:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_retryInstruction:(_Bool)arg1;
- (id)interpretAudioSource:(unsigned long long)arg1;
- (id)_getSetupModeString;
- (void)_updateFlamesForStatus:(long long)arg1;
- (void)_cleanupHelper;
- (void)_setAssistantEnabled:(_Bool)arg1;
- (void)_continueFromLanguageOptions:(id)arg1;
- (void)_warnForLanguageCompatibilityIfNecessary:(CDUnknownBlockType)arg1;
- (_Bool)_hasPHSCloudDataForSpokenLanguage;
- (void)_startTraining;
- (void)_presentRadarView;
- (void)VTUITrainingManagerAudioSessionTerminatedInStatus:(int)arg1;
- (void)aboutTapped:(id)arg1;
- (void)debugController:(id)arg1 stateDidChangeWithAddViews:(id)arg2;
- (id)presentedViewControllerForDebugController;
- (void)debugController:(id)arg1 wantsPresentViewController:(id)arg2;
- (void)debugController:(id)arg1 wantsDismissViewController:(id)arg2;
- (void)getScreenshotImageForDebugController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)debugController:(id)arg1 openURL:(id)arg2;
- (void)_showBadMicAlertWithCompletion:(CDUnknownBlockType)arg1;
- (void)_clearAggdScalar:(id)arg1;
- (void)cancelTraining;
- (void)_triggerEndpoint:(id)arg1;
- (void)_showSiriDataSharingOptInView;
- (void)_updateCurrentConstraintsToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_resumeTraining;
- (void)_continueFromRetry:(id)arg1;
- (void)setupNavigationBarStyleForAppearing:(_Bool)arg1;

@end

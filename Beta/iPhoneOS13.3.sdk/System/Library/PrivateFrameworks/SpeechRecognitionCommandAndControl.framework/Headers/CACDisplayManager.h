/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

#import <SpeechRecognitionCommandAndControl/Swift-Protocol.h>

@class CACBannerViewPresenter, CACContainerViewController, CACContextCluesPresentationManager, CACCorrectionPresentationManager, CACCustomCommandEditorPresentationManager, CACDictationRecognizerModeOverlayManager, CACDisambiguationPresentationManager, CACElementActionsPresentationManager, CACElementNamesOverlayManager, CACLabeledElementsOverlayManager, CACLabeledGridOverlayManager, CACVoiceOverAnnouncer, NSMutableArray, NSMutableSet, NSOperationQueue, NSTimer, STVoiceControlStatusDomainPublisher, UIView, UIWindow;

@interface CACDisplayManager : NSObject <Swift>

{
    NSMutableArray *_registeredPresentationManagers;
    CACContainerViewController *_windowContainerViewController;
    CACContainerViewController *_overlayContainerViewController;
    UIWindow *_window;
    UIWindow *_overlayWindow;
    NSOperationQueue *_messageDisplayOperationQueue;
    CACLabeledElementsOverlayManager *_labeledElementsOverlayManager;
    CACLabeledGridOverlayManager *_labeledGridOverlayManager;
    CACElementNamesOverlayManager *_elementNamesOverlayManager;
    CACElementActionsPresentationManager *_elementActionsPresentationManager;
    CACCorrectionPresentationManager *_correctionPresentationManager;
    CACCustomCommandEditorPresentationManager *_customCommandEditorPresentationManager;
    CACDictationRecognizerModeOverlayManager *_dictationRecognizerModeOverlayManager;
    CACDisambiguationPresentationManager *_contactDisambiguationPresentationManager;
    CACContextCluesPresentationManager *_contextCluesPresentationManager;
    NSMutableSet *_modalAlerts;
    struct os_unfair_lock_s _modalAlertsLock;
    CACVoiceOverAnnouncer *_voiceOverAnnouncer;
    STVoiceControlStatusDomainPublisher *_voiceControlStatusPublisher;
    long long _statusIndicatorType;
    NSTimer *_statusIndicatorAnimationTimer;
    CACBannerViewPresenter *_bannerViewPresenter;
}

@property (retain, nonatomic) NSTimer *statusIndicatorAnimationTimer;
@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) UIWindow *overlayWindow;
@property (retain, nonatomic) CACBannerViewPresenter *bannerViewPresenter;
@property (nonatomic, readonly) CACLabeledElementsOverlayManager *labeledElementsOverlayManager;
@property (nonatomic, readonly) CACLabeledGridOverlayManager *labeledGridOverlayManager;
@property (nonatomic, readonly) CACElementNamesOverlayManager *elementNamesOverlayManager;
@property (nonatomic, readonly) CACElementActionsPresentationManager *elementActionsPresentationManager;
@property (nonatomic, readonly) CACCorrectionPresentationManager *correctionPresentationManager;
@property (nonatomic, readonly) CACCustomCommandEditorPresentationManager *customCommandEditorPresentationManager;
@property (nonatomic, readonly) CACDictationRecognizerModeOverlayManager *dictationRecognizerModeOverlayManager;
@property (nonatomic, readonly) CACDisambiguationPresentationManager *contactDisambiguationPresentationManager;
@property (nonatomic, readonly) CACContextCluesPresentationManager *contextCluesPresentationManager;
@property (nonatomic, readonly) CACVoiceOverAnnouncer *voiceOverAnnouncer;
@property (nonatomic, readonly) STVoiceControlStatusDomainPublisher *voiceControlStatusPublisher;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) UIView *overlayView;
@property (nonatomic) long long statusIndicatorType;
@property (nonatomic, readonly) struct CGPoint defaultPortraitUpPointForGestures;

+ (void)initialize;
+ (id)sharedManager;
+ (double)durationToDisplayMessageString:(id)arg1;

- (id)init;
- (void)didUpdateOrientation;
- (_Bool)showsNumbersInTopLeftForLabeledGridOverlayManager:(id)arg1;
- (struct CGRect)topLevelPortraitUpRectForLabeledGridOverlayManager:(id)arg1;
- (_Bool)isAlwaysShowingLabeledGridOverlayManager:(id)arg1;
- (_Bool)isOverlayFadingEnabledForLabeledGridOverlayManager:(id)arg1;
- (double)overlayFadeDelayForLabeledGridOverlayManager:(id)arg1;
- (float)overlayFadeOpacityForLabeledGridOverlayManager:(id)arg1;
- (void)didUpdateElementsForLabeledGridOverlayManager:(id)arg1;
- (_Bool)isPressOnFirstLevelEnabledForLabeledGridOverlayManager:(id)arg1;
- (_Bool)isMaximumDensityEnabledForLabeledGridOverlayManager:(id)arg1;
- (long long)defaultNumberOfColumnsForLabeledGridOverlayManager:(id)arg1;
- (id)labeledGridOverlayManager:(id)arg1 elementWithTitle:(id)arg2 rectangle:(struct CGRect)arg3;
- (_Bool)isZoomEnabledForGridOverlayManager:(id)arg1;
- (int)modeForDictationRecognizerModeOverlayManager:(id)arg1;
- (struct CGRect)imageRectForDictationRecognizerModeOverlayManager:(id)arg1;
- (void)showOverlayForDictiationRecognizerMode;
- (void)showCustomCommandEditorWithGesture:(id)arg1;
- (void)showCustomCommandEditorWithTextToInsert:(id)arg1;
- (void)showCustomCommandEditorWithRecordedUserActionFlow:(id)arg1;
- (void)showCustomCommandEditorWithShortcutsWorkflow:(id)arg1;
- (void)displayMessageString:(id)arg1 type:(long long)arg2 announcementCompletion:(CDUnknownBlockType)arg3;
- (void)contentViewManager:(id)arg1 presentViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)contentViewManager:(id)arg1 dismissViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)hideDictationRecognizerModeOverlayNow;
- (void)resetGridIdleTimer;
- (void)speakVoiceOverDescriptionForActiveOverlayIfNeeded;
- (void)startShowingTransientOverlayForType:(id)arg1;
- (void)showContextCluesViewWithCommands:(id)arg1;
- (void)hideAnyOverlay;
- (void)hideAnyOverlayAnimated:(_Bool)arg1;
- (void)refreshOverlays;
- (_Bool)updateGridLayoutFromPreferences;
- (void)resetGrid;
- (void)displayMessageString:(id)arg1 type:(long long)arg2;
- (void)updatePreferencesFromCurrentGridLayoutForRows:(_Bool)arg1 forColumns:(_Bool)arg2;
- (void)updateGridLayoutWithNumberOfRows:(unsigned long long)arg1 numberOfColumns:(unsigned long long)arg2 shouldPreferRows:(_Bool)arg3;
- (_Bool)updateGridWithPortraitUpRect:(struct CGRect)arg1;
- (void)showElementActionsForElement:(id)arg1 usingPortraitUpRect:(struct CGRect)arg2;
- (_Bool)isDisplayingAnyOverlay;
- (_Bool)isDisplayingAnyPresentation;
- (void)enableStatusBarOverride:(_Bool)arg1;
- (void)hideAnyInProcessPresentation;
- (_Bool)isGridAtTopLevel;
- (id)labeledElementsForItemNumbers;
- (id)labeledElementsForGrid;
- (void)hideObsoletePresentationsIfNeededForElements:(id)arg1;
- (_Bool)isDisplayingAnyInteractiveContentInProcess;
- (_Bool)isDisplayingAnyOutOfProcessPresentation;
- (void)updatePresentationForActiveOverlay;
- (void)presentModalAlertWithTitle:(id)arg1 description:(id)arg2 okButtonText:(id)arg3 cancelButtonText:(id)arg4 object:(id)arg5 okButtonHandler:(CDUnknownBlockType)arg6;
- (void)showContactDisambiguationItems:(id)arg1;
- (void)hideContactDisambiguation;
- (void)_updateForCurrentStatusIndicatorType;
- (void)_trackModalAlert:(id)arg1;
- (void)_untrackModalAlert:(id)arg1;
- (id)_containerViewControllerForViewController:(id)arg1;
- (_Bool)isDisplayingCorrections;
- (void)hideAnyPresentationAnimated:(_Bool)arg1 includingOutOfProcessPresentations:(_Bool)arg2;
- (void)hideAnyPresentationAnimated:(_Bool)arg1;
- (_Bool)_hasModalAlert;
- (void)_registerPresentationManager:(id)arg1;
- (void)showCorrectionsForElement:(id)arg1 nBestStrings:(id)arg2;
- (void)_installViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_uninstallViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didAssignNumbersInLabeledElementsOverlayManager:(id)arg1;
- (_Bool)isHandlingDisambiguationForLabeledElementsOverlayManager:(id)arg1;
- (_Bool)shouldAssignNumbersRandomlyInLabeledElementsOverlayManager:(id)arg1;
- (id)localeForLabeledElementsOverlayManager:(id)arg1;
- (_Bool)isOverlayFadingEnabledForLabeledElementsOverlayManager:(id)arg1;
- (double)overlayFadeDelayForLabeledElementsOverlayManager:(id)arg1;
- (float)overlayFadeOpacityForLabeledElementsOverlayManager:(id)arg1;
- (_Bool)isAlwaysShowingLabeledElementsOverlayManager:(id)arg1;
- (long long)maximumLevelForLabeledGridOverlayManager:(id)arg1;
- (id)existingOverlayManagerForType:(id)arg1;
- (void)_showBannerViewWithText:(id)arg1 type:(long long)arg2;
- (void)presentModalAlertWithTitle:(id)arg1 description:(id)arg2 button1Text:(id)arg3 button1Style:(long long)arg4 button2Text:(id)arg5 button2Style:(long long)arg6 object:(id)arg7 button1Handler:(CDUnknownBlockType)arg8 button2Handler:(CDUnknownBlockType)arg9;
- (void)hideAnyPresentation;
- (_Bool)isDisplayingAnyContentView;
- (void)hideCorrections;

@end

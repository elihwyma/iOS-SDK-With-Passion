/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

#import <CoverSheet/Swift-Protocol.h>

@class CSLockScreenPearlSettings, CSPasscodeBackgroundView, NSString, SBFAuthenticationAssertion, SBUIProudLockContainerViewController, UIColor, UIView;

@protocol CSCoverSheetContextProviding, CSPasscodeViewControllerDelegate, CSWallpaperColorProvider, SBUIPasscodeLockView_Internal;

@interface CSPasscodeViewController : CSCoverSheetViewControllerBase <Swift>

{
    _Bool _attemptingUnlock;
    SBFAuthenticationAssertion *_sustainAuthenticationAssertion;
    unsigned long long _options;
    UIView<SBUIPasscodeLockView_Internal> *_passcodeLockView;
    CSPasscodeBackgroundView *_backgroundView;
    _Bool _isBeingDismissedAfterInterstitialTransitionCancelled;
    CSLockScreenPearlSettings *_pearlSettings;
    _Bool _useBiometricPresentation;
    _Bool _biometricButtonsInitiallyVisible;
    _Bool _showProudLock;
    _Bool _confirmedNotInPocket;
    id <CSPasscodeViewControllerDelegate> _delegate;
    SBUIProudLockContainerViewController *_proudLockContainerViewControllerToUpdate;
    NSString *_unlockDestination;
    UIColor *_wallpaperAverageColorOverride;
    id <CSCoverSheetContextProviding> _coverSheetContext;
    id <CSWallpaperColorProvider> _wallpaperColorProvider;
}

@property (weak, nonatomic) id <CSPasscodeViewControllerDelegate> delegate;
@property (nonatomic) _Bool useBiometricPresentation;
@property (nonatomic) _Bool biometricButtonsInitiallyVisible;
@property (nonatomic) _Bool showProudLock;
@property (retain, nonatomic) SBUIProudLockContainerViewController *proudLockContainerViewControllerToUpdate;
@property (copy, nonatomic) NSString *unlockDestination;
@property (nonatomic) UIColor *wallpaperAverageColorOverride;
@property (nonatomic) _Bool confirmedNotInPocket;
@property (retain, nonatomic) id <CSCoverSheetContextProviding> coverSheetContext;
@property (retain, nonatomic) id <CSWallpaperColorProvider> wallpaperColorProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithOptions:(unsigned long long)arg1;
- (void)loadView;
- (long long)presentationStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)handleEvent:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (long long)presentationType;
- (long long)presentationTransition;
- (void)passcodeLockViewStateChange:(id)arg1;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1;
- (void)passcodeLockViewCancelButtonPressed:(id)arg1;
- (void)passcodeLockViewEmergencyCallButtonPressed:(id)arg1;
- (void)passcodeLockViewPasscodeEntered:(id)arg1;
- (void)passcodeLockViewPasscodeDidChange:(id)arg1;
- (long long)presentationPriority;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)_updateProudLockViewControllerConfiguration;
- (void)beginInteractivePresentationTransitionForInitialTransition:(_Bool)arg1;
- (void)updateInteractiveTransitionWithPercent:(double)arg1 forInitialTransition:(_Bool)arg2;
- (void)endInteractiveTransitionToPresented:(_Bool)arg1 forInitialTransition:(_Bool)arg2;
- (void)commitingToEndTransitionToPresented:(_Bool)arg1 forInitialTransition:(_Bool)arg2;
- (_Bool)presentationCancelsTouches;
- (void)_setBiometricAuthenticationEnabledForTransientAppearanceTransition:(_Bool)arg1;
- (_Bool)_shouldUseLightStylePasscodeView;
- (void)_updateReduceTransparencyBackingColor;
- (void)_passcodeLockViewPasscodeEntered:(id)arg1 viaMesa:(_Bool)arg2;
- (_Bool)_shouldEmulateInteractivePresentation;
- (void)_emulateInteractivePresentation;
- (id)_effectiveAverageWallpaperColor;
- (id)displayLayoutElementIdentifier;
- (void)performCustomTransitionToVisible:(_Bool)arg1 withAnimationSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

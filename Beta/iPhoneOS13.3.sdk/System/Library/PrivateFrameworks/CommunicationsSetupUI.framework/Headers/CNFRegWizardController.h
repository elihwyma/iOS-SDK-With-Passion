/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <Preferences/PSSetupController.h>

@class CNFRegController, NSString, _UIBackdropView;

@protocol CNFRegWizardControllerDelegate;

@interface CNFRegWizardController : PSSetupController

{
    CNFRegController *_regController;
    long long _serviceType;
    id <CNFRegWizardControllerDelegate> _firstRunDelegate;
    id _resignListener;
    id _resumeListener;
    struct {
        unsigned int automaticKeyboardWasDisabled:1;
        unsigned int shouldListenForSuspension:1;
        unsigned int canStartNested:1;
        unsigned int canShowSplashScreen:1;
        unsigned int canShowDisabledScreen:1;
        unsigned int hideLearnMoreButton:1;
        unsigned int showSplashOnSignin:1;
        unsigned int skipReloadOnNextViewWillAppear:1;
        unsigned int allowCancel:1;
        unsigned int allowSMS:1;
        unsigned int shouldTerminateInBackground:1;
    } _wizardFlags;
    _UIBackdropView *_backdropView;
}

@property (retain, nonatomic) CNFRegController *regController;
@property (nonatomic) _Bool shouldListenForSuspension;
@property (nonatomic) _Bool shouldTerminateInBackground;
@property (nonatomic) id <CNFRegWizardControllerDelegate> firstRunDelegate;
@property (nonatomic) _Bool canStartNested;
@property (nonatomic) _Bool canShowSplashScreen;
@property (nonatomic) _Bool canShowDisabledScreen;
@property (nonatomic) _Bool allowCancel;
@property (nonatomic) _Bool allowSMS;
@property (nonatomic) _Bool hideLearnMoreButton;
@property (nonatomic) _Bool showSplashOnSignin;
@property (retain, nonatomic) _UIBackdropView *backdropView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)setGlobalAppearanceStyle:(long long)arg1;
+ (void)setSupportsAutoRotation:(_Bool)arg1;

- (id)init;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (void)_applicationDidEnterBackground;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)popViewControllerWithTransition:(int)arg1;
- (void)pushViewController:(id)arg1 transition:(int)arg2;
- (void)setupController;
- (id)initWithRegController:(id)arg1;
- (void)firstRunController:(id)arg1 finishedWithState:(unsigned long long)arg2;
- (void)_restrictionsChanged;
- (void)_applicationDidFinishLaunching;
- (id)initWithServiceTypes:(long long)arg1;
- (void)_stopListeningForResignResume;
- (_Bool)shouldShowFirstRunController;
- (int)_firstRunState:(id)arg1;
- (id)controllerClassesToShow:(_Bool)arg1;
- (void)_doCancel;
- (id)controllersToShow:(_Bool)arg1;
- (void)_updateNavigationBarTitle;
- (void)_updateNavigationBarHiddenForCurrentState;
- (void)_updateNavigationBarHiddenForPop;
- (void)_updateNavigationBarHiddenForPush;
- (void)_startListeningForResignResume;
- (void)_checkRestrictions;
- (void)dismissFinished:(_Bool)arg1;
- (void)dismissWithState:(unsigned long long)arg1;
- (id)controllersToShow;
- (_Bool)skipReloadOnNextViewWillAppear;
- (void)setSkipReloadOnNextViewWillAppear:(_Bool)arg1;

@end

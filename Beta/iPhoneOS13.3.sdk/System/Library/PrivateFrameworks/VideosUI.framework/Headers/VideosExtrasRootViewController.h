/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIViewController.h>

#import <VideosUI/Swift-Protocol.h>

@class IKAppContext, NSArray, NSLayoutConstraint, NSObject, NSString, UIButton, UINavigationController, UIStackView, UITraitCollection, UIView, VideosExtrasArtworkDataSource, VideosExtrasContext, VideosExtrasFeatureContainerViewController, VideosExtrasMainTemplateViewController, VideosExtrasNavigationController;

@protocol IKAppDataStoring, IKAppUserDefaultsStoring, OS_dispatch_queue, VideosExtrasRootViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VideosExtrasRootViewController : UIViewController <Swift>

{
    NSLayoutConstraint *_bottomConstraint;
    VideosExtrasNavigationController *_navigationController;
    NSObject<OS_dispatch_queue> *_imageRequestQueue;
    _Bool _didAttemptRestartAfterAppContextFailure;
    _Bool _showsMenuBar;
    _Bool _showsBuiltInNavigationControls;
    VideosExtrasMainTemplateViewController *_mainTemplateViewController;
    UIView *_extrasMenuBarView;
    VideosExtrasContext *_context;
    id <VideosExtrasRootViewControllerDelegate> _delegate;
    VideosExtrasFeatureContainerViewController *_featureContainer;
    IKAppContext *_applicationContext;
    NSArray *_lastSelectedSnapshotViewControllers;
    UIStackView *_extrasMenuButtonsStackView;
    UIButton *_backButton;
    NSLayoutConstraint *_extrasScrollViewLeadingConstraint;
    id <IKAppDataStoring> _localStorage;
    id <IKAppDataStoring> _vendorStorage;
    id <IKAppUserDefaultsStoring> _userDefaultsStorage;
    VideosExtrasArtworkDataSource *_artworkDataSource;
    struct CGSize _initialPresentationSize;
}

@property (retain, nonatomic) VideosExtrasFeatureContainerViewController *featureContainer;
@property (retain, nonatomic) IKAppContext *applicationContext;
@property (retain, nonatomic) NSArray *lastSelectedSnapshotViewControllers;
@property (retain, nonatomic) UIView *extrasMenuBarView;
@property (retain, nonatomic) UIStackView *extrasMenuButtonsStackView;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) NSLayoutConstraint *extrasScrollViewLeadingConstraint;
@property (retain, nonatomic) id <IKAppDataStoring> localStorage;
@property (retain, nonatomic) id <IKAppDataStoring> vendorStorage;
@property (retain, nonatomic) id <IKAppUserDefaultsStoring> userDefaultsStorage;
@property (retain, nonatomic) VideosExtrasArtworkDataSource *artworkDataSource;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (retain, nonatomic) VideosExtrasMainTemplateViewController *mainTemplateViewController;
@property (nonatomic, readonly) UIView *mainMenuBar;
@property (copy, nonatomic) UITraitCollection *overrideTraitCollection;
@property (weak, nonatomic, readonly) VideosExtrasContext *context;
@property (nonatomic) struct CGSize initialPresentationSize;
@property (weak, nonatomic) id <VideosExtrasRootViewControllerDelegate> delegate;
@property (nonatomic, readonly) NSArray *mainMenuItemElements;
@property (nonatomic) _Bool showsMenuBar;
@property (nonatomic) _Bool showsBuiltInNavigationControls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)currentController;

- (void)dealloc;
- (id)timeZone;
- (void)start;
- (id)initWithContext:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (_Bool)shouldAutorotate;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (_Bool)prefersStatusBarHidden;
- (void)_backButtonPressed:(id)arg1;
- (id)appIdentifier;
- (struct CGSize)screenSize;
- (id)vendorIdentifier;
- (void)overlayTappedBackButton:(id)arg1;
- (id)deviceConfigForContext:(id)arg1;
- (id)navigationControllerForContext:(id)arg1;
- (_Bool)appIsTrusted;
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (id)appJSURL;
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
- (id)viewElementRegistry;
- (_Bool)appUsesDefaultStyleSheets;
- (_Bool)shouldIgnoreJSValidation;
- (id)appLaunchParams;
- (unsigned long long)preferredVideoFormat;
- (unsigned long long)preferredVideoPreviewFormat;
- (id)systemLanguage;
- (id)storeFrontCountryCode;
- (_Bool)isTimeZoneSet;
- (void)showExtrasMenuBarInFrame:(struct CGRect)arg1;
- (void)setClearsStackOnNextPush;
- (void)_stopOldContextIfNeeded;
- (id)_createDataStorageForIdentifier:(id)arg1;
- (void)_setNavigationController:(id)arg1;
- (void)_playbackWillEndNotification:(id)arg1;
- (void)_setUpForApplication;
- (void)_attemptRestart;
- (void)_adjustExtrasVisibilityForViewSize:(struct CGSize)arg1;
- (_Bool)shouldExtrasBeVisibleForViewSize:(struct CGSize)arg1;
- (_Bool)_areExtrasVisible;
- (void)_showExtrasBar:(_Bool)arg1;
- (void)_extrasMenuItemSelected:(id)arg1;
- (id)_extrasMenuBarViewForElements:(id)arg1;
- (_Bool)_setMainDocumentWithViewController:(id)arg1;
- (void)popToFeatureOrMain;
- (void)updateMenuButtonForSelectionAtIndex:(unsigned long long)arg1 deselectedIndex:(unsigned long long)arg2;
- (id)detectMainDocument:(id)arg1;

@end

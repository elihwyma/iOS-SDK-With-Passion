/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

@class NSString, OKPresentationViewController, PHPlaceholderView, PUSlideshowSession, PUSlideshowViewControllerSpec, UITapGestureRecognizer;

@protocol PUSlideshowViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUSlideshowViewController : UIViewController

{
    OKPresentationViewController *_currentPresentationController;
    PUSlideshowViewControllerSpec *_spec;
    UITapGestureRecognizer *_tapGestureRecognizer;
    unsigned long long _playerStateButtonItemIndex;
    _Bool __needsUpdateSpec;
    PUSlideshowSession *_session;
    unsigned long long _mode;
    id <PUSlideshowViewControllerDelegate> _delegate;
    PUSlideshowViewController *__secondScreenBrowser;
    PHPlaceholderView *__slideshowPlaceholderView;
    UIViewController *__slideshowSettingsViewController;
}

@property (retain, nonatomic, setter=_setSecondScreenBrowser:) PUSlideshowViewController *_secondScreenBrowser;
@property (nonatomic, setter=_setNeedsUpdateSpec:) _Bool _needsUpdateSpec;
@property (retain, nonatomic, setter=_setSlideshowPlaceHolderView:) PHPlaceholderView *_slideshowPlaceholderView;
@property (retain, nonatomic, setter=_setSlideshowSettingsViewController:) UIViewController *_slideshowSettingsViewController;
@property (nonatomic, readonly) PUSlideshowSession *session;
@property (nonatomic, readonly) unsigned long long mode;
@property (weak, nonatomic) id <PUSlideshowViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithSession:(id)arg1;
- (void)loadView;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (_Bool)prefersStatusBarHidden;
- (_Bool)_needsUpdate;
- (void)_doneButtonTapped:(id)arg1;
- (void)_airplayButtonTapped:(id)arg1;
- (void)_updateAirplayButton;
- (void)_updatePlaceholder;
- (void)_tapGesture:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)finishSession;
- (void)_updateChromeVisibility;
- (void)couchPotatoPlaybackFinished;
- (void)_updateSpecIfNeeded;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)airPlayControllerRouteAvailabilityChanged:(id)arg1;
- (_Bool)pu_wantsToolbarVisible;
- (_Bool)pu_wantsTabBarVisible;
- (_Bool)pu_wantsNavigationBarVisible;
- (void)airPlayControllerScreenAvailabilityChanged:(id)arg1;
- (id)contentViewControllerForAirPlayController:(id)arg1;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (void)_invalidateSpec;
- (void)slideshowSession:(id)arg1 startDisplayingPresentationViewController:(id)arg2;
- (void)slideshowSession:(id)arg1 stopDisplayingPresentationViewController:(id)arg2;
- (void)settingsDidFinished:(id)arg1;
- (id)initWithSession:(id)arg1 mode:(unsigned long long)arg2;
- (void)_setupChromeBar;
- (void)_setupTapGesture;
- (id)visibleAssets;
- (void)_playerStateButtonTapped:(id)arg1;
- (void)_settingsButtonTapped:(id)arg1;
- (void)_handleAppWillResignActiveNotification:(id)arg1;
- (void)_handleStateChange;
- (void)_dismissSlideshow;
- (void)_installPresentationController:(id)arg1;
- (void)_removeCurrentPresentationController;
- (void)_removeSlideshowSettingsViewController;
- (void)_updatePlayerButton;
- (void)_updateRouteObservation;
- (id)ancestorViewOfInstance:(id)arg1;

@end

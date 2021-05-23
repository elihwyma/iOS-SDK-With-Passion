/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, NSString, PMDurationProvider, PMEditorBottomToolbar, PMEditorDurationViewController, PMEditorMenuViewController, PMMovieContainerViewController, PMMovieProvider, PMMusicProvider, PMSpinnerPlayPauseOverlay, PMTitleEditorProvider, UIButton, UISplitViewController, UIView, VEKProduction, VEKResult;

@protocol MiroEditorViewControllerDelegate;

@interface PMEditorRootViewController : UIViewController

{
    _Bool _isSeparatingOrCollapsing;
    _Bool _previousZoomedToFill;
    _Bool _didMakeEdits;
    _Bool _needsCancelCalled;
    _Bool _didFinishDismissingWasCalled;
    int _splitViewState;
    int _pendingAction;
    PMMovieProvider *_movieProvider;
    id <MiroEditorViewControllerDelegate> _delegate;
    PMMovieContainerViewController *_movieDisplayController;
    UIViewController *_movieDisplayParentViewController;
    UISplitViewController *_contentSplitViewController;
    PMEditorMenuViewController *_menuViewController;
    PMEditorDurationViewController *_durationViewController;
    VEKProduction *_production;
    VEKResult *_lastResult;
    VEKProduction *_previousProduction;
    VEKResult *_previousResult;
    PMTitleEditorProvider *_titleProvider;
    PMDurationProvider *_durationProvider;
    PMMusicProvider *_musicProvider;
    UIView *_playerContainerView;
    UIView *_splitViewContainerView;
    UIButton *_orientationButton;
    PMSpinnerPlayPauseOverlay *_playPauseOverlay;
    NSLayoutConstraint *_playerContainerYOffset;
    NSLayoutConstraint *_playerContainerTargetHeight;
    PMEditorBottomToolbar *_toolbar;
    NSLayoutConstraint *_toolbarHeightConstraint;
    NSLayoutConstraint *_toolbarYOffset;
    NSLayoutConstraint *_aspectRatio;
    NSString *_userEditedTitle;
    NSString *_userEditedSubTitle;
}

@property (retain, nonatomic) UIViewController *movieDisplayParentViewController;
@property (retain, nonatomic) UISplitViewController *contentSplitViewController;
@property (retain, nonatomic) PMEditorMenuViewController *menuViewController;
@property (weak, nonatomic) PMEditorDurationViewController *durationViewController;
@property (retain, nonatomic) PMMovieProvider *movieProvider;
@property (retain, nonatomic) VEKProduction *production;
@property (retain, nonatomic) VEKResult *lastResult;
@property (retain, nonatomic) VEKProduction *previousProduction;
@property (retain, nonatomic) VEKResult *previousResult;
@property (retain, nonatomic) PMTitleEditorProvider *titleProvider;
@property (retain, nonatomic) PMDurationProvider *durationProvider;
@property (retain, nonatomic) PMMusicProvider *musicProvider;
@property (nonatomic) int splitViewState;
@property (nonatomic) _Bool previousZoomedToFill;
@property (nonatomic) _Bool didMakeEdits;
@property (nonatomic) _Bool needsCancelCalled;
@property (nonatomic) _Bool didFinishDismissingWasCalled;
@property (retain, nonatomic) UIView *playerContainerView;
@property (retain, nonatomic) UIView *splitViewContainerView;
@property (retain, nonatomic) UIButton *orientationButton;
@property (retain, nonatomic) PMSpinnerPlayPauseOverlay *playPauseOverlay;
@property (nonatomic) int pendingAction;
@property (retain, nonatomic) NSLayoutConstraint *playerContainerYOffset;
@property (retain, nonatomic) NSLayoutConstraint *playerContainerTargetHeight;
@property (retain, nonatomic) PMEditorBottomToolbar *toolbar;
@property (retain, nonatomic) NSLayoutConstraint *toolbarHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *toolbarYOffset;
@property (retain, nonatomic) NSLayoutConstraint *aspectRatio;
@property (retain, nonatomic) NSString *userEditedTitle;
@property (retain, nonatomic) NSString *userEditedSubTitle;
@property (weak, nonatomic) id <MiroEditorViewControllerDelegate> delegate;
@property (retain, nonatomic) PMMovieContainerViewController *movieDisplayController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool isSeparatingOrCollapsing;
@property (nonatomic, readonly) double toolbarHeight;
@property (nonatomic, readonly) unsigned long long numberOfClipsInMovie;
@property (nonatomic, readonly) double sequenceDuration;

- (void)dealloc;
- (void)cancel;
- (void)done;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)presentationControllerShouldDismiss:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;
- (id)viewController;
- (long long)preferredStatusBarStyle;
- (_Bool)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;
- (id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (_Bool)shouldDismiss;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)cancelButtonAction;
- (void)_hideToolbar;
- (void)assetSuggestionsControllerDidDismiss:(id)arg1;
- (void)editProvider:(id)arg1 didChange:(_Bool)arg2;
- (void)airPlayDidStart;
- (void)airPlayDidEnd;
- (void)playerRateChanged;
- (void)hideToolbarIfNeeded;
- (void)showToolbar;
- (void)pausePlayer;
- (void)setupWithProduction:(id)arg1 andResult:(id)arg2;
- (_Bool)shouldPreventSplitViewSeperation;
- (_Bool)playerViewShouldShowInChildViewControllers;
- (void)setMovieDisplayControllerParent:(id)arg1 andSuperview:(id)arg2;
- (void)playerDidDoContentChange;
- (void)cancelWithBlock:(CDUnknownBlockType)arg1;
- (void)prepareForDismissalWithBlock:(CDUnknownBlockType)arg1;
- (id)_containerViewForPlayer;
- (id)placeSnapshotOfPlayerViewInContainerView:(id)arg1;
- (void)playPauseOverlayTapped:(id)arg1;
- (void)_showToolbar;
- (id)createNavigationWithViewController:(id)arg1;
- (void)_showContentEditorViewController;
- (void)_showDebugPickerViewController:(unsigned long long)arg1;
- (void)prepareLayoutForCollapsedMode;
- (void)prepareLayoutForSpiltMode;
- (void)showTitleEditorViewController;
- (void)showMusicPickerViewController;
- (void)showContentEditorViewController;
- (void)_alertSomeAssetsFailedWithTitle:(id)arg1 message:(id)arg2 okActionBlock:(CDUnknownBlockType)arg3;
- (_Bool)titlesHaveDiverged;
- (_Bool)subTitlesHaveDiverged;
- (void)alertUserOfCancellation;
- (_Bool)editorMenuVisibleInNavigationStackProceeding:(id)arg1;
- (void)didRefreshPlayerItem:(id)arg1 downloadError:(id)arg2;
- (void)resultWasUpdated:(id)arg1;
- (void)contentEditorViewController:(id)arg1 didEditProduction:(id)arg2 didTrim:(_Bool)arg3;
- (void)contentEditorViewControllerDidCancel:(id)arg1;
- (void)showDurationEditorViewController;
- (void)showKeyAssetSelectionPicker;
- (void)showDebugTitleStylePickerViewController;
- (void)showDebugEditStylePickerViewController;
- (void)showDebugTransitionPickerViewController;
- (void)showDebugFilterPickerViewController;
- (void)assetSuggestionsController:(id)arg1 didChangeSelectedAsset:(id)arg2;
- (void)titleDidChangeTo:(id)arg1;
- (void)subTitleDidChangeTo:(id)arg1;
- (void)setupWithMovieProvider:(id)arg1;
- (void)switchPlaybackOrientation:(id)arg1;
- (_Bool)performTitleEditorViewControllerScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4;
- (_Bool)performMusicMenuViewControllerScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4;
- (_Bool)performSoundtrackMenuViewControllerScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4;
- (_Bool)performMainMenuViewControllerScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4;
- (id)miroPPT;
- (_Bool)performScrubberScrollTestScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4;

@end

/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class AVEditBehavior, AVPlayerViewController, NSLayoutConstraint, NSString, PHPlaceholderView, QLMovieEdits, QLOverlayPlayButton, QLVideoScrubberView, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface QLMovieItemViewController

{
    _Bool _previewIsVisisble;
    _Bool _isObservingPlayerExternalPlaybackActive;
    PHPlaceholderView *_airPlayPlaceholderView;
    _Bool _isEditing;
    _Bool _isSavingEditsBeforeDismissing;
    _Bool _assetCanBeRotated;
    AVPlayerViewController *_playerViewController;
    QLOverlayPlayButton *_playButton;
    QLVideoScrubberView *_scrubber;
    NSLayoutConstraint *_bottomScrubberConstraint;
    UIView *_scrubberContainer;
    UIScrollView *_scrubberContainerScrollView;
    double _scrubberVerticalOffset;
    UIView *_playerViewContainer;
    UIScrollView *_playerViewControllerScrollView;
    AVEditBehavior *_editBehavior;
    QLMovieEdits *_edits;
    QLMovieEdits *_editsSinceLastSave;
}

@property (retain, nonatomic) AVPlayerViewController *playerViewController;
@property (retain) QLOverlayPlayButton *playButton;
@property (retain) QLVideoScrubberView *scrubber;
@property (retain) NSLayoutConstraint *bottomScrubberConstraint;
@property (retain) UIView *scrubberContainer;
@property (retain) UIScrollView *scrubberContainerScrollView;
@property (nonatomic) double scrubberVerticalOffset;
@property (nonatomic, readonly) PHPlaceholderView *airPlayPlaceholderView;
@property (retain, nonatomic) UIView *playerViewContainer;
@property (weak, nonatomic) UIScrollView *playerViewControllerScrollView;
@property (retain, nonatomic) AVEditBehavior *editBehavior;
@property (nonatomic) _Bool isEditing;
@property (retain, nonatomic) QLMovieEdits *edits;
@property (retain, nonatomic) QLMovieEdits *editsSinceLastSave;
@property (nonatomic) _Bool isSavingEditsBeforeDismissing;
@property (nonatomic) _Bool assetCanBeRotated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)play;
- (id)accessoryView;
- (long long)preferredWhitePointAdaptivityStyle;
- (id)scrollView;
- (id)transitioningView;
- (void)editButtonTapped;
- (id)editBehaviorAlertActionsForDoneButtonTap:(id)arg1;
- (void)editBehaviorDidCancel:(id)arg1;
- (void)_enterEditMode;
- (_Bool)canSwipeToDismiss;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)canPinchToDismiss;
- (_Bool)canEnterFullScreen;
- (void)transitionDidFinish:(_Bool)arg1 didComplete:(_Bool)arg2;
- (void)transitionDidStart:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)previewDidDisappear:(_Bool)arg1;
- (_Bool)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1;
- (void)performFirstTimeAppearanceActions:(unsigned long long)arg1;
- (id)registeredKeyCommands;
- (id)toolbarButtonsForTraitCollection:(id)arg1;
- (void)handlePerformedKeyCommandIfNeeded:(id)arg1;
- (_Bool)canToggleFullScreen;
- (id)parallaxView;
- (void)buttonPressedWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)savePreviewEditedCopyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)editProgressIndicatorMessage;
- (void)updateInterfaceForSavingEdits;
- (void)updateInterfaceAfterSavingEdits;
- (void)didChangePlayingStatus;
- (void)setPlayControlsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (id)timeLabelScrollView;
- (id)setupPlayerViewWithPlayer:(id)arg1;
- (_Bool)shouldDisplayPlayButtonInNavigationBar;
- (void)_setupEditBehavior;
- (void)_updatePlaceHolderView;
- (void)addScrubberIfNeededWithDeferral;
- (id)scrollViewInView:(id)arg1;
- (_Bool)_videoIsPlaying;
- (void)_updatePlayButtonVisibility;
- (_Bool)_enterEditModeIfPossible;
- (_Bool)shouldAllowEditingContents;
- (void)_updateEditsTrimmingValuesWithTrimStartTime:(double)arg1 trimEndTime:(double)arg2;
- (void)_updateEditMode;
- (void)_showFailedToSaveChangesAlertWithError:(id)arg1;
- (void)_saveMovieIfEdited:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_updateInterfaceAfterExitingEditMode;
- (void)_resetTrimmingValues;
- (void)_rotateIfPossible;
- (void)_rotateMovieRight;
- (void)_saveMovieIfEditedWithEditedCopy:(id)arg1 shouldDismissAfterSaving:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_exitEditMode:(_Bool)arg1;
- (void)_rotateRightButtonTapped;

@end

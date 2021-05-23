/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSProgress, NSString, PXCMMAssetsViewController, PXCMMSession, PXCMMSpecManager, PXMomentShareStatusPresentation, PXMovieProvider, PXOneUpPresentation, PXPhotoDetailsActionMenuController, PXUpdater, UIActivityIndicatorView, UIBarButtonItem, UINavigationBar;

@protocol PXCMMActionControllerDelegate, PXCMMViewControllerDelegate;

@interface PXCMMViewController : UIViewController <Swift>

{
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
    _Bool _hasStartedPreloadingTasks;
    _Bool _didIncrementNumberOfPresentedSendBacks;
    _Bool _showTitleInNavigationBar;
    _Bool _loadingPeopleSuggestions;
    PXCMMSession *_session;
    id <PXCMMViewControllerDelegate> _delegate;
    id <PXCMMActionControllerDelegate> _actionDelegate;
    PXOneUpPresentation *_oneUpPresentation;
    PXCMMSpecManager *_specManager;
    UINavigationBar *_standaloneNavigationBar;
    NSArray *_layoutConstraints;
    PXCMMAssetsViewController *_assetsViewController;
    PXUpdater *_updater;
    NSProgress *_actionProgress;
    UIActivityIndicatorView *_activityIndicatorView;
    UIBarButtonItem *_progressButton;
    UIBarButtonItem *_actionMenuButtonItem;
    PXPhotoDetailsActionMenuController *_activeActionMenuController;
    PXMovieProvider *_movieProvider;
}

@property (nonatomic, readonly) PXOneUpPresentation *oneUpPresentation;
@property (nonatomic, readonly) PXCMMSpecManager *specManager;
@property (retain, nonatomic) UINavigationBar *standaloneNavigationBar;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (nonatomic, readonly) PXCMMAssetsViewController *assetsViewController;
@property (nonatomic) _Bool showTitleInNavigationBar;
@property (nonatomic, readonly) PXUpdater *updater;
@property (retain, nonatomic) NSProgress *actionProgress;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) UIBarButtonItem *progressButton;
@property (retain, nonatomic) UIBarButtonItem *actionMenuButtonItem;
@property (retain, nonatomic) PXPhotoDetailsActionMenuController *activeActionMenuController;
@property (nonatomic, getter=isLoadingPeopleSuggestions) _Bool loadingPeopleSuggestions;
@property (retain, nonatomic) PXMovieProvider *movieProvider;
@property (nonatomic, readonly) PXCMMSession *session;
@property (weak, nonatomic) id <PXCMMViewControllerDelegate> delegate;
@property (weak, nonatomic) id <PXCMMActionControllerDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithSession:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_updateStyle;
- (long long)positionForBar:(id)arg1;
- (void)updateViewConstraints;
- (void)_updateTitle;
- (void)_presentViewController:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_setupNavigationItem;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (_Bool)actionPerformer:(id)arg1 presentViewController:(struct NSObject *)arg2;
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(struct NSObject *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)presentingViewControllerForMovieProvider:(id)arg1;
- (void)didDismissToastViewController:(id)arg1;
- (void)actionMenu:(id)arg1 assetCollectionActionPerformer:(id)arg2 playMovieForAssetCollection:(id)arg3;
- (void)actionMenu:(id)arg1 actionPerformer:(id)arg2 didChangeState:(unsigned long long)arg3;
- (_Bool)actionMenu:(id)arg1 actionPerformer:(id)arg2 presentViewController:(id)arg3;
- (_Bool)actionMenu:(id)arg1 actionPerformer:(id)arg2 dismissViewController:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)completeMyMomentViewController:(id)arg1 performActionForSession:(id)arg2;
- (id)completeMyMomentViewController:(id)arg1 performSendBackActionForSession:(id)arg2;
- (_Bool)shouldShowAddMoreButtonForAssetsViewController:(id)arg1;
- (void)didTapAddMoreButtonForAssetsViewController:(id)arg1;
- (id)oneUpPresentationForAssetsViewController:(id)arg1;
- (void)didPerformDeletionActionForAssetsViewController:(id)arg1;
- (void)assetsViewControllerDidTapActionButton:(id)arg1;
- (void)assetsViewControllerDidTapSendBackActionButton:(id)arg1;
- (void)_activateNotificationSuppressionIfNecessary;
- (void)_deactivateNotificationSuppressionIfNecessary;
- (void)_startPreloadingTasksIfNeeded;
- (_Bool)_shouldShowActionMenu;
- (void)_performCancel;
- (void)_handleActionMenuButtonItem:(id)arg1;
- (void)_updateComponentViewController:(id)arg1 frame:(struct CGRect)arg2;
- (void)_updateComponentsViewControllerLayout;
- (id)_localizedSelectionTitle;
- (void)_updateActionProgress;
- (_Bool)_canPresentComposeRecipientViewController;
- (void)_presentComposeRecipientViewController;
- (void)_completePeopleSuggestionsLoading;
- (void)_handleActionButton;
- (void)_handleComposeRecipientCancelButton:(id)arg1;
- (void)_dismissViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)ppt_setSelecting:(_Bool)arg1;

@end

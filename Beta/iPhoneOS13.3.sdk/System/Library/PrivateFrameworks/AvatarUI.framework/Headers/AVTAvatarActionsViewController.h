/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UIViewController.h>

@class AVTAvatarActionButton, AVTAvatarActionsModel, AVTAvatarEditorViewController, AVTImageTransitioningContainerView, AVTUIEnvironment, AVTViewSession, AVTViewSessionProvider, NSString, UIImageView, UIStackView, UITapGestureRecognizer;

@protocol AVTAvatarActionsViewControllerDelegate, AVTAvatarActionsViewControllerLayout;

@interface AVTAvatarActionsViewController : UIViewController

{
    _Bool _isAnimating;
    _Bool _allowFacetracking;
    id <AVTAvatarActionsViewControllerDelegate> _delegate;
    id <AVTAvatarActionsViewControllerLayout> _currentLayout;
    UIStackView *_buttonsView;
    AVTImageTransitioningContainerView *_avatarContainer;
    AVTAvatarActionButton *_editButton;
    AVTAvatarActionButton *_duplicateButton;
    AVTAvatarActionButton *_deleteButton;
    AVTAvatarActionsModel *_actionsModel;
    AVTViewSessionProvider *_sessionProvider;
    AVTViewSession *_avtViewSession;
    CDUnknownBlockType _postSessionDidBecomeActiveHandler;
    UIImageView *_transitionImageView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    AVTUIEnvironment *_environment;
    AVTAvatarEditorViewController *_editorViewController;
}

@property (retain, nonatomic) UIStackView *buttonsView;
@property (retain, nonatomic) AVTImageTransitioningContainerView *avatarContainer;
@property (retain, nonatomic) AVTAvatarActionButton *editButton;
@property (retain, nonatomic) AVTAvatarActionButton *duplicateButton;
@property (retain, nonatomic) AVTAvatarActionButton *deleteButton;
@property (retain, nonatomic) AVTAvatarActionsModel *actionsModel;
@property (nonatomic, readonly) AVTViewSessionProvider *sessionProvider;
@property (retain, nonatomic) AVTViewSession *avtViewSession;
@property (retain, nonatomic) id <AVTAvatarActionsViewControllerLayout> currentLayout;
@property (copy, nonatomic) CDUnknownBlockType postSessionDidBecomeActiveHandler;
@property (retain, nonatomic) UIImageView *transitionImageView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) _Bool isAnimating;
@property (nonatomic) _Bool allowFacetracking;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (weak, nonatomic) AVTAvatarEditorViewController *editorViewController;
@property (weak, nonatomic) id <AVTAvatarActionsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)layoutViewFromModel:(id)arg1;
- (void)applyLayout:(id)arg1;
- (double)duplicateScaleDuration;
- (double)duplicateScaleDelay;
- (double)deleteMoveInDuration;
- (double)deleteMoveInDelay;
- (void)didTapAvatarView:(id)arg1;
- (void)prepareForAnimatedTransitionWithLayout:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)controllerPresentationWillObstructView:(id)arg1;
- (void)beginUsingAVTViewFromSession:(id)arg1;
- (void)actionsModelDidUpdateInlineActionButtons:(id)arg1;
- (void)actionsModel:(id)arg1 didDuplicateToRecord:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)actionsModel:(id)arg1 recordUpdateForDeletingRecord:(id)arg2;
- (void)actionsModelDidFinish:(id)arg1;
- (void)actionsModel:(id)arg1 didDeleteRecord:(id)arg2 withRecordUpdate:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)actionsModel:(id)arg1 shouldDeleteRecord:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)presentEditorViewController:(id)arg1 forActionsModel:(id)arg2 isCreate:(_Bool)arg3;
- (void)actionsModel:(id)arg1 didAddRecord:(id)arg2;
- (void)actionsModel:(id)arg1 didEditRecord:(id)arg2;
- (void)actionsModel:(id)arg1 didCancelEditingRecord:(id)arg2;
- (void)dismissEditorViewController:(id)arg1 forActionsModel:(id)arg2 wasCreate:(_Bool)arg3 didEdit:(_Bool)arg4 animated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (id)initWithAVTViewSessionProvider:(id)arg1 actionsModel:(id)arg2 environment:(id)arg3;
- (void)didTapDone:(id)arg1;
- (void)rebuildLayout;
- (void)beginAVTViewSessionWithDidBeginBlock:(CDUnknownBlockType)arg1;
- (void)configureUserInfoLabel;
- (void)configureAVTViewSession:(id)arg1 withAvatarRecord:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)createTransitionImageViewIfNeeded;
- (void)performTransitionAfterDuplicateToRecord:(id)arg1 previousRecordImage:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)performTransitionAfterDeleteToRecord:(id)arg1 fromLeft:(_Bool)arg2 previousRecordImage:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (long long)interfaceOrientationForFaceTrackingManager:(id)arg1;
- (void)performEdit;

@end

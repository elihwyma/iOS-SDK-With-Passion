/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UIViewController.h>

@class AVTAvatarAttributeEditorViewController, AVTAvatarRecord, AVTSplashScreenViewController, AVTUIEnvironment, AVTViewSessionProvider, NSString, UIBarButtonItem;

@protocol AVTAvatarEditorViewControllerDelegate, AVTAvatarStoreInternal, AVTUILogger;

@interface AVTAvatarEditorViewController : UIViewController

{
    _Bool _isCreating;
    _Bool _hasChanges;
    id <AVTAvatarEditorViewControllerDelegate> _delegate;
    AVTAvatarRecord *_initialAvatarRecord;
    id <AVTAvatarStoreInternal> _store;
    AVTViewSessionProvider *_avtViewSessionProvider;
    AVTUIEnvironment *_environment;
    id <AVTUILogger> _logger;
    UIBarButtonItem *_cancelButtonItem;
    UIBarButtonItem *_doneButtonItem;
    AVTSplashScreenViewController *_splashScreenViewController;
    AVTAvatarAttributeEditorViewController *_attributeEditorViewController;
}

@property (retain, nonatomic) AVTAvatarRecord *initialAvatarRecord;
@property (nonatomic, readonly) id <AVTAvatarStoreInternal> store;
@property (nonatomic, readonly) AVTViewSessionProvider *avtViewSessionProvider;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (nonatomic, readonly) _Bool isCreating;
@property (retain, nonatomic) UIBarButtonItem *cancelButtonItem;
@property (retain, nonatomic) UIBarButtonItem *doneButtonItem;
@property (nonatomic) _Bool hasChanges;
@property (nonatomic, readonly) AVTSplashScreenViewController *splashScreenViewController;
@property (nonatomic, readonly) AVTAvatarAttributeEditorViewController *attributeEditorViewController;
@property (weak, nonatomic) id <AVTAvatarEditorViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)viewControllerForCreatingAvatarInStore:(id)arg1;
+ (id)defaultSessionProvider;
+ (id)viewControllerForEditingAvatar:(id)arg1 avtViewSessionProvider:(id)arg2 store:(id)arg3;
+ (id)viewControllerForCreatingAvatarInStore:(id)arg1 avtViewSessionProvider:(id)arg2;
+ (_Bool)shouldShowSplashScreen;
+ (id)viewControllerForEditingAvatar:(id)arg1 store:(id)arg2;

- (void)finish:(id)arg1;
- (void)viewDidLoad;
- (_Bool)presentationControllerShouldDismiss:(id)arg1;
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)isModalInPresentation;
- (void)cancel:(id)arg1;
- (void)applyLayout:(id)arg1;
- (void)splashScreenViewControllerDidFinish:(id)arg1;
- (void)setDisableAvatarSnapshotting:(_Bool)arg1;
- (void)prepareForAnimatedTransitionWithLayout:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithAvatarRecord:(id)arg1 avtViewSessionProvider:(id)arg2 store:(id)arg3 enviroment:(id)arg4 isCreating:(_Bool)arg5;
- (void)setupInitialViewState;
- (id)appropriatePresentationController;
- (_Bool)disableAvatarSnapshotting;
- (id)visibleLayout;
- (void)loadSplashScreen;
- (void)loadAttributeEditorViewWithAvatarRecord:(id)arg1;
- (void)configureNavigationItems;
- (void)confirmCancel;
- (void)handleDiscardAttempt;
- (void)attributeEditorDidMakeFirstSelection:(id)arg1;
- (void)controllerPresentationWillObstructView:(id)arg1;
- (void)prepareForPresetsScrollTestOnCategory:(id)arg1 readyHandler:(CDUnknownBlockType)arg2;
- (void)configurePPTMemoji;

@end

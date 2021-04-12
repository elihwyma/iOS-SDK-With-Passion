//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AvatarUI/AVTAvatarAttributeEditorViewControllerDelegate-Protocol.h>
#import <AvatarUI/AVTSplashScreenViewControllerDelegate-Protocol.h>

@class AVTAvatarAttributeEditorViewController, AVTAvatarRecord, AVTSplashScreenViewController, AVTUIEnvironment, AVTViewSessionProvider, UIBarButtonItem;
@protocol AVTAvatarEditorViewControllerDelegate, AVTAvatarStoreInternal, AVTUILogger;

@interface AVTAvatarEditorViewController : UIViewController <AVTSplashScreenViewControllerDelegate, AVTAvatarAttributeEditorViewControllerDelegate, UIAdaptivePresentationControllerDelegate>
{
    BOOL _isCreating;
    BOOL _hasChanges;
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

+ (id)viewControllerForCreatingAvatarInStore:(id)arg1 avtViewSessionProvider:(id)arg2;
+ (id)viewControllerForCreatingAvatarInStore:(id)arg1;
+ (id)viewControllerForEditingAvatar:(id)arg1 avtViewSessionProvider:(id)arg2 store:(id)arg3;
+ (id)viewControllerForEditingAvatar:(id)arg1 store:(id)arg2;
+ (id)defaultSessionProvider;
+ (BOOL)shouldShowSplashScreen;
@property(readonly, nonatomic) AVTAvatarAttributeEditorViewController *attributeEditorViewController; // @synthesize attributeEditorViewController=_attributeEditorViewController;
@property(readonly, nonatomic) AVTSplashScreenViewController *splashScreenViewController; // @synthesize splashScreenViewController=_splashScreenViewController;
@property(nonatomic) BOOL hasChanges; // @synthesize hasChanges=_hasChanges;
@property(retain, nonatomic) UIBarButtonItem *doneButtonItem; // @synthesize doneButtonItem=_doneButtonItem;
@property(retain, nonatomic) UIBarButtonItem *cancelButtonItem; // @synthesize cancelButtonItem=_cancelButtonItem;
@property(readonly, nonatomic) BOOL isCreating; // @synthesize isCreating=_isCreating;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) AVTViewSessionProvider *avtViewSessionProvider; // @synthesize avtViewSessionProvider=_avtViewSessionProvider;
@property(readonly, nonatomic) id <AVTAvatarStoreInternal> store; // @synthesize store=_store;
@property(retain, nonatomic) AVTAvatarRecord *initialAvatarRecord; // @synthesize initialAvatarRecord=_initialAvatarRecord;
@property(nonatomic) __weak id <AVTAvatarEditorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)controllerPresentationWillObstructView:(id)arg1;
- (void)confirmCancel;
- (void)handleDiscardAttempt;
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;
- (BOOL)presentationControllerShouldDismiss:(id)arg1;
- (void)attributeEditorDidMakeFirstSelection:(id)arg1;
- (void)splashScreenViewControllerDidFinish:(id)arg1;
- (void)finish:(id)arg1;
- (void)cancel:(id)arg1;
- (void)configureNavigationItems;
- (void)loadAttributeEditorViewWithAvatarRecord:(id)arg1;
- (void)loadSplashScreen;
- (void)setupInitialViewState;
- (id)visibleLayout;
- (void)applyLayout:(id)arg1;
- (void)prepareForAnimatedTransitionWithLayout:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (BOOL)disableAvatarSnapshotting;
- (void)setDisableAvatarSnapshotting:(BOOL)arg1;
- (BOOL)isModalInPresentation;
- (id)appropriatePresentationController;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithAvatarRecord:(id)arg1 avtViewSessionProvider:(id)arg2 store:(id)arg3 enviroment:(id)arg4 isCreating:(BOOL)arg5;
- (void)configurePPTMemoji;
- (void)prepareForPresetsScrollTestOnCategory:(id)arg1 readyHandler:(id /* CDUnknownBlockType */)arg2;

@end


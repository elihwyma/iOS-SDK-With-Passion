/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIViewController.h>

@class CFXEffectPickerViewController, IMADockViewController, NSLayoutConstraint, NSObject, NSString, UIView;

@protocol CFXEffectBrowserContentPresenterDelegate, CFXEffectBrowserViewControllerDelegate, OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;

@interface CFXEffectBrowserViewController : UIViewController

{
    id <CFXEffectBrowserContentPresenterDelegate> _contentPresenterDelegate;
    NSString *_selectedAppIdentifier;
    id <CFXEffectBrowserViewControllerDelegate> _delegate;
    CFXEffectPickerViewController *_effectPickerViewController;
    UIView *_messagesAppsDockContainerView;
    IMADockViewController *_messagesAppsDockViewController;
    NSObject<OS_dispatch_semaphore> *_animatedPreviewWritingSemaphore;
    NSObject<OS_dispatch_queue> *_animatedPreviewWritingQueue;
    NSObject<OS_dispatch_group> *_animatedPreviewProcessingGroup;
    UIViewController *_contentPresenter;
    NSLayoutConstraint *_madWidthConstraint;
    NSLayoutConstraint *_madHeightConstraint;
    NSLayoutConstraint *_madLeadingConstraint;
    NSLayoutConstraint *_madTrailingConstraint;
    NSLayoutConstraint *_madTopConstraint;
    NSLayoutConstraint *_madBottomConstraint;
    NSLayoutConstraint *_madExpandedAppButtonsHeightConstraint;
}

@property (weak, nonatomic) id <CFXEffectBrowserViewControllerDelegate> delegate;
@property (retain, nonatomic) CFXEffectPickerViewController *effectPickerViewController;
@property (retain, nonatomic) UIView *messagesAppsDockContainerView;
@property (retain, nonatomic) IMADockViewController *messagesAppsDockViewController;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *animatedPreviewWritingSemaphore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *animatedPreviewWritingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *animatedPreviewProcessingGroup;
@property (weak, nonatomic) UIViewController *contentPresenter;
@property (retain, nonatomic) NSLayoutConstraint *madWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *madHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *madLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *madTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *madTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *madBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *madExpandedAppButtonsHeightConstraint;
@property (retain, nonatomic) NSString *selectedAppIdentifier;
@property (weak, nonatomic) id <CFXEffectBrowserContentPresenterDelegate> contentPresenterDelegate;
@property (nonatomic) _Bool showAppIconBorders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIViewController *dockPresentationViewController;
@property (nonatomic, readonly) _Bool expandedAppShouldDismissOnDragSuccess;
@property (nonatomic, readonly) struct CGSize expandedAppViewControllerSize;

+ (struct CGSize)CFX_sizeOfImageAtURL:(id)arg1;
+ (struct CGSize)CFX_droppedSizeForSticker:(id)arg1 dropTarget:(id)arg2;

- (void)dealloc;
- (void)loadView;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)addSticker:(id)arg1;
- (void)avatarPicker:(id)arg1 didSelectAvatarRecord:(id)arg2;
- (void)avatarPickerDidEndCameraSession:(id)arg1;
- (void)avatarPickerWillStartCameraSession:(id)arg1;
- (_Bool)shouldRotateCellsForDeviceOrientation;
- (id)initWithDelegate:(id)arg1 contentPresenter:(id)arg2;
- (void)configureUIForOrientation;
- (void)hideBrowserAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshEffectBrowserForCameraFlip;
- (id)selectedAnimojiIdentifierForEffectBrowserViewController:(id)arg1;
- (id)localizedPromptForHidingAnimojiForEffectBrowserViewController:(id)arg1;
- (void)effectPickerViewController:(id)arg1 didPickEffect:(id)arg2;
- (id)selectedFilterIdentifierForEffectPickerViewController:(id)arg1;
- (void)initMessagesAppsDockViewController;
- (void)removeEffectPickerViewController;
- (void)CFX_updateAVTAvatarPickerforMessagesAppViewController:(id)arg1;
- (void)compactCurrentMessagesApp;
- (void)CFX_addSticker:(id)arg1 atDropTarget:(id)arg2;
- (void)displayPickerForEffectTypeIdentifier:(id)arg1 messagesAppViewController:(id)arg2 embedInMessageAppViewController:(_Bool)arg3;
- (void)addSticker:(id)arg1 atDropTarget:(id)arg2;
- (void)didSelectAppWithBundleIdentifier:(id)arg1;
- (void)presentExpandedAppViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissExpandedAppViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dockDidMagnify:(_Bool)arg1;
- (void)commitAnimatedLayoutChanges;

@end

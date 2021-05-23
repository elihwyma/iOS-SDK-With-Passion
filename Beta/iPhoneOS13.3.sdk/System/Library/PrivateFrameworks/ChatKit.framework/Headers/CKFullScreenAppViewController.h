/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

@class CKAppGrabberView, CKBrowserDragManager, CKConversation, CKDismissView, CKFullScreenAppNavbarManager, CKImmediatePanGestureRecognizer, IMBalloonPlugin, IMBalloonPluginDataSource, NSArray, NSData, NSNumber, NSObject, NSString, UILongPressGestureRecognizer, UIView, UIViewPropertyAnimator;

@protocol CKBrowserViewControllerProtocol, CKBrowserViewControllerSendDelegate, CKFullScreenAppViewControllerDelegate, UIViewControllerTransitioningDelegate;

@interface CKFullScreenAppViewController : UIViewController

{
    CKAppGrabberView *_grabberView;
    CKImmediatePanGestureRecognizer *_collapseGestureTracker;
    UIViewPropertyAnimator *_collapsePropertyAnimator;
    _Bool _shouldDoCollapseInteraction;
    _Bool _collapseInteractionDidMove;
    struct CGPoint _collapseGestureStartingLocation;
    UILongPressGestureRecognizer *_touchTracker;
    _Bool _addsVerticalPaddingForStatusBar;
    _Bool _fadesOutDuringStickerDrag;
    _Bool _usesDimmingView;
    _Bool _inTransition;
    _Bool _inDragAndDrop;
    UIViewController<CKBrowserViewControllerProtocol> *_contentViewController;
    id <CKFullScreenAppViewControllerDelegate> _delegate;
    UIView *_contentView;
    CKDismissView *_dismissView;
    CKConversation *_conversation;
    CKFullScreenAppNavbarManager *_navbarManager;
    unsigned long long _transitionDirection;
    long long _lastKnownDeviceOrientation;
    struct CGRect _initialBrowserFrame;
    struct CGRect _targetBrowserFrame;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIViewController *presentationViewController;
@property (weak, nonatomic) NSObject<CKBrowserViewControllerSendDelegate> *sendDelegate;
@property (nonatomic, readonly) IMBalloonPlugin *balloonPlugin;
@property (retain, nonatomic) IMBalloonPluginDataSource *balloonPluginDataSource;
@property (nonatomic) _Bool isiMessage;
@property (nonatomic) NSString *conversationID;
@property (nonatomic, readonly) _Bool wantsDarkUI;
@property (nonatomic, readonly) _Bool wantsOpaqueUI;
@property (nonatomic, readonly) _Bool supportsQuickView;
@property (nonatomic, readonly) _Bool shouldSuppressEntryView;
@property (nonatomic) _Bool isPrimaryViewController;
@property (nonatomic, readonly, getter=isDismissing) _Bool dismissing;
@property (nonatomic, readonly) _Bool mayBeKeptInViewHierarchy;
@property (nonatomic, readonly) long long browserPresentationStyle;
@property (nonatomic, readonly) _Bool shouldShowChatChrome;
@property (nonatomic, readonly) _Bool inExpandedPresentation;
@property (nonatomic, readonly) _Bool inFullScreenModalPresentation;
@property (retain, nonatomic) NSString *sender;
@property (retain, nonatomic) NSArray *recipients;
@property (nonatomic, readonly) _Bool wasExpandedPresentation;
@property (retain, nonatomic) NSData *conversationEngramID;
@property (nonatomic, readonly) unsigned long long badgeValue;
@property (nonatomic, readonly) CKBrowserDragManager *browserDragManager;
@property (nonatomic) long long currentBrowserConsumer;
@property (nonatomic, readonly) UIViewController *remoteViewController;
@property (nonatomic, readonly) struct CGRect horizontalSwipeExclusionRect;
@property (nonatomic, readonly) _Bool canReplaceDataSource;
@property (retain, nonatomic) NSNumber *adamID;
@property (nonatomic, readonly) long long parentModalPresentationStyle;
@property (weak, nonatomic, readonly) id <UIViewControllerTransitioningDelegate> parentTransitioningDelegate;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) CKDismissView *dismissView;
@property (nonatomic) _Bool inTransition;
@property (retain, nonatomic) CKConversation *conversation;
@property (retain, nonatomic) CKFullScreenAppNavbarManager *navbarManager;
@property (nonatomic) unsigned long long transitionDirection;
@property (nonatomic) struct CGRect initialBrowserFrame;
@property (nonatomic) struct CGRect targetBrowserFrame;
@property (nonatomic) _Bool inDragAndDrop;
@property (nonatomic) long long lastKnownDeviceOrientation;
@property (nonatomic) _Bool addsVerticalPaddingForStatusBar;
@property (nonatomic) _Bool fadesOutDuringStickerDrag;
@property (nonatomic) _Bool usesDimmingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *contentViewController;
@property (weak, nonatomic) id <CKFullScreenAppViewControllerDelegate> delegate;

- (void)dealloc;
- (_Bool)isLoaded;
- (void)loadView;
- (id)traitCollection;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)dismiss;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;
- (id)inputAccessoryView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (_Bool)canBecomeFirstResponder;
- (long long)preferredStatusBarStyle;
- (void)collapse;
- (void)collapse:(id)arg1;
- (void)_dismiss:(id)arg1;
- (void)navbarManagerDidReceiveMessage:(id)arg1;
- (void)navbarManagerDidDismissAllMessages:(id)arg1;
- (id)initWithConversation:(id)arg1 plugin:(id)arg2;
- (id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2;
- (id)initWithBalloonPlugin:(id)arg1;
- (_Bool)_currentPluginIsJellyfish;
- (_Bool)_shouldShowDimmingView;
- (void)animateBrowserViewFromSourceRect:(struct CGRect)arg1 interactive:(_Bool)arg2 grabberView:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)animateBrowserViewToTargetRect:(struct CGRect)arg1 grabberView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGRect)finalContentViewFrame;
- (void)_updateDimmingViewAlpha;
- (void)_dragBegan:(id)arg1;
- (void)_dragEnded:(id)arg1;
- (_Bool)_currentPluginIsAppManager;
- (double)topAreaHeight;
- (struct CGRect)leftRightSafeAreaInsetRect:(struct CGRect)arg1;
- (void)updateGrabberTitleAndIconForPlugin:(id)arg1;
- (void)collapseGestureTouchMoved:(id)arg1;
- (void)touchTrackerRecognized:(id)arg1;
- (void)setupPausedCollapseAnimatorIfNeeded;
- (double)collapseTargetOriginY;
- (void)reverseAndCleanupCollapseAnimator;
- (_Bool)_currentPluginIsAppStore;
- (void)appGrabberViewCloseButtonTapped:(id)arg1;
- (void)addNewGrabberView;
- (void)hideDimmingView;
- (void)setGrabberView:(id)arg1;

@end

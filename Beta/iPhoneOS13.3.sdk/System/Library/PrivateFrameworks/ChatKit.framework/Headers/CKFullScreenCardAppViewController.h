/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

#import <ChatKit/Swift-Protocol.h>

@class CKBrowserDragManager, CKConversation, CKDismissView, IMBalloonPlugin, IMBalloonPluginDataSource, NSArray, NSData, NSNumber, NSObject, NSString, UIView;

@protocol CKBrowserViewControllerProtocol, CKBrowserViewControllerSendDelegate, CKFullScreenAppViewControllerDelegate, UIViewControllerTransitioningDelegate;

@interface CKFullScreenCardAppViewController : UIViewController <Swift>

{
    _Bool _inTransition;
    UIViewController<CKBrowserViewControllerProtocol> *_contentViewController;
    id <CKFullScreenAppViewControllerDelegate> _delegate;
    id <UIViewControllerTransitioningDelegate> _parentTransitioningDelegate;
    UIView *_contentView;
    CKDismissView *_dismissView;
    CKConversation *_conversation;
    long long _lastKnownDeviceOrientation;
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
@property (nonatomic) long long lastKnownDeviceOrientation;
@property (weak, nonatomic, readonly) id <UIViewControllerTransitioningDelegate> parentTransitioningDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *contentViewController;
@property (weak, nonatomic) id <CKFullScreenAppViewControllerDelegate> delegate;

- (void)dealloc;
- (_Bool)isLoaded;
- (void)loadView;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)dismiss;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;
- (id)inputAccessoryView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (_Bool)canBecomeFirstResponder;
- (long long)preferredStatusBarStyle;
- (id)initWithConversation:(id)arg1 plugin:(id)arg2;
- (id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2;
- (id)initWithBalloonPlugin:(id)arg1;
- (void)_handleRemoteConnectionInterrupted:(id)arg1;
- (_Bool)_currentPluginIsJellyfish;
- (_Bool)_shouldShowDimmingView;
- (void)animateBrowserViewFromSourceRect:(struct CGRect)arg1 interactive:(_Bool)arg2 grabberView:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)animateBrowserViewToTargetRect:(struct CGRect)arg1 grabberView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGRect)finalContentViewFrame;
- (void)_updateDimmingViewAlpha;

@end

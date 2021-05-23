/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CKConversation, CKFullScreenAppViewController, NSString, UINavigationController, UIViewController, UIWindow;

@protocol CKBrowserTransitionCoordinatorDelegate, CKBrowserViewControllerProtocol, CKBrowserViewControllerSendDelegate;

@interface CKBrowserTransitionCoordinator : NSObject

{
    _Bool _expanded;
    _Bool _underTest;
    id <CKBrowserTransitionCoordinatorDelegate> _delegate;
    long long _currentConsumer;
    CKFullScreenAppViewController *_fullscreenViewController;
    UIViewController *_presentingViewController;
    CKConversation *_conversation;
    id <CKBrowserViewControllerSendDelegate> _sendDelegate;
    UIViewController<CKBrowserViewControllerProtocol> *_currentBrowser;
    UIWindow *_appWindow;
    UIWindow *_previousKeyWindow;
    UIWindow *_preModalKeyWindow;
    long long _lastTransitionReason;
    UIWindow *_modalAppWindow;
    UINavigationController *_presentedModalBrowserNavigationController;
    UIViewController<CKBrowserViewControllerProtocol> *_currentModalBrowser;
    struct CGRect _cachedCompactFrame;
}

@property (retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *currentBrowser;
@property (nonatomic) long long currentConsumer;
@property (nonatomic, getter=isExpanded) _Bool expanded;
@property (retain, nonatomic) CKFullScreenAppViewController *fullscreenViewController;
@property (retain, nonatomic) UIWindow *appWindow;
@property (weak, nonatomic) UIWindow *previousKeyWindow;
@property (weak, nonatomic) UIWindow *preModalKeyWindow;
@property (nonatomic) struct CGRect cachedCompactFrame;
@property (nonatomic) long long lastTransitionReason;
@property (retain, nonatomic) UIWindow *modalAppWindow;
@property (retain, nonatomic) UINavigationController *presentedModalBrowserNavigationController;
@property (retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *currentModalBrowser;
@property (weak, nonatomic) id <CKBrowserTransitionCoordinatorDelegate> delegate;
@property (nonatomic, readonly, getter=isPresentingFullScreenModal) _Bool presentingFullScreenModal;
@property (nonatomic, readonly) _Bool wasCurrentBrowserExpanded;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) CKConversation *conversation;
@property (weak, nonatomic) id <CKBrowserViewControllerSendDelegate> sendDelegate;
@property (nonatomic) _Bool underTest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)fullscreenAppViewControllerDidTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (double)fullscreenAppViewControllerCollapsedContentHeight:(id)arg1;
- (_Bool)shouldAlwaysShowAppTitle;
- (void)fullscreenAppViewController:(id)arg1 hasUpdatedLastTouchDate:(id)arg2;
- (void)fullscreenAppViewControllerWantsToCollapse:(id)arg1;
- (_Bool)fullscreenAppViewControllerShouldDismissOnDragSuccess:(id)arg1;
- (void)dismissCurrentFullScreenModalAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissCurrentFullscreenBrowserAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fullscreenAppViewController:(id)arg1 wantsToSwitchToPlugin:(id)arg2 datasource:(id)arg3;
- (void)fullscreenAppViewControllerSwitcherDidSelectAppStore:(id)arg1;
- (void)fullscreenAppViewControllerSwitcherDidSelectAppManager:(id)arg1;
- (id)appTitleOverride;
- (id)appIconOverride;
- (_Bool)usePresentationWindowDuringTransition;
- (id)requestOwnershipOfBrowserForConsumer:(long long)arg1;
- (void)setExpanded:(_Bool)arg1 withReason:(long long)arg2;
- (id)transitionViewController;
- (void)releaseOwnershipOfBrowserForConsumer:(long long)arg1;
- (_Bool)isHostingRemoteKeyboardView;
- (void)transitionCurrentBrowserToCollapsedPresentationAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)updateBrowserSessionForPlugin:(id)arg1 datasource:(id)arg2;
- (void)transitionCurrentBrowserToExpandedPresentationAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentPluginFullScreenModal:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end

/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSMutableDictionary, NSString, NSURL, SFBrowserRemoteViewController, SFInteractiveDismissController, SFQueueingServiceViewControllerProxy, SFSafariLaunchPlaceholderView, SFSafariViewControllerConfiguration, UIColor, UIView, _SFURLTextPreviewViewController, _UIAsyncInvocation, _WKActivatedElementInfo;

@protocol SFSafariViewControllerDelegate, SFServiceViewControllerProtocol;

@interface SFSafariViewController : UIViewController

{
    SFBrowserRemoteViewController *_remoteViewController;
    _UIAsyncInvocation *_cancelViewServiceRequest;
    _Bool _hasBeenDisplayedAtLeastOnce;
    _Bool _remoteViewControllerHasBeenAdded;
    NSArray *_previewActions;
    _WKActivatedElementInfo *_activatedElementInfo;
    NSArray *_customActivities;
    NSMutableDictionary *_activitiesMap;
    NSArray *_activityItemsForCustomActivities;
    _Bool _swipeGestureEnabled;
    SFInteractiveDismissController *_interactiveDismissController;
    SFSafariLaunchPlaceholderView *_launchPlaceholderView;
    long long _displayMode;
    SFSafariViewControllerConfiguration *_configuration;
    _Bool _viewSizeIsTransitioning;
    struct UIEdgeInsets _verticalScrollIndicatorBaseInsets;
    struct UIEdgeInsets _horizontalScrollIndicatorBaseInsets;
    _SFURLTextPreviewViewController *_textPreviewViewController;
    UIView *_linkPreviewHitTestView;
    _Bool _defersAddingRemoteViewController;
    id <SFSafariViewControllerDelegate> _delegate;
    UIColor *_preferredBarTintColor;
    UIColor *_preferredControlTintColor;
    long long _dismissButtonStyle;
    SFQueueingServiceViewControllerProxy<SFServiceViewControllerProtocol> *_serviceProxy;
    NSURL *_initialURL;
}

@property (nonatomic, setter=_setShowingLinkPreview:) _Bool _showingLinkPreview;
@property (nonatomic, setter=_setShowingLinkPreviewWithMinimalUI:) _Bool _showingLinkPreviewWithMinimalUI;
@property (retain, nonatomic, setter=_setPreviewActions:) NSArray *_previewActions;
@property (retain, nonatomic, setter=_setActivatedElementInfo:) _WKActivatedElementInfo *_activatedElementInfo;
@property (nonatomic, readonly) SFQueueingServiceViewControllerProxy<SFServiceViewControllerProtocol> *serviceProxy;
@property (nonatomic, readonly) NSURL *initialURL;
@property (nonatomic) _Bool defersAddingRemoteViewController;
@property (weak, nonatomic) id <SFSafariViewControllerDelegate> delegate;
@property (copy, nonatomic, readonly) SFSafariViewControllerConfiguration *configuration;
@property (retain, nonatomic) UIColor *preferredBarTintColor;
@property (retain, nonatomic) UIColor *preferredControlTintColor;
@property (nonatomic) long long dismissButtonStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)setTransitioningDelegate:(id)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (_Bool)_allowsUserInteractionWhenPreviewedInContextMenu;
- (id)previewActionItems;
- (void)_boundingPathMayHaveChangedForView:(id)arg1 relativeToBoundsOriginOnly:(_Bool)arg2;
- (void)_addRemoteView;
- (id)initWithURL:(id)arg1 configuration:(id)arg2;
- (void)_addRemoteViewControllerIfNeeded;
- (void)remoteViewControllerWillDismiss:(id)arg1;
- (void)remoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
- (void)linkPreviewHeader:(id)arg1 didEnableLinkPreview:(_Bool)arg2;
- (void)_restartServiceViewController;
- (void)remoteViewController:(id)arg1 hostApplicationOpenURL:(id)arg2;
- (void)_connectToService;
- (void)serviceProxyWillQueueInvocation:(id)arg1;
- (void)remoteViewControllerDidLoadWebView:(id)arg1;
- (void)remoteViewController:(id)arg1 setSwipeGestureEnabled:(_Bool)arg2;
- (void)remoteViewController:(id)arg1 didFinishInitialLoad:(_Bool)arg2;
- (void)remoteViewController:(id)arg1 fetchActivityViewControllerInfoForURL:(id)arg2 title:(id)arg3;
- (void)remoteViewController:(id)arg1 executeCustomActivityProxyID:(id)arg2;
- (void)remoteViewController:(id)arg1 initialLoadDidRedirectToURL:(id)arg2;
- (void)remoteViewController:(id)arg1 didDecideShouldShowLinkPreviews:(_Bool)arg2;
- (void)_setUpWithURL:(id)arg1 configuration:(id)arg2;
- (void)_updateScrollViewIndicatorInsets;
- (void)_forwardNotificationToViewService:(id)arg1;
- (void)_updatePreviewViewControllerWithLinkPreviewEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_removeRemoteViewController;
- (id)_fetchCustomActivitiesForURL:(id)arg1 title:(id)arg2;
- (id)_fetchExcludedActivityTypesForURL:(id)arg1 title:(id)arg2;
- (void)_setEdgeSwipeDismissalEnabled:(_Bool)arg1;
- (void)interactiveDismissControllerDidBegin:(id)arg1;
- (void)interactiveDismissControllerDidEnd:(id)arg1;
- (void)interactiveDismissControllerDidCancel:(id)arg1;
- (id)initWithURL:(id)arg1 entersReaderIfAvailable:(_Bool)arg2;
- (void)_updateLinkPreviewHitTestView;
- (id)_defaultPreviewActionItems;

@end

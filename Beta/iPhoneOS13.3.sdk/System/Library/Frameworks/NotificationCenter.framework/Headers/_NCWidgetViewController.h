/*
 Image: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
 */

#import <UIKit/UIViewController.h>

@class NSMapTable, NSObject, NSString, UIScrollViewDelayedTouchesBeganGestureRecognizer, UIView;

@protocol NCWidgetProvidingPrivate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _NCWidgetViewController : UIViewController

{
    NSObject<OS_dispatch_queue> *_remoteViewControllerProxyQueue;
    NSMapTable *_wrappedAppearStatesToOpenTransactionIDs;
    UIScrollViewDelayedTouchesBeganGestureRecognizer *_touchDelayGestureRecognizer;
    struct CGRect _initialBounds;
    _Bool _snapshotTimestampsEnabled;
    _Bool _clientUsesAutolayout;
    struct {
        unsigned int implementsPerformUpdateWithCompletionHandler:1;
        unsigned int implementsMarginInsets:1;
        unsigned int implementsActiveDisplayModeDidChange:1;
        unsigned int implementsDidBecomeForeground:1;
        unsigned int implementsVisibleFrameDidChange:1;
    } _contentProvidingViewControllerFlags;
    UIViewController<NCWidgetProvidingPrivate> *_contentProvidingViewController;
    long long _visibilityState;
    UIView *_contentView;
    NSString *_widgetIdentifier;
    NSString *_containerIdentifier;
    struct UIEdgeInsets _clientMarginInsets;
    struct UIEdgeInsets _initialLayoutMargins;
}

@property (retain, nonatomic, getter=_contentView, setter=_setContentView:) UIView *contentView;
@property (nonatomic, getter=_clientMarginInsets, setter=_setClientMarginInsets:) struct UIEdgeInsets clientMarginInsets;
@property (nonatomic, getter=_initialLayoutMargins, setter=_setInitialLayoutMargins:) struct UIEdgeInsets initialLayoutMargins;
@property (retain, nonatomic, getter=_contentProvidingViewController) UIViewController<NCWidgetProvidingPrivate> *contentProvidingViewController;
@property (copy, nonatomic, getter=_widgetIdentifier) NSString *widgetIdentifier;
@property (copy, nonatomic, getter=_containerIdentifier) NSString *containerIdentifier;
@property (nonatomic, getter=_visibilityState, setter=_setVisibilityState:) long long visibilityState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
+ (void)_reduceTransparencyDidChange:(id)arg1;

- (void)dealloc;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (_Bool)_disableAutomaticKeyboardBehavior;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;
- (void)delayed:(id)arg1;
- (void)sizeObservingView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)__requestEncodedLayerTreeToURL:(id)arg1 withCodingImageFormat:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;
- (void)__performUpdateWithReplyHandler:(CDUnknownBlockType)arg1;
- (void)__openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2;
- (void)__updateVisibilityState:(long long)arg1;
- (void)__updateVisibleFrame:(struct CGRect)arg1 withReplyHandler:(CDUnknownBlockType)arg2;
- (void)__updateLayoutMargins:(id)arg1;
- (void)__setActiveDisplayMode:(long long)arg1;
- (void)__setMaximumSize:(struct CGSize)arg1 forDisplayMode:(long long)arg2;
- (void)_setContentProvidingViewController:(id)arg1;
- (void)_processInputItems:(id)arg1 initialActiveDisplayMode:(long long *)arg2;
- (void)_setVisibilityState:(long long)arg1 force:(_Bool)arg2;
- (long long)_clientLargestSupportedDisplayMode;
- (void)_enqueueProxyRequest:(CDUnknownBlockType)arg1;
- (void)_setActiveDisplayMode:(long long)arg1 unconditionallyNotifyingContentProvidingViewController:(_Bool)arg2;
- (void)_requestMarginInsets;
- (void)_requestPreferredViewHeight:(double)arg1;
- (void)_closeTransactionWithAppearState:(int)arg1;
- (double)_effectiveHeightForRequestedHeight:(double)arg1;
- (double)_clientPreferredContentHeightPermittingAutolayout:(_Bool)arg1 didUseFittingSize:(_Bool *)arg2;
- (double)_clientPreferredContentHeight;
- (void)_setMaximumWidth:(double)arg1 forDisplayMode:(long long)arg2;
- (id)_widgetExtensionContext;
- (void)_notifyContentProvidingViewControllerOfActiveDisplayModeChange;
- (void)_encodeLayerTreeToURL:(id)arg1 withCodingImageFormat:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;
- (void)_performUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_setVisibleFrame:(struct CGRect)arg1;
- (void)_clientLargestSupportedDisplayModeDidChange;

@end

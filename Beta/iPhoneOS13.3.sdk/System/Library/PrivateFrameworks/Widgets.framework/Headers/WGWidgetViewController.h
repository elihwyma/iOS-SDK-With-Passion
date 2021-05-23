/*
 Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

#import <UIViewController.h>

@class NSString, UITraitCollection, WGWidgetHostingViewController;

@protocol WGWidgetViewControllerDelegate;

@interface WGWidgetViewController : UIViewController

{
    WGWidgetHostingViewController *_widgetHost;
    id <WGWidgetViewControllerDelegate> _delegate;
}

@property (retain, nonatomic) WGWidgetHostingViewController *widgetHost;
@property (weak, nonatomic) id <WGWidgetViewControllerDelegate> delegate;
@property (nonatomic, readonly) UITraitCollection *requestedTraitCollectionOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)_addWidgetButtonTapped:(id)arg1;
- (id)_platterViewIfLoaded;
- (struct CGSize)maxSizeForWidget:(id)arg1 forDisplayMode:(long long)arg2;
- (id)_platterViewLoadingIfNecessary:(_Bool)arg1;
- (void)registerWidgetForRefreshEvents:(id)arg1;
- (void)unregisterWidgetForRefreshEvents:(id)arg1;
- (void)remoteViewControllerDidConnectForWidget:(id)arg1;
- (void)remoteViewControllerViewDidAppearForWidget:(id)arg1;
- (long long)userSpecifiedDisplayModeForWidget:(id)arg1;
- (long long)largestAvailableDisplayModeForWidget:(id)arg1;
- (void)widget:(id)arg1 didRemoveSnapshotAtURL:(id)arg2;
- (_Bool)isWidgetExtensionVisible:(id)arg1;
- (id)initWithWidgetInfo:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, SKUIClientContext, SKUIItem, SKUIOverlayContainerViewController, UIView, UIViewController;

@protocol SKUIProductPageOverlayDelegate;

@interface SKUIProductPageOverlayController : NSObject

{
    SKUIClientContext *_clientContext;
    id <SKUIProductPageOverlayDelegate> _delegate;
    SKUIItem *_initialItem;
    SKUIOverlayContainerViewController *_overlayViewController;
    UIViewController *_parentViewController;
}

@property (weak, nonatomic, readonly) UIViewController *parentViewController;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id <SKUIProductPageOverlayDelegate> delegate;
@property (nonatomic, readonly) long long numberOfVisibleOverlays;
@property (nonatomic, readonly) NSArray *URLs;
@property (nonatomic, readonly) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)dismiss;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)iPadProductPage:(id)arg1 openItem:(id)arg2;
- (void)iPadProductPage:(id)arg1 openURL:(id)arg2 viewControllerBlock:(CDUnknownBlockType)arg3;
- (void)iPadProductPageCannotOpen:(id)arg1;
- (id)initWithParentViewController:(id)arg1;
- (void)showWithInitialProductPage:(id)arg1 metricsPageEvent:(id)arg2;
- (void)showWithInitialURLs:(id)arg1;
- (void)showWithInitialItem:(id)arg1;
- (void)_removeOverlayViewController;
- (void)_showWithInitialViewController:(id)arg1;
- (void)_showOverlayViewController;
- (void)_finishDismissAndNotifyDelegate:(_Bool)arg1 withViewController:(id)arg2;
- (void)_backstopViewAction:(id)arg1;
- (void)showWithInitialItemIdentifier:(long long)arg1;
- (void)showWithInitialURL:(id)arg1;
- (void)showWithInitialURLRequest:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class NSDictionary, NSMutableArray, NSOperationQueue, NSString, SKUIBannerView, SKUIClientContext, SKUIItemArtworkContext, SKUIItemStateCenter, SSLookupItem, UIImage;

@protocol SKUIBannerViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIBannerViewController : UIViewController

{
    SKUIBannerView *_bannerView;
    SKUIClientContext *_clientContext;
    id <SKUIBannerViewDelegate> _delegate;
    UIImage *_iconImage;
    SSLookupItem *_item;
    long long _itemIdentifier;
    SKUIItemStateCenter *_itemStateCenter;
    NSOperationQueue *_resourceOperationQueue;
    NSMutableArray *_screenshotImages;
    NSDictionary *_scriptContextDictionary;
    SKUIItemArtworkContext *_itemArtworkContext;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id <SKUIBannerViewDelegate> delegate;
@property (retain, nonatomic) NSOperationQueue *resourceOperationQueue;
@property (copy, nonatomic) NSDictionary *scriptContextDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (id)_itemState;
- (id)_iconImage;
- (void)_finishWithResponse:(id)arg1 error:(id)arg2;
- (void)loadWithProductParameters:(id)arg1;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)_warmItemStateCenter;
- (void)_closeButtonAction:(id)arg1;
- (void)_bannerViewAction:(id)arg1;
- (void)_reloadBannerView;
- (void)_launchApp;
- (void)_loadImages;
- (id)_itemArtworkContext;
- (void)_launchURL:(id)arg1 withBundleIdentifier:(id)arg2;
- (void)_setIcon:(id)arg1 error:(id)arg2;
- (id)_screenshotConsumerWithSize:(struct CGSize)arg1;
- (void)_setScreenshot:(id)arg1 forIndex:(long long)arg2 error:(id)arg3;

@end

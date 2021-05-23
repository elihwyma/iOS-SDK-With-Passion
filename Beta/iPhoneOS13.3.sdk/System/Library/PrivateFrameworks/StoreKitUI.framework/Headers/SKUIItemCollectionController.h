/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, SKUIClientContext, SKUIItemArtworkContext, SKUIResourceLoader, SKUIScreenshotDataConsumer, SKUIStyledImageDataConsumer, UIImage;

@protocol SKUIItemCollectionDelegate;

@interface SKUIItemCollectionController : NSObject

{
    NSMutableDictionary *_itemIDsToArtworkRequestIDs;
    UIImage *_placeholderImage;
    NSMutableDictionary *_itemIDsToScreenshotRequestIDs;
    _Bool _delegateProvidesScreenshots;
    UIImage *_landscapeScreenshotPlaceholderImage;
    UIImage *_portraitScreenshotPlaceholderImage;
    id <SKUIItemCollectionDelegate> _delegate;
    SKUIResourceLoader *_artworkLoader;
    SKUIClientContext *_clientContext;
    SKUIItemArtworkContext *_artworkContext;
    SKUIStyledImageDataConsumer *_iconDataConsumer;
    SKUIScreenshotDataConsumer *_landscapeScreenshotDataConsumer;
    SKUIScreenshotDataConsumer *_portraitScreenshotDataConsumer;
    NSArray *_items;
    long long _numberOfItemsPerPage;
    double _numberOfPagesToCacheAhead;
}

@property (weak, nonatomic) id <SKUIItemCollectionDelegate> delegate;
@property (retain, nonatomic) SKUIResourceLoader *artworkLoader;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) SKUIItemArtworkContext *artworkContext;
@property (retain, nonatomic) SKUIStyledImageDataConsumer *iconDataConsumer;
@property (retain, nonatomic) SKUIScreenshotDataConsumer *landscapeScreenshotDataConsumer;
@property (retain, nonatomic) SKUIScreenshotDataConsumer *portraitScreenshotDataConsumer;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) long long numberOfItemsPerPage;
@property (nonatomic) double numberOfPagesToCacheAhead;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (id)initWithClientContext:(id)arg1;
- (void)enterForeground;
- (void)enterBackground;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)removeAllCachedResources;
- (id)_artworkLoader;
- (void)loadNextPageOfArtworkWithReason:(long long)arg1;
- (void)precacheNextPageArtworkForOffset:(struct CGPoint)arg1 direction:(double)arg2;
- (id)performActionForItemAtIndex:(long long)arg1;
- (void)configureCellLayout:(id)arg1 forIndex:(long long)arg2;
- (void)didEndDisplayingItemAtIndex:(long long)arg1;
- (void)_memoryWarningNotification:(id)arg1;
- (id)_initSKUIItemCollectionController;
- (id)_iconArtworkRequestWithItem:(id)arg1;
- (id)_placeholderImageForItem:(id)arg1;
- (void)_reloadScreenshotForCellLayout:(id)arg1 item:(id)arg2 isRestricted:(_Bool)arg3;
- (_Bool)_loadArtworkForItem:(id)arg1 reason:(long long)arg2;
- (void)_enumerateVisibleCellLayoutsWithBlock:(CDUnknownBlockType)arg1;
- (void)_reloadForItemStateChange:(id)arg1;
- (void)_reloadForRestrictionsChange;
- (struct _NSRange)_visibleItemRange;
- (id)_screenshotArtworkRequestWithItem:(id)arg1;
- (id)_screenshotForItem:(id)arg1;
- (id)_placeholderImageForScreenshot:(id)arg1;
- (void)cancelArtworkLoadForItemIndex:(long long)arg1;

@end

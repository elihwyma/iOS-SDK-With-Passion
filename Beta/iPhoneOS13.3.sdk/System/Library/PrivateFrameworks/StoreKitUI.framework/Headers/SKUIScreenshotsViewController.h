/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSOperationQueue, NSString, SKUIClientContext, SKUIScreenshotDataConsumer, SKUIVideoImageDataConsumer, UICollectionView;

@protocol SKUIScreenshotsDelegate;

__attribute__((visibility("hidden")))
@interface SKUIScreenshotsViewController : UIViewController <Swift>

{
    SKUIClientContext *_clientContext;
    UICollectionView *_collectionView;
    SKUIScreenshotDataConsumer *_dataConsumer;
    id <SKUIScreenshotsDelegate> _delegate;
    NSOperationQueue *_operationQueue;
    NSArray *_screenshots;
    NSMutableArray *_screenshotImages;
    NSMutableArray *_screenshotRawImages;
    struct CGSize _screenshotMaxSize;
    SKUIVideoImageDataConsumer *_trailerConsumer;
    NSArray *_trailers;
    NSMutableArray *_trailerImages;
}

@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (weak, nonatomic) id <SKUIScreenshotsDelegate> delegate;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)reloadData;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)numberOfItemsInSlideshowViewController:(id)arg1;
- (id)slideshowViewController:(id)arg1 dataConsumerAtIndex:(long long)arg2;
- (id)slideshowViewController:(id)arg1 imageURLAtIndex:(long long)arg2;
- (id)slideshowViewController:(id)arg1 placeholderImageAtIndex:(long long)arg2;
- (id)slideshowViewController:(id)arg1 poppedImageViewAtIndex:(long long)arg2;
- (void)slideshowViewController:(id)arg1 scrollToImageAtIndex:(long long)arg2;
- (id)initWithTrailers:(id)arg1 screenshots:(id)arg2 clientContext:(id)arg3;
- (void)_setImage:(id)arg1 forIndex:(long long)arg2;
- (void)_setTrailerImage:(id)arg1 forIndex:(long long)arg2;

@end

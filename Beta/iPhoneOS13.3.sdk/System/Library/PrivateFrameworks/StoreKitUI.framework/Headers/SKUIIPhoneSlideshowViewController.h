/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, SKUIClientContext, SKUIGiftThemeCollectionView, UIPageControl;

@protocol SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIIPhoneSlideshowViewController : UIViewController <Swift>

{
    SKUIClientContext *_clientContext;
    SKUIGiftThemeCollectionView *_collectionView;
    id <SKUISlideshowViewControllerDataSource> _dataSource;
    id <SKUISlideshowViewControllerDelegate> _delegate;
    UIPageControl *_pageControl;
    NSOperationQueue *_operationQueue;
    NSOperationQueue *_placeholderQueue;
    NSMutableArray *_images;
    NSMutableDictionary *_placeholderImages;
    long long _indexToScrollToOnLoadView;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id <SKUISlideshowViewControllerDataSource> dataSource;
@property (weak, nonatomic) id <SKUISlideshowViewControllerDelegate> delegate;
@property (nonatomic) long long currentIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)reloadData;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)_doneAction:(id)arg1;
- (void)_reloadPageControl;
- (void)_reloadSize;
- (void)_setImage:(id)arg1 atIndex:(long long)arg2;
- (id)_imageAtIndex:(long long)arg1;
- (id)_placeholderImageAtIndex:(long long)arg1;

@end

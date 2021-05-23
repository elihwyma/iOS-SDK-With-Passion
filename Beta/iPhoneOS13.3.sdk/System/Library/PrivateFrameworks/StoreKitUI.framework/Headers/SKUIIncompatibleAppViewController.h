/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewController.h>

@class NSOperationQueue, NSString, SKUIIncompatibleAppView, SKUIItemArtworkContext, SKUIProductPageHeaderViewController, SKUIProductPageItem, SSVLoadURLOperation, UIImage, UIScrollView;

@protocol SKUIProductPageChildViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIIncompatibleAppViewController : SKUIViewController

{
    SKUIItemArtworkContext *_artworkContext;
    id <SKUIProductPageChildViewControllerDelegate> _delegate;
    SKUIProductPageHeaderViewController *_headerViewController;
    UIImage *_iconImage;
    SKUIProductPageItem *_incompatibleItem;
    SSVLoadURLOperation *_loadIconOperation;
    SKUIIncompatibleAppView *_incompatibleView;
    NSOperationQueue *_operationQueue;
}

@property (nonatomic, readonly) SKUIProductPageItem *incompatibleItem;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController;
@property (weak, nonatomic) id <SKUIProductPageChildViewControllerDelegate> delegate;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reloadData;
- (id)_artworkContext;
- (void)_setArtworkWithImage:(id)arg1 error:(id)arg2;
- (id)initWithIncompatibleItem:(id)arg1;
- (void)_learnMoreAboutIPad:(id)arg1;
- (void)_learnMoreAboutApp:(id)arg1;

@end

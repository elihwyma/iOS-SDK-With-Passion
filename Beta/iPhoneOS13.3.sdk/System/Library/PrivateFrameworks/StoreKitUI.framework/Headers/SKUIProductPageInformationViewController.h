/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class NSOperationQueue, NSString, SKUIClientContext, SKUIContentRatingArtworkResourceLoader, SKUIProductInformationView, SKUIProductPageItem, SKUIProductPageProductInfo;

__attribute__((visibility("hidden")))
@interface SKUIProductPageInformationViewController : UIViewController

{
    SKUIClientContext *_clientContext;
    SKUIContentRatingArtworkResourceLoader *_contentRatingArtworkLoader;
    SKUIProductInformationView *_informationView;
    SKUIProductPageItem *_item;
    SKUIProductPageProductInfo *_productInfo;
    NSOperationQueue *_operationQueue;
}

@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (nonatomic, readonly) SKUIProductPageItem *item;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)contentRatingArtworkLoader:(id)arg1 didLoadImage:(id)arg2 forContentRating:(id)arg3;
- (id)initWithItem:(id)arg1 clientContext:(id)arg2;
- (id)initWithProductInformation:(id)arg1 clientContext:(id)arg2;
- (id)_contentRatingResourceLoader;
- (void)_updateLinesWithRatingImage:(id)arg1;
- (id)_informationLinesWithProductInfo:(id)arg1;
- (id)_informationLinesWithItem:(id)arg1 ratingImage:(id)arg2;

@end

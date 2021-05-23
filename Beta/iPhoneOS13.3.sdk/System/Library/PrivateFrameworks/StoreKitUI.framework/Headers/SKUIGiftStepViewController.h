/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class NSOperationQueue, SKUIGift, SKUIGiftConfiguration, SSVLoadURLOperation;

__attribute__((visibility("hidden")))
@interface SKUIGiftStepViewController : UIViewController

{
    SKUIGift *_gift;
    SKUIGiftConfiguration *_giftConfiguration;
    SSVLoadURLOperation *_loadOperation;
    NSOperationQueue *_operationQueue;
}

@property (nonatomic, readonly) SKUIGift *gift;
@property (nonatomic, readonly) SKUIGiftConfiguration *giftConfiguration;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

- (id)initWithGift:(id)arg1 configuration:(id)arg2;
- (void)loadItemArtworkWithArtworkContext:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)finishGiftingWithResult:(_Bool)arg1;
- (void)_finishImageLoadWithImage:(id)arg1 error:(id)arg2 block:(CDUnknownBlockType)arg3;

@end

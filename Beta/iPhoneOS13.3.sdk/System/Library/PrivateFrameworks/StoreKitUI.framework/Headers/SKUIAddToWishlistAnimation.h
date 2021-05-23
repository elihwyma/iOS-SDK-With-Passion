/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class UIImage, UINavigationButton;

__attribute__((visibility("hidden")))
@interface SKUIAddToWishlistAnimation : NSObject

{
    CDUnknownBlockType _completionBlock;
    UIImage *_image;
    UINavigationButton *_targetButton;
}

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)initWithImage:(id)arg1 buttonItem:(id)arg2 navigationBar:(id)arg3;
- (void)animateWithCompletionBlock:(CDUnknownBlockType)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class SKUIClientContext, SKUIReviewConfiguration, UIWindow;

__attribute__((visibility("hidden")))
@interface SKUIStarRatingQueue : NSObject

{
    SKUIClientContext *_clientContext;
    SKUIReviewConfiguration *_reviewConfiguration;
    UIWindow *_window;
}

@property (weak, nonatomic) UIWindow *window;

- (id)init;
- (id)initWithClientContext:(id)arg1 reviewConfiguration:(id)arg2;
- (void)setRating:(long long)arg1 forItemID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_setRating:(long long)arg1 forItemID:(id)arg2 account:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end

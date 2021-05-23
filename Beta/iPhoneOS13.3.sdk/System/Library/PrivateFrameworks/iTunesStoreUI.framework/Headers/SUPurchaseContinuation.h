/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUContinuation.h>

@class SUPurchaseManager;

@interface SUPurchaseContinuation : SUContinuation

{
    id _purchase;
    SUPurchaseManager *_purchaseManager;
}

@property (nonatomic, readonly) id purchase;
@property (weak, nonatomic) SUPurchaseManager *purchaseManager;

- (void)dealloc;
- (void)cancel;
- (void)start;
- (id)initWithPurchase:(id)arg1;

@end

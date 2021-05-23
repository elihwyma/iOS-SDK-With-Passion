/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSOperation.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SKUIAddToWishlistOperation : NSOperation

{
    long long _itemIdentifier;
    long long _reason;
    NSMutableDictionary *_requestParameters;
}

- (void)main;
- (id)initWithItem:(id)arg1 reason:(long long)arg2;

@end

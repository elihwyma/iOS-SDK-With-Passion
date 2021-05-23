/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSOperation.h>

__attribute__((visibility("hidden")))
@interface SKUIRemoveFromWishlistOperation : NSOperation

{
    long long _entityID;
    long long _itemID;
    long long _reason;
}

- (void)main;
- (id)initWithItemIdentifier:(long long)arg1 entityIdentifier:(long long)arg2 reason:(long long)arg3;

@end

/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, SSWishlist;

__attribute__((visibility("hidden")))
@interface SKUIWishlist : NSObject

{
    SSWishlist *_database;
}

@property (nonatomic, readonly) long long accountIdentifier;
@property (copy, nonatomic, readonly) NSArray *items;

+ (id)activeWishlist;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)addItem:(id)arg1;
- (id)initWithAccountIdentifier:(long long)arg1;
- (_Bool)containsItemWithIdentifier:(long long)arg1;
- (void)postChangeNotification;
- (void)removeItemsWithItemIdentifiers:(id)arg1;

@end

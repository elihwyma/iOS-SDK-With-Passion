/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@interface SUScriptPurchaseManager : SUScriptObject

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)init;
- (void)dealloc;
- (id)_className;
- (void)_purchaseRequestsChangedNotification:(id)arg1;
- (id)isPurchasedItemIdentifier:(id)arg1;
- (id)isPurchasingItemIdentifier:(id)arg1;

@end

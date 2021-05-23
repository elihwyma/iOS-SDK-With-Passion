/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreServices/SSVURLDataConsumer.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface SKUILoadMoreDataConsumer : SSVURLDataConsumer

{
    NSSet *_unavailableItemIdentifiers;
}

@property (copy, nonatomic) NSSet *unavailableItemIdentifiers;

- (id)objectForData:(id)arg1 response:(id)arg2 error:(id *)arg3;
- (id)_itemsWithDictionary:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface SKUILoadItemsResponse : NSObject

{
    NSDictionary *_loadedItems;
    NSSet *_invalidItemIdentifiers;
}

@property (copy, nonatomic) NSDictionary *loadedItems;
@property (copy, nonatomic) NSSet *invalidItemIdentifiers;

@end

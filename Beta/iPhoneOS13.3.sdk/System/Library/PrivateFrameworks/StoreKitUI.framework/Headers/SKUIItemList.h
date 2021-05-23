/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@interface SKUIItemList : NSObject <Swift>

{
    NSMutableArray *_items;
    NSString *_seeAllTitle;
    NSString *_seeAllURLString;
    NSString *_title;
    NSSet *_unavailableItemIdentifiers;
}

@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *seeAllTitle;
@property (copy, nonatomic) NSString *seeAllURLString;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSSet *unavailableItemIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSMutableDictionary *cacheRepresentation;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addItem:(id)arg1;
- (void)addItems:(id)arg1;
- (void)removeItemsAtIndexes:(id)arg1;
- (id)initWithCacheRepresentation:(id)arg1;
- (_Bool)isUnavailableItemIdentifier:(id)arg1;

@end

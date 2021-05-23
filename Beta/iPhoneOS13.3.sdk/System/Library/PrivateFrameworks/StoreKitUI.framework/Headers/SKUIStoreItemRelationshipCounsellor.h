/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock;

__attribute__((visibility("hidden")))
@interface SKUIStoreItemRelationshipCounsellor : NSObject

{
    NSMutableDictionary *_relationshipsDictionary;
    NSRecursiveLock *_lock;
}

@property (retain, nonatomic) NSMutableDictionary *relationshipsDictionary;
@property (nonatomic, readonly) NSRecursiveLock *lock;

- (id)init;
- (void)removeAllRelationshipsForItem:(id)arg1;
- (void)setChildren:(id)arg1 forParent:(id)arg2;
- (_Bool)itemHasParent:(id)arg1;
- (_Bool)itemHasChildren:(id)arg1;
- (id)childItemsForItem:(id)arg1;
- (id)parentItemForItem:(id)arg1;
- (id)siblingItemsForItem:(id)arg1;
- (id)familyForItem:(id)arg1;
- (void)addChildren:(id)arg1 forParent:(id)arg2;

@end

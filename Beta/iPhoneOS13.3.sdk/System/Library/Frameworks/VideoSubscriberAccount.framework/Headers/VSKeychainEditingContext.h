/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet, NSUndoManager, VSKeychainStore;

__attribute__((visibility("hidden")))
@interface VSKeychainEditingContext : NSObject

{
    VSKeychainStore *_keychainStore;
    NSUndoManager *_undoManager;
    NSMutableSet *_items;
}

@property (retain, nonatomic) NSMutableSet *items;
@property (retain, nonatomic) VSKeychainStore *keychainStore;
@property (retain, nonatomic) NSUndoManager *undoManager;
@property (nonatomic, readonly) NSSet *insertedItems;
@property (nonatomic, readonly) NSSet *updatedItems;
@property (nonatomic, readonly) NSSet *deletedItems;
@property (nonatomic, readonly) NSSet *registeredItems;

- (id)init;
- (void)insertItem:(id)arg1;
- (id)executeFetchRequest:(id)arg1 error:(id *)arg2;
- (_Bool)save:(id *)arg1;
- (void)deleteItem:(id)arg1;
- (void)fulfillFault:(id)arg1;
- (void)_populateQuery:(struct __CFDictionary *)arg1 usingPredicate:(id)arg2 withItemKind:(id)arg3;
- (id)_findOrCreateItemForCommittedValues:(id)arg1 withItemKind:(id)arg2;
- (id)_queryForItemValues:(id)arg1 withItemKind:(id)arg2;
- (void)_populateResult:(id)arg1 forRequest:(id)arg2 fromMatch:(id)arg3;
- (id)_subsetOfRegisteredItemsWithKeyPath:(id)arg1;
- (void)_populateErrors:(id)arg1 withError:(id)arg2 affectingItem:(id)arg3;

@end

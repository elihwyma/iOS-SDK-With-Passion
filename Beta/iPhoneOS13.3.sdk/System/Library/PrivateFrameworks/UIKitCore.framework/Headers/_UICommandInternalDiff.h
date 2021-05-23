/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface _UICommandInternalDiff : NSObject

{
    NSMutableSet *_menuDeletes;
    NSMutableDictionary *_itemDeletes;
    NSMutableDictionary *_inserts;
}

@property (nonatomic, readonly) NSSet *menuDeletes;
@property (nonatomic, readonly) NSDictionary *itemDeletes;
@property (nonatomic, readonly) NSDictionary *inserts;

- (id)_deletesForMenu:(id)arg1;
- (id)_parentInsertsForMenu:(id)arg1;
- (void)deleteMenu:(id)arg1;
- (void)deleteItem:(id)arg1 inMenu:(id)arg2;
- (void)insertAtStartElements:(id)arg1 atEndElements:(id)arg2 inMenu:(id)arg3;
- (void)insertBeforeElements:(id)arg1 afterElements:(id)arg2 aroundElement:(id)arg3 inMenu:(id)arg4;
- (void)insertFallbackBeforeElements:(id)arg1 fallbackAfterElements:(id)arg2 inMenu:(id)arg3;

@end

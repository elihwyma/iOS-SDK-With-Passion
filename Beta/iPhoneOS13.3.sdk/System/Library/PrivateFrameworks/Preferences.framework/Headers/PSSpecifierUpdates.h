/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, PSSpecifierGroupIndex, PSSpecifierUpdateContext;

@interface PSSpecifierUpdates : NSObject

{
    NSMutableArray *_currentSpecifiers;
    NSMutableArray *_updates;
    PSSpecifierGroupIndex *_groupIndex;
    _Bool _wantsDebugCallbacks;
    NSArray *_originalSpecifiers;
    PSSpecifierUpdateContext *_context;
}

@property (copy, nonatomic, readonly) NSArray *originalSpecifiers;
@property (copy, nonatomic, readonly) NSArray *currentSpecifiers;
@property (copy, nonatomic, readonly) NSArray *updates;
@property (copy, nonatomic) PSSpecifierUpdateContext *context;
@property (copy, nonatomic, readonly) PSSpecifierGroupIndex *groupIndex;

+ (_Bool)_wantsDebugCallbacks;
+ (Class)_groupIndexClass;
+ (id)updatesWithSpecifiers:(id)arg1;
+ (void)_assertSpecifierIDsAreUnique:(id)arg1;
+ (id)updatesByDiffingSpecifiers:(id)arg1 withSpecifiers:(id)arg2 changedBlock:(CDUnknownBlockType)arg3;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_init;
- (_Bool)reloadSpecifier:(id)arg1;
- (unsigned long long)indexOfSpecifier:(id)arg1;
- (id)specifierForID:(id)arg1;
- (void)enumerateUpdatesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)reloadSpecifierAtIndex:(unsigned long long)arg1;
- (_Bool)insertSpecifier:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2;
- (_Bool)insertContiguousSpecifiers:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2;
- (_Bool)removeSpecifier:(id)arg1;
- (_Bool)removeSpecifierAtIndex:(unsigned long long)arg1;
- (id)initWithSpecifiers:(id)arg1;
- (id)initWithSpecifiers:(id)arg1 applyUpdates:(id)arg2;
- (_Bool)_addAndApplyOperation:(id)arg1;
- (id)_initForCopyWithOriginalSpecifiers:(id)arg1 currentSpecifiers:(id)arg2 updates:(id)arg3;
- (id)_groupIndexCreatingIfNecessary;
- (unsigned long long)indexOfSpecifierWithID:(id)arg1;
- (void)_didApplyOperation:(id)arg1;
- (void)_operationFailed:(id)arg1 reason:(id)arg2;
- (_Bool)_enumerateArrayWithConjuctionalResult:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)appendSpecifier:(id)arg1;
- (_Bool)appendSpecifiers:(id)arg1 toGroupAtGroupIndex:(unsigned long long)arg2;
- (_Bool)appendSpecifiers:(id)arg1 toGroup:(id)arg2;
- (_Bool)appendSpecifiers:(id)arg1 toGroupWithID:(id)arg2;
- (_Bool)removeSpecifierWithID:(id)arg1;
- (_Bool)removeSpecifiersInRange:(struct _NSRange)arg1;
- (_Bool)removeSpecifiersInGroupAtGroupIndex:(unsigned long long)arg1;
- (_Bool)reloadSpecifiersInRange:(struct _NSRange)arg1;
- (_Bool)reloadSpecifiersInGroupAtGroupIndex:(unsigned long long)arg1;
- (_Bool)reloadSpecifierWithID:(id)arg1;
- (_Bool)moveSpecifierAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (_Bool)swapSpecifierAtIndex:(unsigned long long)arg1 withSpecifierAtIndex:(unsigned long long)arg2;
- (_Bool)_removeOneSpecifierOnlyAtIndex:(unsigned long long)arg1;
- (_Bool)insertSpecifier:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)insertSpecifier:(id)arg1 afterSpecifierWithID:(id)arg2;
- (_Bool)insertContiguousSpecifiers:(id)arg1 afterSpecifierWithID:(id)arg2;
- (_Bool)appendSpecifiers:(id)arg1;
- (_Bool)appendSpecifier:(id)arg1 toGroupAtGroupIndex:(unsigned long long)arg2;
- (_Bool)appendSpecifier:(id)arg1 toGroup:(id)arg2;
- (_Bool)appendSpecifier:(id)arg1 toGroupWithID:(id)arg2;
- (_Bool)removeSpecifiers:(id)arg1;
- (_Bool)removeSpecifiersWithIDs:(id)arg1;
- (_Bool)removeSpecifierAtIndexPath:(id)arg1;
- (_Bool)removeSpecifiersInGroup:(id)arg1;
- (_Bool)removeSpecifiersInGroupWithID:(id)arg1;
- (_Bool)reloadSpecifiers:(id)arg1;
- (_Bool)reloadSpecifiersInGroup:(id)arg1;
- (_Bool)reloadSpecifiersInGroupWithID:(id)arg1;
- (_Bool)reloadSpecifiersWithIDs:(id)arg1;
- (_Bool)reloadSpecifierAtIndexPath:(id)arg1;
- (_Bool)moveSpecifierAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (_Bool)moveSpecifier:(id)arg1 toIndex:(unsigned long long)arg2;
- (_Bool)swapSpecifier:(id)arg1 withSpecifier:(id)arg2;
- (id)stepByStepDescription;
- (id)specifiersAfterApplyingUpdatesToIndex:(unsigned long long)arg1;

@end

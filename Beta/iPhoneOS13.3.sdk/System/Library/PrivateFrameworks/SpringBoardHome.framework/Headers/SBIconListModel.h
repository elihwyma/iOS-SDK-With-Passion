/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable, NSMutableArray, NSString, SBFolder, SBIconIndexMutableList;

@protocol SBTreeNode;

@interface SBIconListModel : NSObject

{
    SBIconIndexMutableList *_icons;
    unsigned long long _maxIconCount;
    NSHashTable *_nodeObservers;
    NSHashTable *_listObservers;
    NSMutableArray *_nodeObserverTransactionStack;
    _Bool _iconStateIsDirty;
    id <SBTreeNode> _parent;
    NSString *_uniqueIdentifier;
    SBFolder *_folder;
}

@property (weak, nonatomic, readonly) SBFolder *folder;
@property (nonatomic, readonly) unsigned long long numberOfIcons;
@property (nonatomic, readonly) unsigned long long numberOfNonPlaceholderIcons;
@property (nonatomic, readonly) unsigned long long maxNumberOfIcons;
@property (copy, nonatomic) NSArray *icons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *children;
@property (weak, nonatomic) id <SBTreeNode> parent;
@property (copy, nonatomic, readonly) NSString *uniqueIdentifier;

- (id)init;
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (_Bool)isEmpty;
- (void)sortUsingSelector:(SEL)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)removeChild:(id)arg1;
- (id)iconAtIndex:(unsigned long long)arg1;
- (_Bool)addIcon:(id)arg1;
- (_Bool)isFull;
- (id)nodeIdentifier;
- (void)addIcons:(id)arg1;
- (void)addNodeObserver:(id)arg1;
- (void)removeNodeObserver:(id)arg1;
- (void)addListObserver:(id)arg1;
- (_Bool)directlyContainsIcon:(id)arg1;
- (_Bool)containsNodeIdentifier:(id)arg1;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (unsigned long long)firstFreeSlotIndex;
- (_Bool)allowsAddingIconCount:(unsigned long long)arg1;
- (_Bool)canBounceIcon:(id)arg1;
- (void)removeIconAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexForIcon:(id)arg1;
- (void)moveContainedIcons:(id)arg1 toContiguousIndicesStartingAt:(unsigned long long)arg2;
- (id)directlyContainedIconWithIdentifier:(id)arg1;
- (void)enumerateIconsUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeIcon:(id)arg1;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
- (id)containedNodeIdentifiers;
- (void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)listDidMoveNodes:(id)arg1;
- (void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)enumerateFolderIconsUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeListObserver:(id)arg1;
- (_Bool)isIconStateDirty;
- (void)markIconStateClean;
- (id)initWithFolder:(id)arg1 maxIconCount:(unsigned long long)arg2;
- (id)placeIcon:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)insertIcon:(id)arg1 atIndex:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (void)addIconsOfClass:(Class)arg1 toSet:(id)arg2;
- (id)iconsOfClass:(Class)arg1;
- (_Bool)directlyContainsLeafIconWithIdentifier:(id)arg1;
- (void)ancestryDidChange;
- (void)removeAllIcons;
- (_Bool)allowsAddingIcon:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 folder:(id)arg2 maxIconCount:(unsigned long long)arg3;
- (id)_iconAtIndex:(unsigned long long)arg1;
- (_Bool)addIcon:(id)arg1 asDirty:(_Bool)arg2;
- (void)willAddIcon:(id)arg1;
- (void)_notifyListObservers:(CDUnknownBlockType)arg1;
- (void)markIconStateDirty;
- (id)placeIcon:(id)arg1 atIndex:(unsigned long long)arg2 notifyingObservers:(_Bool)arg3;
- (_Bool)isFullIncludingPlaceholders;
- (void)_coalesceChangesWithRequestID:(id)arg1 changeBlock:(CDUnknownBlockType)arg2;
- (_Bool)directlyContainsIconWithIdentifier:(id)arg1;
- (id)directlyContainedIconPassingTest:(CDUnknownBlockType)arg1;
- (id)insertIcon:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)moveContainedIcon:(id)arg1 toIndex:(unsigned long long)arg2;

@end

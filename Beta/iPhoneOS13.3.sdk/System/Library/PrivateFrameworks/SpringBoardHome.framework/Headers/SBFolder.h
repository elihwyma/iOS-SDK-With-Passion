/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSArray, NSCountedSet, NSHashTable, NSMutableSet, NSString, SBFolderIcon, SBIconIndexMutableList;

@interface SBFolder : NSObject

{
    NSHashTable *_nodeObservers;
    NSHashTable *_folderObservers;
    SBIconIndexMutableList *_lists;
    _Bool _displayNameDirty;
    _Bool _open;
    _Bool _cancelable;
    NSMutableSet *_addedIcons;
    NSMutableSet *_removedIcons;
    NSCountedSet *_coalesceChangesRequests;
    NSString *_nodeIdentifier;
    NSString *_uniqueIdentifier;
    NSString *_displayName;
    NSString *_defaultDisplayName;
    SBFolderIcon *_icon;
    unsigned long long _maxListCount;
    unsigned long long _maxIconCountInLists;
    unsigned long long _maxIconCountInFirstList;
    unsigned long long _requiredTrailingEmptyListCount;
}

@property (copy, nonatomic, readonly) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *defaultDisplayName;
@property (nonatomic, getter=isOpen) _Bool open;
@property (weak, nonatomic) SBFolderIcon *icon;
@property (nonatomic, getter=isCancelable) _Bool cancelable;
@property (nonatomic, readonly) SBFolder *parentFolder;
@property (weak, nonatomic, readonly) SBFolder *rootFolder;
@property (nonatomic, readonly) Class listModelClass;
@property (copy, nonatomic, readonly) NSArray *lists;
@property (nonatomic, readonly) unsigned long long listCount;
@property (nonatomic, readonly) unsigned long long maxListCount;
@property (nonatomic, readonly) unsigned long long maxIconCountInLists;
@property (nonatomic, readonly) unsigned long long maxIconCountInFirstList;
@property (nonatomic, readonly, getter=isEmpty) _Bool empty;
@property (nonatomic, readonly, getter=isFull) _Bool full;
@property (nonatomic, readonly) _Bool shouldRemoveWhenEmpty;
@property (nonatomic, readonly) _Bool canRemoveIcons;
@property (nonatomic, readonly) _Bool canEditDisplayName;
@property (nonatomic) unsigned long long requiredTrailingEmptyListCount;
@property (nonatomic, readonly) unsigned long long trailingEmptyListCount;
@property (copy, nonatomic, readonly) NSArray *icons;
@property (copy, nonatomic, readonly) NSArray *iconsInLists;
@property (copy, nonatomic, readonly) NSString *recursiveDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isFolderNodeIdentifier:(id)arg1;
+ (_Bool)isRootFolderClass;

- (id)init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)addIcon:(id)arg1;
- (void)sort;
- (id)nodeIdentifier;
- (void)addIcons:(id)arg1;
- (_Bool)isRootFolder;
- (void)addNodeObserver:(id)arg1;
- (void)removeNodeObserver:(id)arg1;
- (void)iconList:(id)arg1 didAddIcon:(id)arg2;
- (void)iconList:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
- (void)iconList:(id)arg1 didRemoveIcon:(id)arg2;
- (void)iconList:(id)arg1 didMoveIcon:(id)arg2;
- (void)removeFolderObserver:(id)arg1;
- (id)addEmptyList;
- (void)addFolderObserver:(id)arg1;
- (id)listsContainingIcon:(id)arg1;
- (unsigned long long)indexOfList:(id)arg1;
- (id)indexPathForIcon:(id)arg1;
- (_Bool)compactLists;
- (_Bool)containsNodeIdentifier:(id)arg1;
- (_Bool)canAddIconCount:(unsigned long long)arg1;
- (id)listAtIndex:(unsigned long long)arg1;
- (id)indexPathForNodeIdentifier:(id)arg1;
- (id)iconAtIndexPath:(id)arg1;
- (void)enumerateAllIconsUsingBlock:(CDUnknownBlockType)arg1;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (id)indexPathForFirstFreeSlotStartingAtList:(id)arg1 avoidingFirstList:(_Bool)arg2;
- (_Bool)canAddIconCount:(unsigned long long)arg1 startingAtList:(id)arg2;
- (id)folderContainingIndexPath:(id)arg1 relativeIndexPath:(id *)arg2;
- (id)_listsForCompaction;
- (_Bool)canBounceIcon:(id)arg1;
- (_Bool)containsIcon:(id)arg1;
- (id)indexPathForIconWithIdentifier:(id)arg1;
- (void)removeIcon:(id)arg1 options:(unsigned long long)arg2;
- (id)indexPathForIconWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)indexPathsForIconsPassingTest:(CDUnknownBlockType)arg1;
- (id)placeIcon:(id)arg1 atIndexPath:(id)arg2;
- (id)insertIcon:(id)arg1 atIndexPath:(id *)arg2 options:(unsigned long long)arg3;
- (id)indexPathForIconWithIdentifier:(id)arg1 includingPlaceholders:(_Bool)arg2;
- (id)folderIcons;
- (void)enumerateAllIconsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)indexPathForFolder:(id)arg1;
- (_Bool)isValidPageIndex:(unsigned long long)arg1;
- (id)indexPathForFirstFreeSlotAvoidingFirstList:(_Bool)arg1;
- (id)indexPathForIcon:(id)arg1 includingPlaceholders:(_Bool)arg2;
- (id)addListWithIcon:(id)arg1;
- (id)listsContainingLeafIconWithIdentifier:(id)arg1;
- (void)startCoalescingContentChangesWithRequestID:(id)arg1;
- (void)stopCoalescingContentChangesForRequestID:(id)arg1;
- (id)leafIcons;
- (id)initWithDisplayName:(id)arg1 maxListCount:(unsigned long long)arg2 maxIconCountInLists:(unsigned long long)arg3;
- (void)removeAllLists;
- (void)stopCoalescingContentChangesForRequestID:(id)arg1 forceReload:(_Bool)arg2;
- (id)allIcons;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
- (id)containedNodeIdentifiers;
- (void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)listDidMoveNodes:(id)arg1;
- (void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (id)initWithUniqueIdentifier:(id)arg1 displayName:(id)arg2 maxListCount:(unsigned long long)arg3 maxIconCountInLists:(unsigned long long)arg4;
- (_Bool)_compactLists;
- (void)_removeLists:(id)arg1;
- (void)_didAddList:(id)arg1;
- (void)didAddFolder:(id)arg1;
- (void)_addList:(id)arg1;
- (void)didRemoveFolder:(id)arg1;
- (id)_createNewListWithIcon:(id)arg1;
- (void)_insertList:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)isIconStateDirty;
- (void)markIconStateClean;
- (void)removeIconAtIndexPath:(id)arg1 options:(unsigned long long)arg2;
- (void)addIconsOfClass:(Class)arg1 toSet:(id)arg2;
- (id)iconsOfClass:(Class)arg1;
- (_Bool)_isCoalescingContentChanges;
- (void)enumerateAllIconsWithBaseIndexPath:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)appendRecursiveDescriptionToString:(id)arg1 prefixPath:(id)arg2;
- (void)ensureTrailingEmptyLists;
- (void)_setLists:(id)arg1;
- (id)insertEmptyListAtIndex:(unsigned long long)arg1;
- (void)removeList:(id)arg1;
- (void)removeListAtIndex:(unsigned long long)arg1;
- (void)replaceIcon:(id)arg1 withIcon:(id)arg2;
- (_Bool)canAddIcon;
- (id)indexPathForIconPassingTest:(CDUnknownBlockType)arg1;
- (id)firstFolderWithDisplayName:(id)arg1;
- (id)firstFolderWithDefaultDisplayName:(id)arg1;

@end

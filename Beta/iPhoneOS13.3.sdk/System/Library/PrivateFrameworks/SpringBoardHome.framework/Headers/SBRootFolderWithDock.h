/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBRootFolder.h>

@class NSString, SBIconListModel;

@interface SBRootFolderWithDock : SBRootFolder

{
    SBIconListModel *_dock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setIcon:(id)arg1;
- (id)dock;
- (void)sort;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)nodeDidMoveContainedNodes:(id)arg1;
- (id)listsContainingIcon:(id)arg1;
- (unsigned long long)indexOfList:(id)arg1;
- (_Bool)supportsDock;
- (_Bool)containsNodeIdentifier:(id)arg1;
- (id)listAtIndex:(unsigned long long)arg1;
- (void)_setDock:(id)arg1;
- (_Bool)isValidPageIndex:(unsigned long long)arg1;
- (id)listsContainingLeafIconWithIdentifier:(id)arg1;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
- (id)containedNodeIdentifiers;
- (void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)listDidMoveNodes:(id)arg1;
- (void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (id)initWithUniqueIdentifier:(id)arg1 displayName:(id)arg2 maxListCount:(unsigned long long)arg3 maxIconCountInLists:(unsigned long long)arg4;
- (_Bool)isIconStateDirty;
- (void)markIconStateClean;
- (void)addIconsOfClass:(Class)arg1 toSet:(id)arg2;
- (void)enumerateAllIconsWithBaseIndexPath:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)removeList:(id)arg1;
- (void)_notifyIndexChange:(int)arg1 identifiers:(id)arg2 withValidationBlock:(CDUnknownBlockType)arg3;

@end

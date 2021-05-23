/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBIcon.h>

#import <SpringBoardHome/Swift-Protocol.h>

@class NSHashTable, NSMutableSet, NSString, SBFolder;

@interface SBFolderIcon : SBIcon <Swift>

{
    NSHashTable *_nodeObservers;
    NSMutableSet *_finishedDownloadIdentifiers;
    long long _progressState;
    double _progressPercent;
    struct __CFRunLoopObserver *_updateIconRunLoopObserver;
    SBFolder *_folder;
}

@property (nonatomic, readonly) SBFolder *folder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)hasIconImage;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)children;
- (void)removeChild:(id)arg1;
- (void)_updateProgress;
- (id)nodeIdentifier;
- (void)localeChanged;
- (void)updateLabel;
- (long long)progressState;
- (void)addNodeObserver:(id)arg1;
- (void)removeNodeObserver:(id)arg1;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)nodeDidMoveContainedNodes:(id)arg1;
- (id)rootFolder;
- (_Bool)isFolderIcon;
- (_Bool)containsNodeIdentifier:(id)arg1;
- (void)folder:(id)arg1 didAddList:(id)arg2;
- (void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3;
- (void)folder:(id)arg1 didAddIcons:(id)arg2 removedIcons:(id)arg3;
- (void)folder:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
- (Class)iconImageViewClassForLocation:(id)arg1;
- (_Bool)isProgressPaused;
- (double)progressPercent;
- (_Bool)shouldAnimateProgress;
- (void)iconImageDidUpdate:(id)arg1;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (void)iconLaunchEnabledDidChange:(id)arg1;
- (id)leafIconsWithBadgesSortedByImportance;
- (id)displayNameForLocation:(id)arg1;
- (void)rootFolderDelegateDidChange:(id)arg1;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (_Bool)canBeAddedToMultiItemDrag;
- (id)initWithFolder:(id)arg1;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
- (id)containedNodeIdentifiers;
- (void)noteContainedIconsAdded:(id)arg1 removed:(id)arg2;
- (void)noteContainedIcon:(id)arg1 replacedIcon:(id)arg2;
- (id)genericIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (id)badgeNumberOrString;
- (void)_updateBadgeValue;
- (void)invalidateUpdateIconRunLoopObserver;
- (void)_performDelayedIconUpdates;
- (void)_adjustForIconsAdded:(id)arg1 removed:(id)arg2;
- (void)_containedIconImageChanged:(id)arg1;
- (unsigned long long)listIndexForContainedIcon:(id)arg1;
- (void)ancestryDidChange;
- (void)_containedIconAccessoriesDidUpdate:(id)arg1;
- (void)_containedIconLaunchEnabledDidUpdate:(id)arg1;
- (unsigned long long)gridCellIndexForIconIndex:(unsigned long long)arg1;
- (id)iconAtListIndex:(unsigned long long)arg1 iconIndex:(unsigned long long)arg2;

@end

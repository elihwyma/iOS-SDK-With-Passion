/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBFolder.h>

@class SBHIconModel, SBIconListModel;

@protocol SBRootFolderDelegate;

@interface SBRootFolder : SBFolder

{
    id <SBRootFolderDelegate> _delegate;
    SBHIconModel *_model;
}

@property (retain, nonatomic, setter=_setDock:) SBIconListModel *dock;
@property (weak, nonatomic) id <SBRootFolderDelegate> delegate;
@property (weak, nonatomic) SBHIconModel *model;
@property (nonatomic, readonly) _Bool supportsDock;

+ (_Bool)isRootFolderClass;

- (id)icons;
- (id)nodeIdentifier;
- (_Bool)isRootFolder;
- (_Bool)isIconAtIndexPathInDock:(id)arg1 includingDockFolders:(_Bool)arg2;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (id)indexPathForFirstFreeSlotStartingAtList:(id)arg1 avoidingFirstList:(_Bool)arg2;
- (_Bool)canAddIconCount:(unsigned long long)arg1 startingAtList:(id)arg2;
- (id)folderContainingIndexPath:(id)arg1 relativeIndexPath:(id *)arg2;
- (_Bool)canRemoveIcons;
- (_Bool)canEditDisplayName;
- (id)_listsForCompaction;
- (_Bool)isIconAtIndexPathInDock:(id)arg1;
- (_Bool)canBounceIcon:(id)arg1;

@end

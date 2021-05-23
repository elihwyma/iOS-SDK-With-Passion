/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSMutableArray, NSMutableSet, NSNumber, NSString;

@interface ICFolderListViewState : NSObject

{
    _Bool _overrideCollapsed;
    _Bool _showSharedFoldersOnly;
    _Bool _showFoldersThatCanMoveAddOrDeleteContentsOnly;
    NSMutableSet *_expandedFolderIdentifiers;
    NSMutableSet *_collapsedAccountIdentifiers;
    NSMutableSet *_collapsedLegacyAccountIdentifiers;
    NSString *_overrideCollapsedFolder;
    NSMutableArray *_accounts;
    NSCountedSet *_folderNamesCountedSet;
    NSNumber *_customFoldersExistValue;
}

@property (retain, nonatomic) NSMutableArray *accounts;
@property (retain, nonatomic) NSCountedSet *folderNamesCountedSet;
@property (retain, nonatomic) NSNumber *customFoldersExistValue;
@property (retain, nonatomic) NSMutableSet *expandedFolderIdentifiers;
@property (retain, nonatomic) NSMutableSet *collapsedAccountIdentifiers;
@property (retain, nonatomic) NSMutableSet *collapsedLegacyAccountIdentifiers;
@property (nonatomic) _Bool overrideCollapsed;
@property (copy, nonatomic) NSString *overrideCollapsedFolder;
@property (nonatomic) _Bool showSharedFoldersOnly;
@property (nonatomic) _Bool showFoldersThatCanMoveAddOrDeleteContentsOnly;
@property (nonatomic, readonly) _Bool customFoldersExist;

- (id)init;
- (id)description;
- (id)itemAtIndexPath:(id)arg1;
- (unsigned long long)getModernAccountFolderListType:(id)arg1;
- (void)addFolderListItem:(id)arg1;
- (void)invalidateDerivedFolderState;
- (unsigned long long)getLegacyAccountFolderListType:(id)arg1;
- (id)indexesOfICAccounts;
- (id)indexesOfLegacyAccounts;
- (void)addICAccount:(id)arg1 includingTrash:(_Bool)arg2 alwaysIncludeAccountProxy:(_Bool)arg3;
- (void)addICAccounts:(id)arg1 forMovingFolder:(id)arg2;
- (void)addLegacyAccount:(id)arg1 includeAllNotesFolder:(_Bool)arg2;
- (unsigned long long)countOfAccounts;
- (unsigned long long)countOfICAccounts;
- (unsigned long long)indexOfICAccount:(id)arg1;
- (unsigned long long)countOfLegacyAccounts;
- (void)removeICAccounts;
- (void)removeLegacyAccounts;
- (unsigned long long)countOfItemsInAccountAtIndex:(unsigned long long)arg1;
- (id)accountItemAtIndex:(unsigned long long)arg1;
- (id)indexPathOfNoteContainer:(id)arg1;
- (void)folderMovedFromOldFolder:(id)arg1 toNewFolder:(id)arg2;

@end

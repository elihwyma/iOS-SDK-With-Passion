/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/Swift-Protocol.h>

@class ICAccount, ICFolderCustomNoteSortType, NSArray, NSData, NSManagedObjectContext, NSString;

@protocol ICNoteContainer <Swift>

@property (nonatomic, readonly) ICAccount *noteContainerAccount;
@property (readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) ICFolderCustomNoteSortType *customNoteSortType;
@property (nonatomic, readonly) _Bool isSharedViaICloud;
@property (nonatomic, readonly) _Bool isAllNotesContainer;
@property (nonatomic, readonly) _Bool canBeSharedViaICloud;
@property (nonatomic, readonly) _Bool supportsEditingNotes;
@property (nonatomic, readonly) _Bool isTrashFolder;
@property (nonatomic, readonly) NSString *containerIdentifier;
@property (nonatomic, readonly) NSArray *visibleSubFolders;
@property (retain, nonatomic) NSData *subFolderOrderMergeableData;

- (unsigned short)accountName;
- (unsigned short)isDeleted;
- (unsigned short)noteVisibilityTestingForSearchingAccount;
- (unsigned short)predicateForVisibleNotes;
- (unsigned short)predicateForPinnedNotes;
- (unsigned short)titleForNavigationBar;
- (unsigned short)noteIsVisible: /* Error: Ran out of types for this method. */;
- (unsigned short)visibleNotes;
- (unsigned short)visibleNotesCount;
- (unsigned short)titleForTableViewCell;
- (unsigned short)detailForTableViewCell;
- (unsigned short)isModernCustomFolder;
- (unsigned short)saveSubFolderMergeableDataIfNeeded;
- (unsigned short)mergeWithSubFolderMergeableData: /* Error: Ran out of types for this method. */;
- (unsigned short)updateSubFolderMergeableDataChangeCount;

@end

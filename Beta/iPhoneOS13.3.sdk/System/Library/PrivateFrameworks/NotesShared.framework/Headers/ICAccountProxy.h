/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class ICAccount, ICFolderCustomNoteSortType, NSArray, NSData, NSManagedObjectContext, NSString;

@interface ICAccountProxy : NSObject

{
    ICAccount *_account;
}

@property (retain) ICAccount *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

+ (id)accountProxyWithAccount:(id)arg1;
+ (id)keyPathsForValuesAffectingVisibleNotesCount;

- (long long)compare:(id)arg1;
- (id)accountName;
- (_Bool)isLeaf;
- (id)initWithAccount:(id)arg1;
- (_Bool)isDeleted;
- (_Bool)supportsVisibilityTestingType:(long long)arg1;
- (id)predicateForSearchableNotes;
- (id)predicateForSearchableAttachments;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)predicateForVisibleNotes;
- (id)predicateForPinnedNotes;
- (id)titleForNavigationBar;
- (_Bool)noteIsVisible:(id)arg1;
- (id)visibleNotes;
- (unsigned long long)visibleNotesCount;
- (id)titleForTableViewCell;
- (id)detailForTableViewCell;
- (_Bool)isModernCustomFolder;
- (void)saveSubFolderMergeableDataIfNeeded;
- (_Bool)mergeWithSubFolderMergeableData:(id)arg1;
- (void)updateSubFolderMergeableDataChangeCount;
- (id)customNoteSortTypeValue;
- (id)visibleNoteContainerChildren;

@end

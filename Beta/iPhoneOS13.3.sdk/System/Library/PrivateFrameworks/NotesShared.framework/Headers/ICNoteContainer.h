/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/ICCloudSyncingObject.h>

@class CROrderedSet, ICAccount, ICCRDTIdentifierOrderedSetVersionedDocument, ICFolderCustomNoteSortType, NSArray, NSData, NSManagedObjectContext, NSString;

@interface ICNoteContainer : ICCloudSyncingObject

{
    _Bool _subFolderOrderMergeableDataDirty;
    ICCRDTIdentifierOrderedSetVersionedDocument *_subFolderIdentifiersOrderedSetDocument;
}

@property (retain, nonatomic) ICAccount *owner;
@property (retain, nonatomic) NSString *accountNameForAccountListSorting;
@property (nonatomic) _Bool isHiddenNoteContainer;
@property (retain, nonatomic) NSString *nestedTitleForSorting;
@property (retain, nonatomic) ICCRDTIdentifierOrderedSetVersionedDocument *subFolderIdentifiersOrderedSetDocument;
@property (nonatomic) int sortOrder;
@property (nonatomic, readonly) CROrderedSet *subFolderIdentifiersOrderedSet;
@property (nonatomic, getter=isSubFolderOrderMergeableDataDirty) _Bool subFolderOrderMergeableDataDirty;
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

+ (id)keyPathsForValuesAffectingCloudAccount;

- (id)cacheKey;
- (id)accountName;
- (void)willTurnIntoFault;
- (void)willSave;
- (void)willRefresh:(_Bool)arg1;
- (_Bool)supportsVisibilityTestingType:(long long)arg1;
- (id)predicateForSearchableNotes;
- (id)predicateForSearchableAttachments;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)cloudAccount;
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
- (void)writeSubFolderMergeableData;

@end

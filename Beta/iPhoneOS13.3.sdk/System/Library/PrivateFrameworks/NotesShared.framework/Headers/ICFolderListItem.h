/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class ICFolderListViewState, ICNoteContainer, NSMutableArray, NSString, NoteCollectionObject;

@interface ICFolderListItem : NSObject

{
    _Bool _isAccount;
    _Bool _isAccountProxy;
    _Bool _isLegacy;
    _Bool _isDefaultFolder;
    _Bool _isTrash;
    ICNoteContainer *_noteContainer;
    NoteCollectionObject *_noteCollection;
    NSMutableArray *_children;
    ICFolderListItem *_parent;
    ICFolderListViewState *_viewState;
    unsigned long long _folderListItemAccountType;
}

@property (nonatomic) _Bool isAccount;
@property (nonatomic) _Bool isAccountProxy;
@property (nonatomic) _Bool isLegacy;
@property (nonatomic) _Bool isDefaultFolder;
@property (nonatomic) _Bool isTrash;
@property (retain, nonatomic) ICNoteContainer *noteContainer;
@property (retain, nonatomic) NoteCollectionObject *noteCollection;
@property (nonatomic, getter=isCollapsed) _Bool collapsed;
@property (nonatomic, readonly) _Bool isCollapsible;
@property (retain, nonatomic) NSMutableArray *children;
@property (weak, nonatomic) ICFolderListItem *parent;
@property (weak, nonatomic) ICFolderListViewState *viewState;
@property (nonatomic, readonly) unsigned long long level;
@property (nonatomic, readonly) unsigned long long countOfVisibleDescendants;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic) unsigned long long folderListItemAccountType;

- (id)description;
- (void)addChildItem:(id)arg1;
- (id)flattenedChildItems;
- (id)initWithViewState:(id)arg1;
- (void)addNoteContainer:(id)arg1 folderToExclude:(id)arg2;
- (void)insertChildItem:(id)arg1 atIndex:(unsigned long long)arg2;

@end

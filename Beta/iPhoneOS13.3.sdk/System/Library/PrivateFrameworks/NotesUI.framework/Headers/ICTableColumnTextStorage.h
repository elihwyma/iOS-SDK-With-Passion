/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/ICTableTextStorage.h>

@class ICTable, NSArray, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSString, NSUUID;

@protocol ICTableUndoHelping;

@interface ICTableColumnTextStorage : ICTableTextStorage

{
    _Bool _shouldPreventUndoCommands;
    NSUUID *_columnID;
    id <ICTableUndoHelping> _undoHelper;
    ICTable *_table;
    NSMutableArray *_rows;
    NSMutableDictionary *_mergeableStringDelegates;
    NSMutableIndexSet *_rowStartIndexes;
    unsigned long long _preventEditingUpdatesCount;
}

@property (weak, nonatomic, readonly) ICTable *table;
@property (nonatomic, readonly) NSMutableArray *rows;
@property (nonatomic, readonly) NSMutableDictionary *mergeableStringDelegates;
@property (nonatomic, readonly) NSMutableIndexSet *rowStartIndexes;
@property (nonatomic) unsigned long long preventEditingUpdatesCount;
@property (readonly) NSUUID *columnID;
@property (weak, nonatomic) id <ICTableUndoHelping> undoHelper;
@property (nonatomic, readonly) NSArray *populatedRows;
@property (nonatomic) _Bool shouldPreventUndoCommands;
@property (nonatomic, readonly) _Bool preventEditingUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)edited:(unsigned long long)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3;
- (void)textStorage:(id)arg1 didProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (unsigned long long)indexOfRow:(id)arg1;
- (_Bool)wantsUndoCommands;
- (unsigned long long)rowLocationForRowID:(id)arg1;
- (id)mergeableStringForRowID:(id)arg1;
- (unsigned long long)indexOfRowAtLocation:(unsigned long long)arg1;
- (void)beginPreventEditingUpdates;
- (void)endPreventEditingUpdates;
- (void)removeTextForRow:(id)arg1;
- (id)rowAtIndex:(unsigned long long)arg1 rowRange:(out struct _NSRange *)arg2;
- (unsigned long long)insertionIndexForRow:(id)arg1;
- (unsigned long long)rowLocationForRowIndex:(unsigned long long)arg1;
- (unsigned long long)nextLocationAfterRowLocation:(unsigned long long)arg1;
- (void)tableCellWasEditedAtColumnID:(id)arg1 rowID:(id)arg2 edited:(unsigned long long)arg3 range:(struct _NSRange)arg4 changeInLength:(long long)arg5;
- (void)breakUndoCoalescing;
- (void)closeUndoGroups;
- (void)resetUndoManager;
- (id)initWithTable:(id)arg1 columnID:(id)arg2;
- (struct _NSRange)characterRangeForRowID:(id)arg1;
- (void)removeRow:(id)arg1;
- (void)updateStorageForMovedRow:(id)arg1;
- (struct _NSRange)logicalRangeForLocation:(unsigned long long)arg1;
- (id)mergeableStringReplicaUUIDAtIndex:(unsigned long long)arg1;
- (id)savedSelectionWithSelectionAffinity:(unsigned long long)arg1;
- (void)restoreSelection:(id)arg1;

@end

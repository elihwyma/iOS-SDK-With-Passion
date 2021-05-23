/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesShared/ICTable.h>

@class NSObject;

@protocol ICTableDelegate;

@interface ICTable (UI)

@property (weak, nonatomic) NSObject<ICTableDelegate> *delegate;

- (id)mergeableStringForColumnID:(id)arg1 rowID:(id)arg2 createIfNeeded:(_Bool)arg3;
- (id)textStorageForCellAtColumnIndex:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2 undoTarget:(id)arg3 undoManager:(id)arg4;
- (id)documentForCellAtColumnIndex:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2;
- (id)textStorageForCellAtColumnID:(id)arg1 rowID:(id)arg2 undoTarget:(id)arg3 undoManager:(id)arg4;
- (void)enumerateTextStoragesForColumnIndexes:(id)arg1 rowIndexes:(id)arg2 undoTarget:(id)arg3 undoManager:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (id)textStorageForColumn:(id)arg1;
- (id)attributedStringWithNSTextTablesForColumns:(id)arg1 rows:(id)arg2;
- (id)attributedStringWithNSTextTablesForColumns:(id)arg1 rows:(id)arg2 forPrinting:(_Bool)arg3;
- (id)p_attributedStringForCell:(id)arg1 inTable:(id)arg2 atColumn:(unsigned long long)arg3 row:(unsigned long long)arg4 shouldFilter:(_Bool)arg5;

@end

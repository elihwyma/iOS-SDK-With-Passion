/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/CRObject.h>

@class CRDictionary, CRDocument, CRTombstoneOrderedSet, NSObject, NSString;

@protocol CRUndoDelegate;

@interface CRTable : CRObject

{
    CRDocument *_document;
    NSObject<CRUndoDelegate> *_delegate;
}

@property (retain, nonatomic) NSString *columnDirection;
@property (nonatomic, readonly) CRTombstoneOrderedSet *crColumns;
@property (nonatomic, readonly) CRTombstoneOrderedSet *crRows;
@property (nonatomic, readonly) CRDictionary *cellColumns;
@property (weak, nonatomic, readonly) CRDocument *document;
@property (weak, nonatomic) NSObject<CRUndoDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long columnCount;
@property (nonatomic, readonly) unsigned long long rowCount;
@property (nonatomic, readonly) _Bool isRightToLeft;
@property (nonatomic, readonly) _Bool isLeftToRight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)CRProperties;
+ (void)registerWithCRCoder;

- (_Bool)isEqual:(id)arg1;
- (id)identity;
- (id)initWithDocument:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)removeRowAtIndex:(unsigned long long)arg1;
- (void)moveRowAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)moveColumnAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeColumnAtIndex:(unsigned long long)arg1;
- (void)addUndoCommandsForObject:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)wantsUndoCommands;
- (id)initWithIdentity:(id)arg1 fields:(id)arg2;
- (void)enumerateRowsWithBlock:(CDUnknownBlockType)arg1;
- (id)insertColumnAtIndex:(unsigned long long)arg1;
- (id)insertRowAtIndex:(unsigned long long)arg1;
- (void)enumerateCellObjectsInCellSelectionContainingColumnIndices:(id)arg1 rowIndices:(id)arg2 copyItems:(_Bool)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)insertColumns:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (id)insertRows:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (id)objectForColumnIndex:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2;
- (void)setObject:(id)arg1 columnIndex:(unsigned long long)arg2 rowIndex:(unsigned long long)arg3;
- (unsigned long long)columnIndexForIdentifier:(id)arg1;
- (unsigned long long)rowIndexForIdentifier:(id)arg1;
- (id)columnIndexesForIdentifiers:(id)arg1;
- (id)rowIndexesForIdentifiers:(id)arg1;
- (id)subtableWithDocument:(id)arg1 forSelectionContainingColumnIndices:(id)arg2 rowIndices:(id)arg3;
- (id)initWithDocument:(id)arg1 isRightToLeft:(_Bool)arg2;
- (id)initWithDocument:(id)arg1 columnDirection:(id)arg2;
- (id)initWithDocument:(id)arg1 columnDirection:(id)arg2 crColumns:(id)arg3 crRows:(id)arg4 cellColumns:(id)arg5;
- (id)crTableColumnDirection;
- (id)identifierForRowAtIndex:(unsigned long long)arg1;
- (id)identifierForColumnAtIndex:(unsigned long long)arg1;
- (void)undoablyInsertContents:(id)arg1 atRow:(id)arg2;
- (void)undoablyInsertContents:(id)arg1 atColumn:(id)arg2;
- (void)undoablyRemoveContentsOfRow:(id)arg1;
- (void)setObject:(id)arg1 columnID:(id)arg2 rowID:(id)arg3;
- (void)undoablyRemoveContentsOfColumn:(id)arg1;
- (id)objectForColumnID:(id)arg1 rowID:(id)arg2;
- (id)columnsIntersectingWithColumns:(id)arg1;
- (id)rowsIntersectingWithRows:(id)arg1;
- (id)identifiersForRowIndexes:(id)arg1;
- (id)identifiersForColumnIndexes:(id)arg1;
- (_Bool)containsRow:(id)arg1;
- (_Bool)containsColumn:(id)arg1;
- (void)reverseColumnDirection;
- (void)enumerateColumnsWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)countOfPopulatedCells;

@end

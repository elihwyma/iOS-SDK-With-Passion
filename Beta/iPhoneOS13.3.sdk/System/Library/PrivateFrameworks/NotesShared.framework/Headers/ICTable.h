/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/CRTable.h>

@class CRTTCompatibleDocument, ICTableCellChangeNotifier, NSMutableDictionary;

@interface ICTable : CRTable

{
    ICTableCellChangeNotifier *_cellChangeNotifier;
    NSMutableDictionary *_columnTextStorages;
}

@property (retain, nonatomic) NSMutableDictionary *columnTextStorages;
@property (nonatomic, readonly) CRTTCompatibleDocument *ttDocument;
@property (nonatomic, readonly) ICTableCellChangeNotifier *cellChangeNotifier;

+ (void)registerWithCRCoder;

- (id)copyIntoNewDocumentWithReplicaID:(id)arg1;
- (void)setAttributedString:(id)arg1 columnIndex:(unsigned long long)arg2 rowIndex:(unsigned long long)arg3;
- (id)stringForColumnIndex:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2;
- (_Bool)isEmptyAtColumnIndexes:(id)arg1 rowIndexes:(id)arg2;
- (id)subtableWithDocument:(id)arg1 forSelectionContainingColumnIndices:(id)arg2 rowIndices:(id)arg3;
- (id)stringForColumnID:(id)arg1 rowID:(id)arg2;
- (id)mergeableStringForColumnID:(id)arg1 rowID:(id)arg2;
- (id)joinedAttributedStringForColumns:(id)arg1 rows:(id)arg2;
- (_Bool)columnIsEmptyAtIndex:(unsigned long long)arg1;
- (_Bool)rowIsEmptyAtIndex:(unsigned long long)arg1;
- (_Bool)isEmptyAtColumnIdentifiers:(id)arg1 rowIdentifiers:(id)arg2;

@end

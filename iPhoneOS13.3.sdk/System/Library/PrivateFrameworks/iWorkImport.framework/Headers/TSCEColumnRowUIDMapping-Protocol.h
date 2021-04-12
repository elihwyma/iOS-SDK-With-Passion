//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSIndexSet, NSMutableIndexSet, TSUMutableUUIDSet, TSUUUIDSet;

@protocol TSCEColumnRowUIDMapping
- (struct TSCERangeCoordinate)tableRangeCoordinate;
- (UUIDRect_d701734b)cellUIDRangeForCellRange:(struct TSUCellRect)arg1;
- (struct TSUCellRect)cellRangeForUIDRange:(const UUIDRect_d701734b )arg1;
- (vector_4dc5f307)prunedRowUIDsFromRowUIDs:(const vector_4dc5f307 )arg1;
- (vector_4dc5f307)prunedColumnUIDsFromColumnUIDs:(const vector_4dc5f307 )arg1;
- (NSMutableIndexSet *)mutableIndexesForUIDSet:(TSUUUIDSet *)arg1 isRows:(BOOL)arg2 notFoundUIDs:(TSUMutableUUIDSet *)arg3;
- (NSMutableIndexSet *)mutableIndexesForUIDSet:(TSUUUIDSet *)arg1 isRows:(BOOL)arg2;
- (TSUMutableUUIDSet *)UIDSetForIndexes:(NSIndexSet *)arg1 isRows:(BOOL)arg2;
- (struct TSUCellRect)range;
- (vector_4dc5f307)rowUIDs;
- (vector_4dc5f307)columnUIDs;
- (NSRange)rowRangeForUIDs:(const vector_4dc5f307 )arg1;
- (NSRange)columnRangeForUIDs:(const vector_4dc5f307 )arg1;
- (vector_4dc5f307)rowUIDsForRowRange:(NSRange)arg1;
- (vector_4dc5f307)columnUIDsForColumnRange:(NSRange)arg1;
- (NSIndexSet *)rowIndexesForUIDs:(const vector_4dc5f307 )arg1;
- (NSIndexSet *)columnIndexesForUIDs:(const vector_4dc5f307 )arg1;
- (NSMutableIndexSet *)mutableRowIndexesForUIDs:(const vector_4dc5f307 )arg1;
- (NSMutableIndexSet *)mutableColumnIndexesForUIDs:(const vector_4dc5f307 )arg1;
- (vector_4dc5f307)rowUIDsForRowIndexes:(NSIndexSet *)arg1;
- (vector_4dc5f307)columnUIDsForColumnIndexes:(NSIndexSet *)arg1;
- (unsigned int)rowIndexForRowUID:(const UUIDData_5fbc143e )arg1;
- (unsigned short)columnIndexForColumnUID:(const UUIDData_5fbc143e )arg1;
- (UUIDData_5fbc143e)rowUIDForRowIndex:(unsigned int)arg1;
- (UUIDData_5fbc143e)columnUIDForColumnIndex:(unsigned short)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSDMixing-Protocol.h>

@class NSArray, NSMutableArray;
@protocol TSCHNotifyOnModify;

__attribute__((visibility("hidden")))
@interface TSCHChartGrid : NSObject <NSCopying, TSDMixing>
{
    id <TSCHNotifyOnModify> mModifyDelegate;
    int mDirection;
    NSMutableArray *mRowNames;
    NSMutableArray *mColumnNames;
    NSMutableArray *mValues;
    BOOL mDirty;
    BOOL mAddingMultipleRows;
    NSUInteger mNextRowNumber;
    BOOL mAddingMultipleCols;
    NSUInteger mNextColNumber;
    NSMutableArray *mRowIds;
    NSMutableArray *mColumnIds;
    NSUInteger mTransitionLevel;
    BOOL mSkipUUIDAssertions;
}

@property(readonly, copy, nonatomic) NSArray *columnIds; // @synthesize columnIds=mColumnIds;
@property(readonly, copy, nonatomic) NSArray *rowIds; // @synthesize rowIds=mRowIds;
@property(nonatomic) id <TSCHNotifyOnModify> objectToNotify; // @synthesize objectToNotify=mModifyDelegate;
@property(nonatomic) BOOL dirty; // @synthesize dirty=mDirty;
@property(nonatomic) int direction; // @synthesize direction=mDirection;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (id)gridAdapterForColumnConstant;
- (id)gridAdapterForRowConstant;
- (id)gridAdapterForColumnCount;
- (id)gridAdapterForRowCount;
- (id)gridAdapterForColumn:(NSUInteger)arg1;
- (id)gridAdapterForRow:(NSUInteger)arg1;
- (void)takeDataFromDictionary:(id)arg1 rowIds:(id)arg2 columnIds:(id)arg3;
- (void)takeDataFromDictionary:(id)arg1;
- (void)insertColumnNames:(id)arg1 at:(NSUInteger)arg2 withIds:(id)arg3;
- (void)insertRowsNames:(id)arg1 at:(NSUInteger)arg2 withIds:(id)arg3;
- (void)insertColumnsAt:(NSUInteger)arg1 names:(id)arg2 data:(id)arg3 withIds:(id)arg4;
- (void)insertRowsAt:(NSUInteger)arg1 names:(id)arg2 data:(id)arg3 withIds:(id)arg4;
- (id)extractGridValuesReturningRowNames:(id )arg1 rowIds:(id )arg2 columnNames:(id )arg3 columnIds:(id )arg4;
- (id)extractColumnNames:(NSRange)arg1 returningColumnIds:(id )arg2 valueColumns:(id )arg3;
- (id)extractRowNames:(NSRange)arg1 returningRowIds:(id )arg2 valueRows:(id )arg3;
- (void)moveColumns:(NSRange)arg1 afterColumn:(long long)arg2;
- (void)moveRows:(NSRange)arg1 afterRow:(long long)arg2;
- (void)setValue:(id)arg1 forRow:(NSUInteger)arg2 column:(NSUInteger)arg3;
- (void)removeColumn:(NSUInteger)arg1;
- (void)removeRow:(NSUInteger)arg1;
- (void)setNameForColumn:(NSUInteger)arg1 toName:(id)arg2;
- (void)setNameForRow:(NSUInteger)arg1 toName:(id)arg2;
- (void)insertColumn:(NSUInteger)arg1 withName:(id)arg2 withId:(id)arg3;
- (void)insertRow:(NSUInteger)arg1 withName:(id)arg2 withId:(id)arg3;
- (id)p_uuidsForColumns:(NSRange)arg1;
- (id)p_uuidsForRows:(NSRange)arg1;
- (id)createUUIDArrayWithCount:(NSUInteger)arg1;
- (id)createUUID;
- (void)validateRowColumnIdMapsAndFix:(BOOL)arg1;
- (void)generateRowColumnIdMaps;
- (void)adjustRowAndColumnNameListLength;
- (void)p_adjustNameListLength:(BOOL)arg1;
- (id)getNewRowNameForLocale:(id)arg1;
- (id)getNewColumnNameForLocale:(id)arg1;
- (void)addingMultipleCols:(BOOL)arg1;
- (void)addingMultipleRows:(BOOL)arg1;
- (BOOL)p_name:(id)arg1 isInArray:(id)arg2;
- (id)description;
- (NSUInteger)columnIndexForColumnId:(id)arg1;
- (NSUInteger)rowIndexForRowId:(id)arg1;
- (id)columnIdForColumn:(NSUInteger)arg1;
- (id)rowIdForRow:(NSUInteger)arg1;
- (id )valuesForRows:(NSRange)arg1 column:(NSUInteger)arg2;
- (id )valuesForRow:(NSUInteger)arg1 columns:(NSRange)arg2;
- (id)valueForRow:(NSUInteger)arg1 column:(NSUInteger)arg2;
- (id)nameForColumn:(NSUInteger)arg1;
- (id)nameForRow:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger numberOfColumns;
@property(readonly, nonatomic) NSUInteger numberOfRows;
- (NSUInteger)noAssertNumberOfColumns;
- (NSUInteger)noAssertNumberOfRows;
- (void)decrementTransitionLevel;
- (void)incrementTransitionLevel;
- (BOOL)contentsEqualToGrid:(id)arg1;
- (void)willModify;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)init;
- (void)loadFromPreUFFArchive:(const struct ChartGridArchive )arg1;
- (void)insertColumn:(NSUInteger)arg1 withName:(id)arg2;
- (void)insertRow:(NSUInteger)arg1 withName:(id)arg2;
- (void)saveToUnityArchive:(struct ChartArchive )arg1 forCopy:(BOOL)arg2;
- (void)loadFromUnityArchive:(const struct ChartArchive )arg1 chartInfo:(id)arg2;

@end


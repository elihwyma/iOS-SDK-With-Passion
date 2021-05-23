/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSTCellIterator.h>

@class TSTCell, TSTMasterLayout, TSTTableModel;

@interface TSTLayoutCellIterator : TSTCellIterator

{
    TSTMasterLayout *mMasterLayout;
    CDStruct_5f1f7aa9 mLayoutRange;
    CDStruct_0441cfb5 mLayoutCellID;
    TSTCell *mLayoutCell;
    CDStruct_6188ab8e mModelIteratorData;
    _Bool mQueriedModel;
    _Bool mModelIteratorHasCell;
    unsigned short mNumberOfLayoutColumns;
    unsigned short mNumberOfColumns;
    unsigned short mNumberOfRows;
}

@property (nonatomic, readonly) TSTMasterLayout *masterLayout;
@property (nonatomic, readonly) TSTTableModel *tableModel;

- (void)dealloc;
- (id)initWithLayout:(id)arg1;
- (id)initWithMasterLayout:(id)arg1;
- (id)initWithMasterLayout:(id)arg1 range:(CDStruct_5f1f7aa9)arg2 flags:(unsigned long long)arg3;
- (id)initWithLayout:(id)arg1 range:(CDStruct_5f1f7aa9)arg2 flags:(unsigned long long)arg3;
- (id)initWithMasterLayout:(id)arg1 range:(CDStruct_5f1f7aa9)arg2;
- (id)initWithLayout:(id)arg1 range:(CDStruct_5f1f7aa9)arg2;

@end

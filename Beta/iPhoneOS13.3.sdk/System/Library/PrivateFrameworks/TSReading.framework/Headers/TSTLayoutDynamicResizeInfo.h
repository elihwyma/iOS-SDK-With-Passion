/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString, TSTCellRegion;

@interface TSTLayoutDynamicResizeInfo : NSObject

{
    _Bool mValid;
    int mTableRowsBehavior;
    TSTCellRegion *mRowRegion;
    unsigned short mStartRowIndex;
    unsigned short mNumberOfRows;
    unsigned short mNumberOfResizableRows;
    double *mCapturedRowHeights;
    double *mCurrentRowHeights;
    double *mMinimumRowHeights;
    double mCapturedRowHeightTotal;
    TSTCellRegion *mColumnRegion;
    unsigned char mStartColumnIndex;
    unsigned short mNumberOfColumns;
    unsigned short mNumberOfResizableColumns;
    double *mCapturedColumnWidths;
    double *mCurrentColumnWidths;
    double *mMinimumColumnWidths;
    double mCapturedColumnWidthTotal;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (_Bool)valid;
- (id)columnWidths;
- (void)p_captureRowColumnInformation:(id)arg1 columnRegion:(id)arg2 rowRegion:(id)arg3;
- (_Bool)hasHeightForRow:(unsigned short)arg1;
- (_Bool)hasWidthForColumn:(unsigned char)arg1;
- (double)applyResizeHeightFactor:(double)arg1;
- (double)applyResizeWidthFactor:(double)arg1;
- (double)getColumnWidth:(unsigned char)arg1;
- (double)getRowHeight:(unsigned short)arg1;
- (void)enumerateRowHeightsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateColumnWidthsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithMasterLayout:(id)arg1;
- (id)initWithMasterLayout:(id)arg1 columnRegion:(id)arg2;
- (id)initWithMasterLayout:(id)arg1 rowRegion:(id)arg2;
- (id)initWithDynamicResizeInfo:(id)arg1;
- (double)getRowInitialHeight:(unsigned short)arg1;
- (double)getColumnInitialWidth:(unsigned char)arg1;
- (double)getRowHeightResize:(unsigned short)arg1;
- (double)getColumnWidthResize:(unsigned char)arg1;
- (void)captureNewMinimumRowHeights:(id)arg1;
- (double)applyRowTotalHeight:(double)arg1;
- (double)applyColumnTotalWidth:(double)arg1;
- (struct CGSize)capturedTableSize;
- (id)rowHeights;

@end

/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EMSheetMapper.h>

@class CMStyle, ECColumnWidthConvertor, EDWorksheet;

__attribute__((visibility("hidden")))
@interface EMWorksheetMapper : EMSheetMapper

{
    EDWorksheet *edWorksheet;
    CMStyle *mStyle;
    long long mMaxPopulatedColumn;
    long long mMaxPopulatedRow;
    double *mColumnGrid;
    double *mRowGrid;
    int mWidth;
    int mHeight;
    ECColumnWidthConvertor *mColumnWidthConvertor;
}

- (void)dealloc;
- (unsigned long long)columnCount;
- (int)width;
- (int)height;
- (_Bool)isVisible;
- (double)defaultRowHeight;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (int)preprocessWidthWithState:(id)arg1;
- (int)preprocessHeightWithState:(id)arg1;
- (id)columnWidthConvertor;
- (double *)rowGrid;
- (double *)columnGrid;
- (long long)maxRowNumber;
- (double)defaultColumnWidth;
- (struct CGSize)preprocessSizeWithState:(id)arg1;
- (id)initWithEDWorksheet:(id)arg1 parent:(id)arg2;
- (void)countRowsAndColumnsWithState:(id)arg1;
- (void)setRowGrid;
- (double)xlColumnWidthToPoints:(double)arg1;
- (void)_initWithState:(id)arg1;
- (void)readHyperlinksWithState:(id)arg1;
- (void)mapTableAt:(id)arg1 withState:(id)arg2;
- (void)mapDrawablesAt:(id)arg1 withState:(id)arg2;
- (struct CGSize)preprocessDrawableSizeWithState:(id)arg1;
- (void)mapColumnInfosAt:(id)arg1 withState:(id)arg2;
- (void)mapWorksheetClassesAtTableNode:(id)arg1;

@end

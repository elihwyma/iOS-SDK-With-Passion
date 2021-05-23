/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>

@class CMDrawableStyle, CMTableGridInfo, OADOrientedBounds, OADTable;

__attribute__((visibility("hidden")))
@interface PMTableMapper : CMMapper

{
    OADTable *mTable;
    CMDrawableStyle *mStyle;
    CMTableGridInfo *mGrid;
    OADOrientedBounds *mBounds;
}

- (unsigned long long)rowCount;
- (id)cellStyle;
- (id)grid;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (float)columnWidthAtIndex:(unsigned long long)arg1 state:(id)arg2;
- (id)tableBorderStyle;
- (id)defaultCellFillForRow:(unsigned long long)arg1 withState:(id)arg2;
- (id)initWithOadTable:(id)arg1 bounds:(id)arg2 parent:(id)arg3;
- (void)mapTablePropertiesWithState:(id)arg1;
- (void)mapColumnGridAt:(id)arg1 withState:(id)arg2;
- (id)defaultCellFillWithState:(id)arg1;

@end

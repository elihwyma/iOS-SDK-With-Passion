/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>

@class WDTable, WMBordersProperty, WMTableColumnInfo, WMTableStyle;

__attribute__((visibility("hidden")))
@interface WMTableMapper : CMMapper

{
    WDTable *mWdTable;
    WMBordersProperty *mInsideBorders;
    WMTableStyle *mStyle;
    WMTableColumnInfo *mColumnInfo;
}

+ (_Bool)isTableDeleted:(id)arg1;

- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithWDTable:(id)arg1 parent:(id)arg2;
- (id)columnInfo;
- (id)insideBorders;
- (id)copyColumnInfo;
- (void)setInsideBorders:(id)arg1;
- (id)copyStopArrayForRow:(unsigned long long)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>

@class WDTableRow;

__attribute__((visibility("hidden")))
@interface WMTableRowMapper : CMMapper

{
    WDTableRow *mWdTableRow;
    double mHeight;
}

+ (_Bool)isTableRowDeleted:(id)arg1;

- (double)height;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithWDTableRow:(id)arg1 parent:(id)arg2;
- (void)setRowProperties:(id)arg1;

@end

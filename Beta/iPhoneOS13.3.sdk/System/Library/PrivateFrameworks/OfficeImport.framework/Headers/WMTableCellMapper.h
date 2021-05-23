/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>

@class WDTableCell;

__attribute__((visibility("hidden")))
@interface WMTableCellMapper : CMMapper

{
    WDTableCell *mWdTableCell;
    unsigned int mColSpan;
    double mHeight;
    double mWidth;
    double mLeftPadding;
    double mRightPadding;
}

- (unsigned int)colSpan;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)tableMapper;
- (void)mapCellStyleAt:(id)arg1;
- (id)initWithWDTableCell:(id)arg1 atIndex:(unsigned int)arg2 parent:(id)arg3;

@end

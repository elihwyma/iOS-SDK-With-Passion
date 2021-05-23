/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EMSheetMapper.h>

@class EDChartSheet;

__attribute__((visibility("hidden")))
@interface EMChartsheetMapper : EMSheetMapper

{
    EDChartSheet *mChartSheet;
    struct CGRect mBox;
}

- (int)width;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithChartSheet:(id)arg1 parent:(id)arg2;
- (int)preprocessWidthWithState:(id)arg1;
- (int)preprocessHeightWithState:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class OADTableCellStyle, OADTableTextStyle;

__attribute__((visibility("hidden")))
@interface OADTablePartStyle : NSObject

{
    OADTableTextStyle *mTextStyle;
    OADTableCellStyle *mCellStyle;
}

+ (id)defaultStyle;

- (id)description;
- (void)setTextStyle:(id)arg1;
- (id)textStyle;
- (id)cellStyle;
- (void)setCellStyle:(id)arg1;
- (id)shallowCopy;
- (void)applyOverridesFrom:(id)arg1;

@end

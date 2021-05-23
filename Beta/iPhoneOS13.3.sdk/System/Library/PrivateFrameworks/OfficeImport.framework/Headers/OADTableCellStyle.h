/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class OADFill, OADTableCellBorderStyle;

__attribute__((visibility("hidden")))
@interface OADTableCellStyle : NSObject

{
    OADTableCellBorderStyle *mBorderStyle;
    OADFill *mFill;
}

+ (id)defaultStyle;
+ (id)defaultFill;

- (id)description;
- (void)setBorderStyle:(id)arg1;
- (id)fill;
- (id)borderStyle;
- (id)shallowCopy;
- (void)setFill:(id)arg1;
- (void)applyOverridesFrom:(id)arg1;

@end

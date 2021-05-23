/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WDRun.h>

@class WDCharacterRun, WDText;

__attribute__((visibility("hidden")))
@interface WDNote : WDRun

{
    WDText *mText;
    WDCharacterRun *mReference;
    _Bool mAutomaticNumbering;
}

- (id)description;
- (id)text;
- (id)reference;
- (int)runType;
- (void)setAutomaticNumbering:(_Bool)arg1;
- (_Bool)automaticNumbering;
- (id)initWithParagraph:(id)arg1 footnote:(_Bool)arg2;

@end

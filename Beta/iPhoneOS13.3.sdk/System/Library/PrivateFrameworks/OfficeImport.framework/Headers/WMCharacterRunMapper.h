/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>

@class NSString, WDCharacterRun, WMStyle;

__attribute__((visibility("hidden")))
@interface WMCharacterRunMapper : CMMapper

{
    WDCharacterRun *wdCharacterRun;
    WMStyle *mStyle;
    float mFontSizeBumpFactor;
    NSString *mText;
    _Bool mIsDeleted;
}

+ (void)addNonCollapsableSpanAt:(id)arg1 withState:(id)arg2;

- (id)initWithText:(id)arg1;
- (_Bool)isDeleted;
- (id)baseStyle;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (int)defaultTabWidth;
- (id)copyCharacterStyle;
- (unsigned int)countAndStripLeadingTabs;
- (void)mapSubstring:(id)arg1 at:(id)arg2;
- (void)mapTabs:(unsigned int)arg1 at:(id)arg2 afterText:(id)arg3;
- (id)initWithWDCharacterRun:(id)arg1 parent:(id)arg2;
- (void)map1At:(id)arg1 withState:(id)arg2;
- (id)boldStyle;

@end

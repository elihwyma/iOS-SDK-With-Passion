/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WDCharacterRun.h>

@class WDRubyProperties;

__attribute__((visibility("hidden")))
@interface WDRubyRun : WDCharacterRun

{
    WDCharacterRun *mPhoneticRun;
    WDRubyProperties *mRubyProperties;
}

- (id)description;
- (id)initWithParagraph:(id)arg1;
- (int)runType;
- (id)rubyProperties;
- (id)phoneticRun;
- (id)phoneticRunString;
- (void)setPhoneticRunString:(id)arg1;
- (void)appendPhoneticRunString:(id)arg1;
- (id)rubyBase;

@end

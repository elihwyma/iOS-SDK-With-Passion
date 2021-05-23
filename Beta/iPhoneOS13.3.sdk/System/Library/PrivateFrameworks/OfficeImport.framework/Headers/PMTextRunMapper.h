/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>

@class OADTextRun;

__attribute__((visibility("hidden")))
@interface PMTextRunMapper : CMMapper

{
    OADTextRun *mTextRun;
}

- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithOadTextRun:(id)arg1 parent:(id)arg2;
- (id)fontScheme;
- (id)copyCharacterStyleWithState:(id)arg1;
- (void)addFontForLanguageType:(int)arg1 toCharacterStyle:(id)arg2;
- (_Bool)_isDefaultFill:(id)arg1;

@end

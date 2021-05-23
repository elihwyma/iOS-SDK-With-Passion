/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WMSymbolMapper : CMMapper

{
    unsigned short mCharacter;
    NSString *mFontName;
}

+ (unsigned short)mapWindingsCharacter:(unsigned short)arg1;
+ (unsigned short)mapZapfDingbatsCharacter:(unsigned short)arg1;
+ (unsigned short)mapCharacter:(unsigned short)arg1 withFontName:(id)arg2;
+ (_Bool)isSymbolFontName:(id)arg1;

- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithWDSymbol:(id)arg1 parent:(id)arg2;

@end

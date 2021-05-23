/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WDRunWithCharacterProperties.h>

@class WDFont;

__attribute__((visibility("hidden")))
@interface WDSymbol : WDRunWithCharacterProperties

{
    WDFont *mFont;
    unsigned short mCharacter;
}

- (id)description;
- (void)setFont:(id)arg1;
- (id)font;
- (id)initWithParagraph:(id)arg1;
- (unsigned short)character;
- (void)setCharacter:(unsigned short)arg1;
- (int)runType;

@end

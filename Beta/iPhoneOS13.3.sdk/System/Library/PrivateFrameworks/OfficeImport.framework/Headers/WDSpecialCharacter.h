/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WDRunWithCharacterProperties.h>

__attribute__((visibility("hidden")))
@interface WDSpecialCharacter : WDRunWithCharacterProperties

{
    int mType;
}

- (id)description;
- (id)initWithParagraph:(id)arg1;
- (int)characterType;
- (int)runType;
- (void)setCharacterType:(int)arg1;

@end

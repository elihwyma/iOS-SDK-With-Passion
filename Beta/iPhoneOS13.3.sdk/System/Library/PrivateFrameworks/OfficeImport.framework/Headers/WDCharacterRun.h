/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WDRunWithCharacterProperties.h>

@class NSMutableString;

__attribute__((visibility("hidden")))
@interface WDCharacterRun : WDRunWithCharacterProperties

{
    NSMutableString *mString;
    _Bool mBinaryWriterContentFlag;
}

- (id)string;
- (id)description;
- (_Bool)isEmpty;
- (void)appendString:(id)arg1;
- (void)setString:(id)arg1;
- (id)initWithParagraph:(id)arg1;
- (void)copyPropertiesFrom:(id)arg1;
- (int)runType;
- (_Bool)binaryWriterContentFlag;
- (void)setBinaryWriterContentFlag:(_Bool)arg1;
- (void)removeLastCharacter:(unsigned short)arg1;
- (void)setPropertiesForDocument;
- (void)clearString;
- (id)initWithParagraph:(id)arg1 string:(id)arg2;

@end

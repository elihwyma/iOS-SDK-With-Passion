/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, OADCharacterProperties, OADParagraphProperties;

__attribute__((visibility("hidden")))
@interface OADParagraph : NSObject

{
    OADParagraphProperties *mProperties;
    NSMutableArray *mTextRuns;
    OADCharacterProperties *mParagraphEndCharacterProperties;
}

- (id)init;
- (id)description;
- (_Bool)isEmpty;
- (id)properties;
- (void)applyProperties:(id)arg1;
- (unsigned long long)characterCount;
- (id)plainText;
- (unsigned long long)textRunCount;
- (id)textRunAtIndex:(unsigned long long)arg1;
- (id)paragraphEndCharacterProperties;
- (id)addRegularTextRun;
- (id)addTextLineBreak;
- (id)addDateTimeFieldWithFormat:(int)arg1;
- (id)addGenericTextFieldWithGuid:(id)arg1 type:(id)arg2;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(id)arg1;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (void)changeParentParagraphPropertiesPreservingEffectiveValues:(id)arg1;
- (void)removeAllTextRuns;
- (unsigned long long)lineBreakCount;
- (id)addFooterField;
- (void)setParagraphEndCharacterProperties:(id)arg1;
- (_Bool)hasBulletCharacterProperties;
- (id)bulletCharacterProperties;
- (_Bool)isSimilarToParagraph:(id)arg1;
- (id)findFirstTextRunOfClass:(Class)arg1;
- (id)addSlideNumberField;

@end

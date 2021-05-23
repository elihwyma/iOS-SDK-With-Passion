/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, OADTextBodyProperties, OADTextListStyle;

__attribute__((visibility("hidden")))
@interface OADTextBody : NSObject

{
    OADTextBodyProperties *mProperties;
    NSMutableArray *mParagraphs;
    OADTextListStyle *mTextListStyle;
}

- (id)init;
- (id)description;
- (_Bool)isEmpty;
- (id)properties;
- (void)setProperties:(id)arg1;
- (unsigned long long)paragraphCount;
- (id)paragraphAtIndex:(unsigned long long)arg1;
- (id)plainText;
- (id)addParagraph;
- (id)overrideTextListStyle;
- (id)textListStyle;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(id)arg1;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ownTextListStyle:(_Bool)arg2;
- (void)flattenProperties;
- (_Bool)propagateActualTextStyleToTextListStyle;
- (unsigned long long)nonEmptyParagraphCount;
- (void)removeAllParagraphs;
- (unsigned long long)newLineCount;
- (id)firstParagraphEffects;
- (void)applyTextListStyle:(id)arg1;
- (void)removeTrailingNewlines;
- (void)removeLeadingNewlines;
- (void)removeLastParagraphIfEmpty;
- (_Bool)isSimilarToTextBody:(id)arg1;
- (void)addParagraphsFromTextBody:(id)arg1;
- (id)findFirstTextRunOfClass:(Class)arg1;

@end

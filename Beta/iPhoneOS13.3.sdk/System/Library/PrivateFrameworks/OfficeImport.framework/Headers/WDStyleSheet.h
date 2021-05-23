/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, WDCharacterProperties, WDDocument, WDParagraphProperties, WDStyle;

__attribute__((visibility("hidden")))
@interface WDStyleSheet : NSObject

{
    NSMutableDictionary *mStyleDictionary;
    WDCharacterProperties *mDefaultCharacterProperties;
    WDParagraphProperties *mDefaultParagraphProperties;
    WDStyle *mDefaultParagraphStyle;
    WDStyle *mDefaultCharacterStyle;
    WDStyle *mDefaultTableStyle;
    WDStyle *mDefaultListStyle;
    NSMutableArray *mStylesInOrder;
    NSMutableDictionary *mIdDictionaryForName;
    WDDocument *mDocument;
}

@property (weak, readonly) WDDocument *document;

- (id)description;
- (id)defaultParagraphStyle;
- (id)initWithDocument:(id)arg1;
- (id)styles;
- (id)defaultCharacterStyle;
- (id)defaultListStyle;
- (void)setDefaultParagraphStyle:(id)arg1;
- (id)defaultCharacterProperties;
- (id)defaultTableStyle;
- (id)styleNameToUniqueId:(id)arg1;
- (id)styleWithId:(id)arg1;
- (id)createStyleWithId:(id)arg1 type:(int)arg2;
- (void)setDefaultCharacterStyle:(id)arg1;
- (void)setDefaultTableStyle:(id)arg1;
- (void)setDefaultListStyle:(id)arg1;
- (void)addStyle:(id)arg1 name:(id)arg2;
- (void)setName:(id)arg1 forId:(id)arg2;
- (void)initializeDefaultProperties;
- (id)styleIdForName:(id)arg1;
- (id)styleWithName:(id)arg1;
- (id)createStyleWithName:(id)arg1 type:(int)arg2;
- (unsigned long long)styleCount;
- (id)paragraphStyleWithStartingName:(id)arg1;
- (void)removeStyleWithId:(id)arg1;
- (id)defaultParagraphProperties;
- (void)createDefaultStyles;
- (id)styleIdToName:(id)arg1;
- (id)allAliasesForStyleId:(id)arg1 name:(id)arg2;

@end

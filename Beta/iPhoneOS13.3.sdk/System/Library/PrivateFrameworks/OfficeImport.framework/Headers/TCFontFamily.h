/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface TCFontFamily : NSObject

{
    NSDictionary *_namesByLanguage;
    NSArray *_members;
}

@property (nonatomic, readonly) NSDictionary *namesByLanguage;
@property (nonatomic, readonly) NSArray *members;

- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)equivalentDictionary;
- (id)englishName;
- (id)bestMatchForStyling:(struct TCFontStyling)arg1;
- (id)regularVariant:(_Bool)arg1;
- (_Bool)allFamilyIsBold;
- (id)weightVariantsOfFont:(id)arg1;
- (unsigned long long)boldFontIndexInWeightVariants:(id)arg1;
- (unsigned long long)regularFontIndexInWeightVariants:(id)arg1;
- (_Bool)traitsAreAdditive;
- (id)initWithNamesByLanguage:(id)arg1 members:(id)arg2;
- (id)memberForPSName:(id)arg1;
- (id)memberForFullName:(id)arg1;
- (_Bool)allFamilyIsItalic;
- (id)variantByTogglingItalicOfFont:(id)arg1;
- (id)variantByAddingBoldToFont:(id)arg1;
- (id)variantByRemovingBoldFromFont:(id)arg1;
- (_Bool)doesAnyNonBoldVariantExistForFont:(id)arg1;

@end

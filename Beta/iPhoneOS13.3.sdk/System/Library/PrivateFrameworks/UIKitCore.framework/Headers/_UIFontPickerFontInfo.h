/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSAttributedString, NSString, UIFontDescriptor;

@interface _UIFontPickerFontInfo : NSObject

{
    NSString *_familyName;
    NSString *_styleName;
    NSString *_localizedFamilyName;
    NSString *_localizedStyleName;
    double _lineHeight;
    UIFontDescriptor *_fontDescriptor;
    NSAttributedString *_attributedString;
    NSString *_attributedStringContentSize;
    unsigned long long _hasMultipleFaces;
    NSArray *_subInfos;
    NSString *_postscriptName;
}

@property (readonly) NSString *familyName;
@property (readonly) NSString *postscriptName;
@property (readonly) NSString *styleName;
@property (readonly) double lineHeight;
@property (readonly) NSAttributedString *attributedString;
@property (readonly) NSString *localizedName;
@property (readonly) NSString *localizedFamilyName;
@property (readonly) UIFontDescriptor *fontDescriptor;
@property (readonly, getter=isFontFamilyAvailable) _Bool fontFamilyAvailable;
@property (readonly) _Bool hasMultipleFaces;
@property (readonly) NSArray *faces;
@property (readonly) _UIFontPickerFontInfo *familyInfo;

+ (id)infoWithFamilyName:(id)arg1;
+ (id)infoWithFontDescriptor:(struct __CTFontDescriptor *)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithFamilyName:(id)arg1;
- (id)initWithFontDescriptor:(id)arg1;
- (id)_sortedFacesByWeight;
- (void)_populateLocalizedNamesIfNecessary;
- (id)_fontStringForTraitCollection:(id)arg1;
- (void)_updateAttributedStringIfNeeded;
- (_Bool)matchesTraits:(unsigned int)arg1;
- (_Bool)matchesLanguages:(id)arg1;
- (_Bool)matchesFamilyForFontDescriptor:(id)arg1;
- (_Bool)matchesFontDescriptor:(id)arg1;
- (_Bool)matchesConfiguration:(id)arg1;
- (id)faceMatchingDescriptor:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSCache, NSDictionary, NSMutableArray, NSString;

@interface SXFontIndex : NSObject

{
    NSDictionary *_fonts;
    NSCache *_attributeToFontIndex;
    NSCache *_fontToAttributeIndex;
    NSMutableArray *_fontFamilyProviders;
}

@property (nonatomic, readonly) NSDictionary *fonts;
@property (nonatomic, readonly) NSCache *attributeToFontIndex;
@property (nonatomic, readonly) NSCache *fontToAttributeIndex;
@property (nonatomic, readonly) NSMutableArray *fontFamilyProviders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)fontsForFamilyProviders:(id)arg1;
- (id)fontNameForFontAttributes:(id)arg1 size:(long long)arg2;
- (id)fontAttributesForFontName:(id)arg1;
- (id)initWithFontFamilyProviders:(id)arg1;
- (void)addFontFamilyProvider:(id)arg1;

@end

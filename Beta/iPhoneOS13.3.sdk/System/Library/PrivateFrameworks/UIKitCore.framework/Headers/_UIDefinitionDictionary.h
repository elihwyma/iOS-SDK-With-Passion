/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class MAAsset, NSString;

__attribute__((visibility("hidden")))
@interface _UIDefinitionDictionary : NSObject

{
    struct __DCSDictionary *_dictionary;
    _Bool _activated;
    MAAsset *_rawAsset;
    NSString *_definitionLanguage;
    MAAsset *_assetToUpgrade;
}

@property (readonly) MAAsset *rawAsset;
@property (readonly) NSString *localizedLanguageName;
@property (readonly) NSString *localizedDictionaryName;
@property (readonly) NSString *definitionLanguage;
@property _Bool activated;
@property (retain) MAAsset *assetToUpgrade;

+ (id)_normalizedLanguageStringForLanguageCode:(id)arg1;

- (void)dealloc;
- (id)description;
- (void)updateAsset;
- (_Bool)assetIsLocal;
- (_Bool)assetIsDeletable;
- (_Bool)_hasDefinitionForTerm:(id)arg1;
- (_Bool)_isTTYDictionary;
- (id)_HTMLDefinitionForTerm:(id)arg1 type:(long long)arg2;
- (id)_shortHTMLDefinitionForTerm:(id)arg1;
- (id)_attributedDefinitionForTerm:(id)arg1;
- (id)_fullHTMLDefinitionForTerm:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (id)_definitionValueForTerm:(id)arg1;

@end

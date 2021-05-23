/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INRootCodableDescription.h>

#import <Intents/Swift-Protocol.h>

@class INCodableAttribute, NSString;

@interface INIntentCodableDescription : INRootCodableDescription <Swift>

{
    _Bool _userConfirmationRequired;
    _Bool _configurable;
    _Bool _eligibleForSuggestions;
    NSString *_inputAttributeName;
    NSString *_keyAttributeName;
    NSString *_attributeKeyPrefix;
    NSString *_attributesKeyPrefix;
    NSString *_title;
    NSString *_titleLocID;
    NSString *_descriptiveText;
    NSString *_descriptiveTextLocID;
    NSString *_defaultImageName;
    long long _intentCategory;
    NSString *_verb;
}

@property (copy, nonatomic, setter=_setInputAttributeName:) NSString *_inputAttributeName;
@property (copy, nonatomic, setter=_setKeyAttributeName:) NSString *_keyAttributeName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleLocID;
@property (copy, nonatomic) NSString *descriptiveText;
@property (copy, nonatomic) NSString *descriptiveTextLocID;
@property (copy, nonatomic) NSString *defaultImageName;
@property (nonatomic) long long intentCategory;
@property (copy, nonatomic) NSString *verb;
@property (nonatomic) _Bool userConfirmationRequired;
@property (nonatomic, getter=isConfigurable) _Bool configurable;
@property (nonatomic, getter=isEligibleForSuggestions) _Bool eligibleForSuggestions;
@property (nonatomic, readonly) INCodableAttribute *inputAttribute;
@property (nonatomic, readonly) INCodableAttribute *keyAttribute;
@property (copy, nonatomic, readonly) NSString *localizedTitle;
@property (copy, nonatomic, readonly) NSString *localizedDescriptiveText;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)attributes;
- (id)keyPrefix;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (id)_attributeKeyPrefix;
- (id)_attributesKeyPrefix;
- (id)_ignoredAttributeTags;
- (id)resolvableParameterCombinationsWithParameterCombinations:(id)arg1;
- (id)localizedTitleForLanguage:(id)arg1;
- (id)localizedDescriptiveTextForLanguage:(id)arg1;
- (void)_updateWithIntentCodableDescription:(id)arg1;

@end

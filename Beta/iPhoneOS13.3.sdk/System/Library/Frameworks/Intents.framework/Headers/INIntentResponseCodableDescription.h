/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INRootCodableDescription.h>

@class INCodableAttribute, NSArray, NSMutableDictionary, NSString;

@interface INIntentResponseCodableDescription : INRootCodableDescription

{
    NSMutableDictionary *_intentResponseCodableCodes;
    NSString *_outputAttributeName;
    NSString *_attributeKeyPrefix;
    NSString *_attributesKeyPrefix;
    NSArray *_responseCodes;
}

@property (retain, nonatomic, setter=_setOutputAttributeName:) NSString *_outputAttributeName;
@property (copy, nonatomic) NSArray *responseCodes;
@property (nonatomic, readonly) INCodableAttribute *outputAttribute;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)attributes;
- (id)keyPrefix;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (id)_attributeKeyPrefix;
- (id)_attributesKeyPrefix;
- (id)_ignoredAttributeTags;
- (id)intentResponseCodeWithCode:(long long)arg1;

@end

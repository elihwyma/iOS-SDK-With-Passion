/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INCodableAttributeMetadata.h>

@class INCodableEnumValue;

@interface INCodableEnumAttributeMetadata : INCodableAttributeMetadata

{
    INCodableEnumValue *_defaultValue;
}

@property (retain, nonatomic) INCodableEnumValue *defaultValue;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;

@end

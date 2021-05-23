/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INCodableDescription.h>

@class NSString;

@interface INTypeCodableDescription : INCodableDescription

{
    NSString *_attributeKeyPrefix;
    NSString *_attributesKeyPrefix;
    NSString *_displayName;
    NSString *_displayNameLocID;
}

@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *displayNameLocID;
@property (copy, nonatomic, readonly) NSString *localizedDisplayName;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyPrefix;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (id)_attributeKeyPrefix;
- (id)_attributesKeyPrefix;
- (id)localizedDisplayNameForLanguage:(id)arg1;

@end

/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INCodableAttributeMetadata.h>

@class NSURL;

@interface INCodableURLAttributeMetadata : INCodableAttributeMetadata

{
    NSURL *_defaultValue;
}

@property (copy, nonatomic) NSURL *defaultValue;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;

@end

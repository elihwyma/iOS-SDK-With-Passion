/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INCodableAttributeDialog.h>

@class NSString;

@interface INCodableAttributeUnsupportedReason : INCodableAttributeDialog

{
    NSString *_code;
}

@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic, readonly) NSString *predicateFormat;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)cacheGroup;
- (id)keyPrefix;
- (id)dictionaryKeyForKeyPath:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;

@end

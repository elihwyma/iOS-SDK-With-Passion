/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INCodableAttribute.h>

#import <Intents/Swift-Protocol.h>

@interface INCodableScalarAttribute : INCodableAttribute <Swift>

{
    long long _type;
}

@property (nonatomic) long long type;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)valueType;
- (Class)objectClass;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (Class)resolutionResultClass;
- (Class)_relationshipValueTransformerClass;
- (id)initWithPropertyName:(id)arg1 type:(long long)arg2;

@end

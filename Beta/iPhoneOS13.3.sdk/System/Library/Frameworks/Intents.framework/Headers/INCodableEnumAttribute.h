/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INCodableAttribute.h>

#import <Intents/Swift-Protocol.h>

@class INCodableEnum, NSDictionary, NSString;

@interface INCodableEnumAttribute : INCodableAttribute <Swift>

{
    NSDictionary *_valuesByIndex;
    INCodableEnum *_codableEnum;
    NSString *_enumNamespace;
}

@property (retain, nonatomic) INCodableEnum *codableEnum;
@property (copy, nonatomic) NSString *enumNamespace;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)valueType;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (Class)resolutionResultClass;
- (Class)_relationshipValueTransformerClass;
- (id)valueForIndex:(unsigned long long)arg1;
- (id)valueWithName:(id)arg1;

@end

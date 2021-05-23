/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INCodableAttribute.h>

#import <Intents/Swift-Protocol.h>

@class NSString, NSValueTransformer;

@interface INCodableObjectAttribute : INCodableAttribute <Swift>

{
    NSString *_originalTypeName;
    NSString *_typeName;
}

@property (copy, nonatomic, setter=_setOriginalTypeName:) NSString *_originalTypeName;
@property (copy, nonatomic) NSString *typeName;
@property (nonatomic, readonly) NSValueTransformer *valueTransformer;
@property (copy, nonatomic, readonly) NSString *className;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)valueType;
- (Class)objectClass;
- (void)setClassName:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (Class)resolutionResultClass;
- (Class)_relationshipValueTransformerClass;

@end

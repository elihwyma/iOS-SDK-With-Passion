/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INCodableObjectAttribute.h>

@class INCodableDescription, NSString;

@interface INCodableCustomObjectAttribute : INCodableObjectAttribute

{
    NSString *_objectTypeName;
    NSString *_objectTypeNamespace;
    INCodableDescription *_codableDescription;
}

@property (copy, nonatomic) NSString *objectTypeName;
@property (copy, nonatomic) NSString *objectTypeNamespace;
@property (weak, nonatomic) INCodableDescription *codableDescription;

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
- (id)valueTransformer;
- (Class)_unsafeObjectClass;

@end

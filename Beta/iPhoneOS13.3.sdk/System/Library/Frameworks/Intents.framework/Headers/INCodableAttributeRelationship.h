/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INCodableAttribute, NSArray, NSDictionary, NSString;

@interface INCodableAttributeRelationship : NSObject <Swift>

{
    NSDictionary *_originalDictionary;
    INCodableAttribute *_parentCodableAttribute;
    unsigned long long _relation;
    NSArray *_values;
    INCodableAttribute *_codableAttribute;
}

@property (retain, nonatomic, setter=_setOriginalDictionary:) NSDictionary *_originalDictionary;
@property (weak, nonatomic, readonly) INCodableAttribute *codableAttribute;
@property (weak, nonatomic) INCodableAttribute *parentCodableAttribute;
@property (nonatomic) unsigned long long relation;
@property (retain, nonatomic) NSArray *values;
@property (nonatomic, readonly) Class valueClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *cacheGroup;
@property (copy, nonatomic, readonly) NSString *keyPrefix;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (_Bool)compareValue:(id)arg1;
- (id)dictionaryKeyForKeyPath:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)initWithCodableAttribute:(id)arg1;
- (void)_establishRelationship;

@end

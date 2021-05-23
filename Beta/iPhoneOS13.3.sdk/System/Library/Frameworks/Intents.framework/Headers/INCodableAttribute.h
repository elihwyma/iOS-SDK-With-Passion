/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INCodableAttributeMetadata, INCodableAttributeRelationship, INCodableDescription, NSArray, NSMutableDictionary, NSNumber, NSString;

@interface INCodableAttribute : NSObject <Swift>

{
    NSMutableDictionary *_promptDialogsByType;
    _Bool _defaultAttribute;
    _Bool _supportsResolution;
    _Bool _supportsDynamicEnumeration;
    INCodableDescription *_internalCodableDescription;
    NSString *_typeString;
    long long _modifier;
    NSString *_propertyName;
    NSString *_displayName;
    NSString *_displayNameID;
    INCodableAttributeMetadata *_metadata;
    INCodableAttributeRelationship *_relationship;
    NSArray *_promptDialogs;
    NSArray *_unsupportedReasons;
    NSNumber *_displayPriorityRank;
    Class __relationshipValueTransformerClass;
}

@property (copy, nonatomic) NSNumber *displayPriorityRank;
@property (copy, nonatomic, setter=_setPromptDialogs:) NSArray *promptDialogs;
@property (copy, nonatomic, setter=_setUnsupportedReasons:) NSArray *unsupportedReasons;
@property (copy, nonatomic, setter=_setTypeString:) NSString *_typeString;
@property (weak, nonatomic, setter=_setCodableDescription:) INCodableDescription *_codableDescription;
@property (nonatomic, readonly) Class _unsafeObjectClass;
@property (nonatomic, readonly) Class _relationshipValueTransformerClass;
@property (nonatomic) long long modifier;
@property (copy, nonatomic) NSString *propertyName;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *displayNameID;
@property (nonatomic, getter=isDefaultAttribute) _Bool defaultAttribute;
@property (nonatomic) _Bool supportsResolution;
@property (nonatomic) _Bool supportsDynamicEnumeration;
@property (retain, nonatomic) INCodableAttributeMetadata *metadata;
@property (retain, nonatomic) INCodableAttributeRelationship *relationship;
@property (nonatomic, readonly) SEL getter;
@property (nonatomic, readonly) SEL setter;
@property (nonatomic, readonly) long long valueType;
@property (nonatomic, readonly) Class objectClass;
@property (nonatomic, readonly) Class resolutionResultClass;
@property (copy, nonatomic, readonly) NSString *localizedDisplayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *cacheGroup;
@property (copy, nonatomic, readonly) NSString *keyPrefix;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryKeyForKeyPath:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)localizedDisplayNameForLanguage:(id)arg1;
- (id)unsupportedReasonWithIndex:(unsigned long long)arg1;
- (id)promptDialogWithType:(unsigned long long)arg1;

@end

/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBSetMessageAttributeIntent : PBCodable <Swift>

{
    struct {
        unsigned int attribute:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _attribute;
    NSArray *_identifiers;
    _INPBIntentMetadata *_intentMetadata;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int attribute;
@property (nonatomic) _Bool hasAttribute;
@property (copy, nonatomic) NSArray *identifiers;
@property (nonatomic, readonly) unsigned long long identifiersCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearIdentifiers;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (void)addIdentifier:(id)arg1;
- (id)attributeAsString:(int)arg1;
- (int)StringAsAttribute:(id)arg1;

@end

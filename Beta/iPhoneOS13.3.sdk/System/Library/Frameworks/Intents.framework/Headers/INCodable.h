/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class INCodableDescription, NSMutableDictionary;

@interface INCodable : PBCodable <Swift>

{
    _Bool __encodeLegacyGloryData;
    INCodableDescription *_objectDescription;
    NSMutableDictionary *_customValueForKeyDictionary;
}

@property (retain, nonatomic) NSMutableDictionary *customValueForKeyDictionary;
@property (retain, nonatomic, setter=_setObjectDescription:) INCodableDescription *_objectDescription;
@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)data;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)_valueForAttribute:(id)arg1;
- (id)initWithCodableDescription:(id)arg1 data:(id)arg2;
- (id)_initWithCodableDescription:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (void)setNilValueForAllKeys;
- (_Bool)isValidKey:(id)arg1;
- (id)_dictionaryRepresentationWithNullValues:(_Bool)arg1;
- (_Bool)_isAttribute:(id)arg1 equalTo:(id)arg2;
- (_Bool)_isStringAttribute:(id)arg1 equalTo:(id)arg2;
- (id)_nonNilAttributes;
- (id)_nonNilRepeatedAttributes;
- (_Bool)_readFrom:(id)arg1 error:(id *)arg2;
- (_Bool)_writeTo:(id)arg1 error:(id *)arg2;
- (id)_dataWithError:(id *)arg1;
- (void)_setEmptyArrayForNonNilRepeatedAttributes:(id)arg1;
- (id)_copyWithZone:(struct _NSZone *)arg1 error:(id *)arg2;
- (void)_setObject:(id)arg1 forAttribute:(id)arg2;
- (void)_setValue:(void *)arg1 forAttribute:(id)arg2;
- (void)_setDoubleValue:(double)arg1 forAttribute:(id)arg2;
- (void)_setFloatValue:(float)arg1 forAttribute:(id)arg2;
- (void)_setInt32Value:(int)arg1 forAttribute:(id)arg2;
- (void)_setInt64Value:(long long)arg1 forAttribute:(id)arg2;
- (void)_setUInt32Value:(unsigned int)arg1 forAttribute:(id)arg2;
- (void)_setUInt64Value:(unsigned long long)arg1 forAttribute:(id)arg2;
- (void)_setBoolValue:(_Bool)arg1 forAttribute:(id)arg2;
- (double)_doubleValueForAttribute:(id)arg1;
- (float)_floatValueForAttribute:(id)arg1;
- (int)_int32ValueForAttribute:(id)arg1;
- (long long)_int64ValueForAttribute:(id)arg1;
- (unsigned int)_UInt32ValueForAttribute:(id)arg1;
- (unsigned long long)_UInt64ValueForAttribute:(id)arg1;
- (_Bool)_boolValueForAttribute:(id)arg1;
- (id)_valueForAttribute:(id)arg1 ofClass:(Class)arg2;

@end

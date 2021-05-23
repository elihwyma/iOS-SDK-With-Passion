/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBHomeAttributeRange;

@interface _INPBHomeAttributeValue : PBCodable <Swift>

{
    struct {
        unsigned int booleanValue:1;
        unsigned int doubleValue:1;
        unsigned int integerValue:1;
        unsigned int limitValue:1;
        unsigned int unit:1;
        unsigned int valueType:1;
    } _has;
    _Bool _booleanValue;
    _Bool __encodeLegacyGloryData;
    int _limitValue;
    int _unit;
    int _valueType;
    double _doubleValue;
    long long _integerValue;
    _INPBHomeAttributeRange *_rangeValue;
    NSString *_stringValue;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool booleanValue;
@property (nonatomic) _Bool hasBooleanValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) _Bool hasDoubleValue;
@property (nonatomic) long long integerValue;
@property (nonatomic) _Bool hasIntegerValue;
@property (nonatomic) int limitValue;
@property (nonatomic) _Bool hasLimitValue;
@property (retain, nonatomic) _INPBHomeAttributeRange *rangeValue;
@property (nonatomic, readonly) _Bool hasRangeValue;
@property (copy, nonatomic) NSString *stringValue;
@property (nonatomic, readonly) _Bool hasStringValue;
@property (nonatomic) int unit;
@property (nonatomic) _Bool hasUnit;
@property (nonatomic) int valueType;
@property (nonatomic) _Bool hasValueType;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)limitValueAsString:(int)arg1;
- (int)StringAsLimitValue:(id)arg1;
- (id)unitAsString:(int)arg1;
- (int)StringAsUnit:(id)arg1;
- (id)valueTypeAsString:(int)arg1;
- (int)StringAsValueType:(id)arg1;

@end

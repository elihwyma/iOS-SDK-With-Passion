/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBDateTimeRange, _INPBString;

@interface _INPBWellnessObjectResultValue : PBCodable <Swift>

{
    struct {
        unsigned int resultType:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _resultType;
    _INPBDateTimeRange *_recordDate;
    _INPBString *_unit;
    NSArray *_values;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBDateTimeRange *recordDate;
@property (nonatomic, readonly) _Bool hasRecordDate;
@property (nonatomic) int resultType;
@property (nonatomic) _Bool hasResultType;
@property (retain, nonatomic) _INPBString *unit;
@property (nonatomic, readonly) _Bool hasUnit;
@property (copy, nonatomic) NSArray *values;
@property (nonatomic, readonly) unsigned long long valuesCount;

+ (_Bool)supportsSecureCoding;
+ (Class)valuesType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearValues;
- (id)resultTypeAsString:(int)arg1;
- (int)StringAsResultType:(id)arg1;
- (id)valuesAtIndex:(unsigned long long)arg1;
- (void)addValues:(id)arg1;

@end

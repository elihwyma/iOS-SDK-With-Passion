/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBDateTimeRange, _INPBIntentMetadata, _INPBWellnessUnitType;

@interface _INPBSaveHealthSampleIntent : PBCodable <Swift>

{
    struct {
        unsigned int objectType:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _objectType;
    _INPBIntentMetadata *_intentMetadata;
    _INPBDateTimeRange *_recordDate;
    NSArray *_sampleMetadatas;
    _INPBWellnessUnitType *_unit;
    NSArray *_values;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (nonatomic) int objectType;
@property (nonatomic) _Bool hasObjectType;
@property (retain, nonatomic) _INPBDateTimeRange *recordDate;
@property (nonatomic, readonly) _Bool hasRecordDate;
@property (copy, nonatomic) NSArray *sampleMetadatas;
@property (nonatomic, readonly) unsigned long long sampleMetadatasCount;
@property (retain, nonatomic) _INPBWellnessUnitType *unit;
@property (nonatomic, readonly) _Bool hasUnit;
@property (copy, nonatomic) NSArray *values;
@property (nonatomic, readonly) unsigned long long valuesCount;

+ (_Bool)supportsSecureCoding;
+ (Class)valuesType;
+ (Class)sampleMetadataType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearValues;
- (id)valuesAtIndex:(unsigned long long)arg1;
- (void)addValues:(id)arg1;
- (id)objectTypeAsString:(int)arg1;
- (int)StringAsObjectType:(id)arg1;
- (void)clearSampleMetadatas;
- (void)addSampleMetadata:(id)arg1;
- (id)sampleMetadataAtIndex:(unsigned long long)arg1;

@end

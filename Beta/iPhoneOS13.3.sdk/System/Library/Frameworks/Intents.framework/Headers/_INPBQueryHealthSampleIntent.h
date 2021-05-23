/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata, _INPBWellnessUnitType;

@interface _INPBQueryHealthSampleIntent : PBCodable <Swift>

{
    struct {
        unsigned int expectedResultType:1;
        unsigned int objectType:1;
        unsigned int questionType:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _expectedResultType;
    int _objectType;
    int _questionType;
    _INPBIntentMetadata *_intentMetadata;
    NSArray *_recordDates;
    NSArray *_thresholdValues;
    _INPBWellnessUnitType *_unit;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int expectedResultType;
@property (nonatomic) _Bool hasExpectedResultType;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (nonatomic) int objectType;
@property (nonatomic) _Bool hasObjectType;
@property (nonatomic) int questionType;
@property (nonatomic) _Bool hasQuestionType;
@property (copy, nonatomic) NSArray *recordDates;
@property (nonatomic, readonly) unsigned long long recordDatesCount;
@property (copy, nonatomic) NSArray *thresholdValues;
@property (nonatomic, readonly) unsigned long long thresholdValuesCount;
@property (retain, nonatomic) _INPBWellnessUnitType *unit;
@property (nonatomic, readonly) _Bool hasUnit;

+ (_Bool)supportsSecureCoding;
+ (Class)recordDateType;
+ (Class)thresholdValuesType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)expectedResultTypeAsString:(int)arg1;
- (int)StringAsExpectedResultType:(id)arg1;
- (id)objectTypeAsString:(int)arg1;
- (int)StringAsObjectType:(id)arg1;
- (id)questionTypeAsString:(int)arg1;
- (int)StringAsQuestionType:(id)arg1;
- (void)clearRecordDates;
- (void)addRecordDate:(id)arg1;
- (id)recordDateAtIndex:(unsigned long long)arg1;
- (void)clearThresholdValues;
- (void)addThresholdValues:(id)arg1;
- (id)thresholdValuesAtIndex:(unsigned long long)arg1;

@end

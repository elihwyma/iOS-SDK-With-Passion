/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDataString, _INPBDouble, _INPBIntentMetadata;

@interface _INPBStartWorkoutIntent : PBCodable <Swift>

{
    struct {
        unsigned int isOpenEnded:1;
        unsigned int workoutGoalUnitType:1;
        unsigned int workoutLocationType:1;
    } _has;
    _Bool _isOpenEnded;
    _Bool __encodeLegacyGloryData;
    int _workoutGoalUnitType;
    int _workoutLocationType;
    _INPBDouble *_goalValue;
    _INPBIntentMetadata *_intentMetadata;
    _INPBDataString *_workoutName;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBDouble *goalValue;
@property (nonatomic, readonly) _Bool hasGoalValue;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (nonatomic) _Bool isOpenEnded;
@property (nonatomic) _Bool hasIsOpenEnded;
@property (nonatomic) int workoutGoalUnitType;
@property (nonatomic) _Bool hasWorkoutGoalUnitType;
@property (nonatomic) int workoutLocationType;
@property (nonatomic) _Bool hasWorkoutLocationType;
@property (retain, nonatomic) _INPBDataString *workoutName;
@property (nonatomic, readonly) _Bool hasWorkoutName;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)workoutGoalUnitTypeAsString:(int)arg1;
- (int)StringAsWorkoutGoalUnitType:(id)arg1;
- (id)workoutLocationTypeAsString:(int)arg1;
- (int)StringAsWorkoutLocationType:(id)arg1;

@end

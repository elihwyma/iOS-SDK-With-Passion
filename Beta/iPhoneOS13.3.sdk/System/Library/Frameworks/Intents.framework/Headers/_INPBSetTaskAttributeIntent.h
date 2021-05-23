/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBContactEventTrigger, _INPBDataString, _INPBIntentMetadata, _INPBSpatialEventTrigger, _INPBTask, _INPBTemporalEventTrigger;

@interface _INPBSetTaskAttributeIntent : PBCodable <Swift>

{
    struct {
        unsigned int priority:1;
        unsigned int status:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _priority;
    int _status;
    _INPBContactEventTrigger *_contactEventTrigger;
    _INPBIntentMetadata *_intentMetadata;
    _INPBSpatialEventTrigger *_spatialEventTrigger;
    _INPBTask *_targetTask;
    _INPBDataString *_taskTitle;
    _INPBTemporalEventTrigger *_temporalEventTrigger;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBContactEventTrigger *contactEventTrigger;
@property (nonatomic, readonly) _Bool hasContactEventTrigger;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (nonatomic) int priority;
@property (nonatomic) _Bool hasPriority;
@property (retain, nonatomic) _INPBSpatialEventTrigger *spatialEventTrigger;
@property (nonatomic, readonly) _Bool hasSpatialEventTrigger;
@property (nonatomic) int status;
@property (nonatomic) _Bool hasStatus;
@property (retain, nonatomic) _INPBTask *targetTask;
@property (nonatomic, readonly) _Bool hasTargetTask;
@property (retain, nonatomic) _INPBDataString *taskTitle;
@property (nonatomic, readonly) _Bool hasTaskTitle;
@property (retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger;
@property (nonatomic, readonly) _Bool hasTemporalEventTrigger;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)statusAsString:(int)arg1;
- (int)StringAsStatus:(id)arg1;
- (id)priorityAsString:(int)arg1;
- (int)StringAsPriority:(id)arg1;

@end

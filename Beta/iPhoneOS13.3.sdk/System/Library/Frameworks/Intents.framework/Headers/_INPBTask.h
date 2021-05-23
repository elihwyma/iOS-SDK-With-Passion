/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBContactEventTrigger, _INPBDataString, _INPBDateTime, _INPBSpatialEventTrigger, _INPBTemporalEventTrigger;

@interface _INPBTask : PBCodable <Swift>

{
    struct {
        unsigned int priority:1;
        unsigned int status:1;
        unsigned int taskReference:1;
        unsigned int taskType:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _priority;
    int _status;
    int _taskReference;
    int _taskType;
    _INPBContactEventTrigger *_contactEventTrigger;
    _INPBDateTime *_createdDateTime;
    NSString *_identifier;
    _INPBDateTime *_modifiedDateTime;
    NSString *_parentIdentifier;
    _INPBSpatialEventTrigger *_spatialEventTrigger;
    _INPBTemporalEventTrigger *_temporalEventTrigger;
    _INPBDataString *_title;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBContactEventTrigger *contactEventTrigger;
@property (nonatomic, readonly) _Bool hasContactEventTrigger;
@property (retain, nonatomic) _INPBDateTime *createdDateTime;
@property (nonatomic, readonly) _Bool hasCreatedDateTime;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) _INPBDateTime *modifiedDateTime;
@property (nonatomic, readonly) _Bool hasModifiedDateTime;
@property (copy, nonatomic) NSString *parentIdentifier;
@property (nonatomic, readonly) _Bool hasParentIdentifier;
@property (nonatomic) int priority;
@property (nonatomic) _Bool hasPriority;
@property (retain, nonatomic) _INPBSpatialEventTrigger *spatialEventTrigger;
@property (nonatomic, readonly) _Bool hasSpatialEventTrigger;
@property (nonatomic) int status;
@property (nonatomic) _Bool hasStatus;
@property (nonatomic) int taskReference;
@property (nonatomic) _Bool hasTaskReference;
@property (nonatomic) int taskType;
@property (nonatomic) _Bool hasTaskType;
@property (retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger;
@property (nonatomic, readonly) _Bool hasTemporalEventTrigger;
@property (retain, nonatomic) _INPBDataString *title;
@property (nonatomic, readonly) _Bool hasTitle;

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
- (id)taskReferenceAsString:(int)arg1;
- (int)StringAsTaskReference:(id)arg1;
- (id)taskTypeAsString:(int)arg1;
- (int)StringAsTaskType:(id)arg1;

@end

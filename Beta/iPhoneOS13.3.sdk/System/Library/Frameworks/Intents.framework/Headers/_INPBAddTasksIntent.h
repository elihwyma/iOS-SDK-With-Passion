/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBContactEventTrigger, _INPBIntent, _INPBIntentMetadata, _INPBSpatialEventTrigger, _INPBTaskList, _INPBTemporalEventTrigger;

@interface _INPBAddTasksIntent : PBCodable <Swift>

{
    struct {
        unsigned int priority:1;
        unsigned int taskReference:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _priority;
    int _taskReference;
    _INPBContactEventTrigger *_contactEventTrigger;
    _INPBIntent *_intent;
    _INPBIntentMetadata *_intentMetadata;
    _INPBSpatialEventTrigger *_spatialEventTrigger;
    _INPBTaskList *_targetTaskList;
    NSArray *_targetTaskListMembers;
    NSArray *_taskTitles;
    _INPBTemporalEventTrigger *_temporalEventTrigger;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBContactEventTrigger *contactEventTrigger;
@property (nonatomic, readonly) _Bool hasContactEventTrigger;
@property (retain, nonatomic) _INPBIntent *intent;
@property (nonatomic, readonly) _Bool hasIntent;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (nonatomic) int priority;
@property (nonatomic) _Bool hasPriority;
@property (retain, nonatomic) _INPBSpatialEventTrigger *spatialEventTrigger;
@property (nonatomic, readonly) _Bool hasSpatialEventTrigger;
@property (retain, nonatomic) _INPBTaskList *targetTaskList;
@property (nonatomic, readonly) _Bool hasTargetTaskList;
@property (copy, nonatomic) NSArray *targetTaskListMembers;
@property (nonatomic, readonly) unsigned long long targetTaskListMembersCount;
@property (nonatomic) int taskReference;
@property (nonatomic) _Bool hasTaskReference;
@property (copy, nonatomic) NSArray *taskTitles;
@property (nonatomic, readonly) unsigned long long taskTitlesCount;
@property (retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger;
@property (nonatomic, readonly) _Bool hasTemporalEventTrigger;

+ (_Bool)supportsSecureCoding;
+ (Class)targetTaskListMembersType;
+ (Class)taskTitlesType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)priorityAsString:(int)arg1;
- (int)StringAsPriority:(id)arg1;
- (void)clearTargetTaskListMembers;
- (void)addTargetTaskListMembers:(id)arg1;
- (id)targetTaskListMembersAtIndex:(unsigned long long)arg1;
- (id)taskReferenceAsString:(int)arg1;
- (int)StringAsTaskReference:(id)arg1;
- (void)clearTaskTitles;
- (void)addTaskTitles:(id)arg1;
- (id)taskTitlesAtIndex:(unsigned long long)arg1;

@end

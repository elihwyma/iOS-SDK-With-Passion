/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBContactEventTrigger, _INPBIntent, _INPBIntentMetadata, _INPBSpatialEventTrigger, _INPBTaskList, _INPBTemporalEventTrigger;

@protocol _INPBAddTasksIntent <Swift>

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

+ (unsigned short)targetTaskListMembersType;
+ (unsigned short)taskTitlesType;

- (unsigned short)priorityAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsPriority: /* Error: Ran out of types for this method. */;
- (unsigned short)clearTargetTaskListMembers;
- (unsigned short)addTargetTaskListMembers: /* Error: Ran out of types for this method. */;
- (unsigned short)targetTaskListMembersAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)taskReferenceAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsTaskReference: /* Error: Ran out of types for this method. */;
- (unsigned short)clearTaskTitles;
- (unsigned short)addTaskTitles: /* Error: Ran out of types for this method. */;
- (unsigned short)taskTitlesAtIndex: /* Error: Ran out of types for this method. */;

@end

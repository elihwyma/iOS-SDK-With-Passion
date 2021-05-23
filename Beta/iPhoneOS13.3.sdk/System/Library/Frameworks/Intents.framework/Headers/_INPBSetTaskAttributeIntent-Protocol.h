/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBContactEventTrigger, _INPBDataString, _INPBIntentMetadata, _INPBSpatialEventTrigger, _INPBTask, _INPBTemporalEventTrigger;

@protocol _INPBSetTaskAttributeIntent <Swift>

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

- (unsigned short)statusAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsStatus: /* Error: Ran out of types for this method. */;
- (unsigned short)priorityAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsPriority: /* Error: Ran out of types for this method. */;

@end

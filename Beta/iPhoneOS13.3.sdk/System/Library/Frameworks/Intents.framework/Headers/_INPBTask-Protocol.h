/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBContactEventTrigger, _INPBDataString, _INPBDateTime, _INPBSpatialEventTrigger, _INPBTemporalEventTrigger;

@protocol _INPBTask <Swift>

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

- (unsigned short)statusAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsStatus: /* Error: Ran out of types for this method. */;
- (unsigned short)priorityAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsPriority: /* Error: Ran out of types for this method. */;
- (unsigned short)taskReferenceAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsTaskReference: /* Error: Ran out of types for this method. */;
- (unsigned short)taskTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsTaskType: /* Error: Ran out of types for this method. */;

@end

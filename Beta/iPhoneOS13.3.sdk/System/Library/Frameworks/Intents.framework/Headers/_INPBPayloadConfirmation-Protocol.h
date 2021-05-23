/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBSelectionItem;

@protocol _INPBPayloadConfirmation <Swift>

@property (retain, nonatomic) _INPBSelectionItem *confirmationItem;
@property (nonatomic, readonly) _Bool hasConfirmationItem;
@property (nonatomic) int startCallIntentContactsConfirmationReason;
@property (nonatomic) _Bool hasStartCallIntentContactsConfirmationReason;
@property (nonatomic) int reason;
@property (nonatomic) _Bool hasReason;
@property (nonatomic) int addTasksIntentTargetTaskListConfirmationReason;
@property (nonatomic) _Bool hasAddTasksIntentTargetTaskListConfirmationReason;

- (unsigned short)startCallIntentContactsConfirmationReasonAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsStartCallIntentContactsConfirmationReason: /* Error: Ran out of types for this method. */;
- (unsigned short)reasonAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsReason: /* Error: Ran out of types for this method. */;
- (unsigned short)addTasksIntentTargetTaskListConfirmationReasonAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsAddTasksIntentTargetTaskListConfirmationReason: /* Error: Ran out of types for this method. */;

@end

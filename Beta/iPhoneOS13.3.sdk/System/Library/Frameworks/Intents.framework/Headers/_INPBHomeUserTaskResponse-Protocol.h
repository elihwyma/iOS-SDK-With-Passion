/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBHomeUserTask;

@protocol _INPBHomeUserTaskResponse <Swift>

@property (nonatomic) int taskOutcome;
@property (nonatomic) _Bool hasTaskOutcome;
@property (retain, nonatomic) _INPBHomeUserTask *userTask;
@property (nonatomic, readonly) _Bool hasUserTask;

- (unsigned short)taskOutcomeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsTaskOutcome: /* Error: Ran out of types for this method. */;

@end

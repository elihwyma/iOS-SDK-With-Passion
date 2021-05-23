/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBTaskList;

@protocol _INPBAddTasksIntentResponse <Swift>

@property (copy, nonatomic) NSArray *addedTasks;
@property (nonatomic, readonly) unsigned long long addedTasksCount;
@property (retain, nonatomic) _INPBTaskList *modifiedTaskList;
@property (nonatomic, readonly) _Bool hasModifiedTaskList;
@property (nonatomic, readonly) int *warnings;
@property (nonatomic, readonly) unsigned long long warningsCount;

+ (unsigned short)addedTasksType;

- (unsigned short)clearWarnings;
- (unsigned short)addWarnings: /* Error: Ran out of types for this method. */;
- (unsigned short)warningsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setWarnings:count: /* Error: Ran out of types for this method. */;
- (unsigned short)warningsAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsWarnings: /* Error: Ran out of types for this method. */;
- (unsigned short)clearAddedTasks;
- (unsigned short)addAddedTasks: /* Error: Ran out of types for this method. */;
- (unsigned short)addedTasksAtIndex: /* Error: Ran out of types for this method. */;

@end

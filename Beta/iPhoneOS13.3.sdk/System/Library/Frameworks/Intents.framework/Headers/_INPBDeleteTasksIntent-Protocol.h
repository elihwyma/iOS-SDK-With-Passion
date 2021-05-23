/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBIntentMetadata, _INPBTaskList;

@protocol _INPBDeleteTasksIntent <Swift>

@property (nonatomic) _Bool all;
@property (nonatomic) _Bool hasAll;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBTaskList *taskList;
@property (nonatomic, readonly) _Bool hasTaskList;
@property (copy, nonatomic) NSArray *tasks;
@property (nonatomic, readonly) unsigned long long tasksCount;

+ (unsigned short)tasksType;

- (unsigned short)clearTasks;
- (unsigned short)addTasks: /* Error: Ran out of types for this method. */;
- (unsigned short)tasksAtIndex: /* Error: Ran out of types for this method. */;

@end

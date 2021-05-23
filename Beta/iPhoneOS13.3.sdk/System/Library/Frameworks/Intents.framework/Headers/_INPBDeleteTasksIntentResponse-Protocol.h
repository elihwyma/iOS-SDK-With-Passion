/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol _INPBDeleteTasksIntentResponse <Swift>

@property (copy, nonatomic) NSArray *deletedTasks;
@property (nonatomic, readonly) unsigned long long deletedTasksCount;

+ (unsigned short)deletedTasksType;

- (unsigned short)clearDeletedTasks;
- (unsigned short)addDeletedTasks: /* Error: Ran out of types for this method. */;
- (unsigned short)deletedTasksAtIndex: /* Error: Ran out of types for this method. */;

@end

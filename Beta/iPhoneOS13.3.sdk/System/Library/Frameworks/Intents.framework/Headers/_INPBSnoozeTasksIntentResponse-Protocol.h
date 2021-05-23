/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol _INPBSnoozeTasksIntentResponse <Swift>

@property (copy, nonatomic) NSArray *snoozedTasks;
@property (nonatomic, readonly) unsigned long long snoozedTasksCount;

+ (unsigned short)snoozedTasksType;

- (unsigned short)clearSnoozedTasks;
- (unsigned short)addSnoozedTasks: /* Error: Ran out of types for this method. */;
- (unsigned short)snoozedTasksAtIndex: /* Error: Ran out of types for this method. */;

@end

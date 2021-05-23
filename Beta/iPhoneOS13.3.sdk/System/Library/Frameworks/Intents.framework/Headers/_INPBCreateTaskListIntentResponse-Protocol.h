/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBTaskList;

@protocol _INPBCreateTaskListIntentResponse <Swift>

@property (retain, nonatomic) _INPBTaskList *createdTaskList;
@property (nonatomic, readonly) _Bool hasCreatedTaskList;

@end

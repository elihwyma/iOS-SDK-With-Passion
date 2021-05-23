/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INTaskList, NSArray;

@protocol INAddTasksIntentResponseExport <Swift>

@property (nonatomic, readonly) long long code;
@property (copy, nonatomic) INTaskList *modifiedTaskList;
@property (copy, nonatomic) NSArray *addedTasks;
@property (nonatomic) unsigned long long warnings;

@end

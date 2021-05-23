/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INTaskList, NSArray, NSNumber;

@protocol INDeleteTasksIntentExport <Swift>

@property (copy, nonatomic) INTaskList *taskList;
@property (copy, nonatomic) NSArray *tasks;
@property (copy, nonatomic) NSNumber *all;

- (unsigned short)init;

@end

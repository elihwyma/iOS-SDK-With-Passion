/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INContactEventTrigger, INIntent, INSpatialEventTrigger, INTaskList, INTemporalEventTrigger, NSArray;

@protocol INAddTasksIntentExport <Swift>

@property (nonatomic) long long taskReference;
@property (copy, nonatomic) NSArray *targetTaskListMembers;
@property (copy, nonatomic) INTaskList *targetTaskList;
@property (copy, nonatomic) NSArray *taskTitles;
@property (copy, nonatomic) INSpatialEventTrigger *spatialEventTrigger;
@property (copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger;
@property (nonatomic) long long priority;
@property (copy, nonatomic) INContactEventTrigger *contactEventTrigger;
@property (copy, nonatomic) INIntent *intent;

- (unsigned short)init;

@end

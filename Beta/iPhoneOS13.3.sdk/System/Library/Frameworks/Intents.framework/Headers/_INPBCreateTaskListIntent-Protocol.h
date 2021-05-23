/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBDataString, _INPBIntentMetadata;

@protocol _INPBCreateTaskListIntent <Swift>

@property (retain, nonatomic) _INPBDataString *groupName;
@property (nonatomic, readonly) _Bool hasGroupName;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (copy, nonatomic) NSArray *taskTitles;
@property (nonatomic, readonly) unsigned long long taskTitlesCount;
@property (retain, nonatomic) _INPBDataString *title;
@property (nonatomic, readonly) _Bool hasTitle;

+ (unsigned short)taskTitlesType;

- (unsigned short)clearTaskTitles;
- (unsigned short)addTaskTitles: /* Error: Ran out of types for this method. */;
- (unsigned short)taskTitlesAtIndex: /* Error: Ran out of types for this method. */;

@end

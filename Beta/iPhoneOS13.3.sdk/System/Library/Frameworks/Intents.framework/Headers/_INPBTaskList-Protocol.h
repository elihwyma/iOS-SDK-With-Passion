/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBDataString, _INPBDateTime;

@protocol _INPBTaskList <Swift>

@property (retain, nonatomic) _INPBDateTime *createdDateTime;
@property (nonatomic, readonly) _Bool hasCreatedDateTime;
@property (retain, nonatomic) _INPBDataString *groupName;
@property (nonatomic, readonly) _Bool hasGroupName;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) _INPBDateTime *modifiedDateTime;
@property (nonatomic, readonly) _Bool hasModifiedDateTime;
@property (copy, nonatomic) NSArray *tasks;
@property (nonatomic, readonly) unsigned long long tasksCount;
@property (retain, nonatomic) _INPBDataString *title;
@property (nonatomic, readonly) _Bool hasTitle;

+ (unsigned short)tasksType;

- (unsigned short)clearTasks;
- (unsigned short)addTasks: /* Error: Ran out of types for this method. */;
- (unsigned short)tasksAtIndex: /* Error: Ran out of types for this method. */;

@end

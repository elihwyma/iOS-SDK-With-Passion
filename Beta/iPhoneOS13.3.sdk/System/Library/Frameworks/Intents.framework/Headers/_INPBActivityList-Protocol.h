/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBCondition;

@protocol _INPBActivityList <Swift>

@property (copy, nonatomic) NSArray *activities;
@property (nonatomic, readonly) unsigned long long activitiesCount;
@property (retain, nonatomic) _INPBCondition *condition;
@property (nonatomic, readonly) _Bool hasCondition;

+ (unsigned short)activityType;

- (unsigned short)clearActivities;
- (unsigned short)addActivity: /* Error: Ran out of types for this method. */;
- (unsigned short)activityAtIndex: /* Error: Ran out of types for this method. */;

@end

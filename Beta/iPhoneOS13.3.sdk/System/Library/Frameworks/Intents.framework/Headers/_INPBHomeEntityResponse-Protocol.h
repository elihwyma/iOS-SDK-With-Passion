/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBHomeEntity;

@protocol _INPBHomeEntityResponse <Swift>

@property (retain, nonatomic) _INPBHomeEntity *entity;
@property (nonatomic, readonly) _Bool hasEntity;
@property (copy, nonatomic) NSArray *taskResponses;
@property (nonatomic, readonly) unsigned long long taskResponsesCount;

+ (unsigned short)taskResponsesType;

- (unsigned short)clearTaskResponses;
- (unsigned short)addTaskResponses: /* Error: Ran out of types for this method. */;
- (unsigned short)taskResponsesAtIndex: /* Error: Ran out of types for this method. */;

@end

/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol _INPBDeleteTimerIntentResponse <Swift>

@property (copy, nonatomic) NSArray *deletedTimers;
@property (nonatomic, readonly) unsigned long long deletedTimersCount;

+ (unsigned short)deletedTimersType;

- (unsigned short)clearDeletedTimers;
- (unsigned short)addDeletedTimers: /* Error: Ran out of types for this method. */;
- (unsigned short)deletedTimersAtIndex: /* Error: Ran out of types for this method. */;

@end

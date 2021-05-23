/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol _INPBResumeTimerIntentResponse <Swift>

@property (copy, nonatomic) NSArray *resumedTimers;
@property (nonatomic, readonly) unsigned long long resumedTimersCount;

+ (unsigned short)resumedTimersType;

- (unsigned short)clearResumedTimers;
- (unsigned short)addResumedTimers: /* Error: Ran out of types for this method. */;
- (unsigned short)resumedTimersAtIndex: /* Error: Ran out of types for this method. */;

@end

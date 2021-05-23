/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol _INPBResetTimerIntentResponse <Swift>

@property (copy, nonatomic) NSArray *resetTimers;
@property (nonatomic, readonly) unsigned long long resetTimersCount;

+ (unsigned short)resetTimersType;

- (unsigned short)clearResetTimers;
- (unsigned short)addResetTimers: /* Error: Ran out of types for this method. */;
- (unsigned short)resetTimersAtIndex: /* Error: Ran out of types for this method. */;

@end

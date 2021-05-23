/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol _INPBPauseTimerIntentResponse <Swift>

@property (copy, nonatomic) NSArray *pausedTimers;
@property (nonatomic, readonly) unsigned long long pausedTimersCount;

+ (unsigned short)pausedTimersType;

- (unsigned short)clearPausedTimers;
- (unsigned short)addPausedTimers: /* Error: Ran out of types for this method. */;
- (unsigned short)pausedTimersAtIndex: /* Error: Ran out of types for this method. */;

@end

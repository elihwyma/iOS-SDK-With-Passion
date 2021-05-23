/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol _INPBSearchForTimersIntentResponse <Swift>

@property (copy, nonatomic) NSArray *matchedTimers;
@property (nonatomic, readonly) unsigned long long matchedTimersCount;
@property (copy, nonatomic) NSArray *timers;
@property (nonatomic, readonly) unsigned long long timersCount;
@property (copy, nonatomic) NSArray *unmatchedTimers;
@property (nonatomic, readonly) unsigned long long unmatchedTimersCount;

+ (unsigned short)matchedTimersType;
+ (unsigned short)timersType;
+ (unsigned short)unmatchedTimersType;

- (unsigned short)clearTimers;
- (unsigned short)clearMatchedTimers;
- (unsigned short)addMatchedTimers: /* Error: Ran out of types for this method. */;
- (unsigned short)matchedTimersAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addTimers: /* Error: Ran out of types for this method. */;
- (unsigned short)timersAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearUnmatchedTimers;
- (unsigned short)addUnmatchedTimers: /* Error: Ran out of types for this method. */;
- (unsigned short)unmatchedTimersAtIndex: /* Error: Ran out of types for this method. */;

@end

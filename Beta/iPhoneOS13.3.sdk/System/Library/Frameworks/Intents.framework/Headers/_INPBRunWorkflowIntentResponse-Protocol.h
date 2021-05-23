/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBArchivedObject;

@protocol _INPBRunWorkflowIntentResponse <Swift>

@property (nonatomic) _Bool continueRunning;
@property (nonatomic) _Bool hasContinueRunning;
@property (nonatomic) _Bool requestsIntentExecution;
@property (nonatomic) _Bool hasRequestsIntentExecution;
@property (copy, nonatomic) NSArray *steps;
@property (nonatomic, readonly) unsigned long long stepsCount;
@property (retain, nonatomic) _INPBArchivedObject *underlyingIntent;
@property (nonatomic, readonly) _Bool hasUnderlyingIntent;
@property (retain, nonatomic) _INPBArchivedObject *underlyingIntentResponse;
@property (nonatomic, readonly) _Bool hasUnderlyingIntentResponse;
@property (copy, nonatomic) NSString *utterance;
@property (nonatomic, readonly) _Bool hasUtterance;
@property (nonatomic) _Bool waitingForResume;
@property (nonatomic) _Bool hasWaitingForResume;

+ (unsigned short)stepType;

- (unsigned short)clearSteps;
- (unsigned short)stepAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addStep: /* Error: Ran out of types for this method. */;

@end

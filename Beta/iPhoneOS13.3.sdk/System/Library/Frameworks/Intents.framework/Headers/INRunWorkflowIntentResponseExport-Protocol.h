/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INArchivedObject, NSArray, NSNumber, NSString;

@protocol INRunWorkflowIntentResponseExport <Swift>

@property (nonatomic, readonly) long long code;
@property (copy, nonatomic) INArchivedObject *underlyingIntent;
@property (copy, nonatomic) INArchivedObject *underlyingIntentResponse;
@property (copy, nonatomic) NSString *utterance;
@property (copy, nonatomic) NSNumber *waitingForResume;
@property (copy, nonatomic) NSNumber *continueRunning;
@property (copy, nonatomic) NSArray *steps;
@property (copy, nonatomic) NSNumber *requestsIntentExecution;

@end

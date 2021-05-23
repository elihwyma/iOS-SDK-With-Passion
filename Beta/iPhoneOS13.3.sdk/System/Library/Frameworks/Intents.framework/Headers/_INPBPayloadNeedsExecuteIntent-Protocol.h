/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBIntentExecutionRequest;

@protocol _INPBPayloadNeedsExecuteIntent <Swift>

@property (retain, nonatomic) _INPBIntentExecutionRequest *intentExecution;
@property (nonatomic, readonly) _Bool hasIntentExecution;

@end

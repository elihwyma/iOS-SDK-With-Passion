/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBArchivedObject, _INPBDataString, _INPBIntentMetadata;

@protocol _INPBRunWorkflowIntent <Swift>

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBArchivedObject *stepIntentResponse;
@property (nonatomic, readonly) _Bool hasStepIntentResponse;
@property (retain, nonatomic) _INPBDataString *workflow;
@property (nonatomic, readonly) _Bool hasWorkflow;

@end

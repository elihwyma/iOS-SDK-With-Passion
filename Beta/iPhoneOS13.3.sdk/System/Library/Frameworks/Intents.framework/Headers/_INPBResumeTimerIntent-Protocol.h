/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBIntentMetadata, _INPBTimer;

@protocol _INPBResumeTimerIntent <Swift>

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (nonatomic) _Bool resumeMultiple;
@property (nonatomic) _Bool hasResumeMultiple;
@property (retain, nonatomic) _INPBTimer *targetTimer;
@property (nonatomic, readonly) _Bool hasTargetTimer;

@end

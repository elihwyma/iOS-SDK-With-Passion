/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBIntentMetadata, _INPBTimer;

@protocol _INPBDeleteTimerIntent <Swift>

@property (nonatomic) _Bool deleteMultiple;
@property (nonatomic) _Bool hasDeleteMultiple;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBTimer *targetTimer;
@property (nonatomic, readonly) _Bool hasTargetTimer;

@end

/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBDataString, _INPBIntentMetadata, _INPBTimer;

@protocol _INPBSetTimerAttributeIntent <Swift>

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBTimer *targetTimer;
@property (nonatomic, readonly) _Bool hasTargetTimer;
@property (nonatomic) double toDuration;
@property (nonatomic) _Bool hasToDuration;
@property (retain, nonatomic) _INPBDataString *toLabel;
@property (nonatomic, readonly) _Bool hasToLabel;

@end

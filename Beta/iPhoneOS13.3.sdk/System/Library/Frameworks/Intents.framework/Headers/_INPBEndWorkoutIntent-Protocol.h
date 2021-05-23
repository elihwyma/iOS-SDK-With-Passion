/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBDataString, _INPBIntentMetadata;

@protocol _INPBEndWorkoutIntent <Swift>

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBDataString *workoutName;
@property (nonatomic, readonly) _Bool hasWorkoutName;

@end

/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBDataString, _INPBDouble, _INPBIntentMetadata;

@protocol _INPBStartWorkoutIntent <Swift>

@property (retain, nonatomic) _INPBDouble *goalValue;
@property (nonatomic, readonly) _Bool hasGoalValue;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (nonatomic) _Bool isOpenEnded;
@property (nonatomic) _Bool hasIsOpenEnded;
@property (nonatomic) int workoutGoalUnitType;
@property (nonatomic) _Bool hasWorkoutGoalUnitType;
@property (nonatomic) int workoutLocationType;
@property (nonatomic) _Bool hasWorkoutLocationType;
@property (retain, nonatomic) _INPBDataString *workoutName;
@property (nonatomic, readonly) _Bool hasWorkoutName;

- (unsigned short)workoutGoalUnitTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsWorkoutGoalUnitType: /* Error: Ran out of types for this method. */;
- (unsigned short)workoutLocationTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsWorkoutLocationType: /* Error: Ran out of types for this method. */;

@end

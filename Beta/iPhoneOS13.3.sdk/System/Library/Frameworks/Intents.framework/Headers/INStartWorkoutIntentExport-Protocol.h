/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INSpeakableString, NSNumber;

@protocol INStartWorkoutIntentExport <Swift>

@property (copy, nonatomic) INSpeakableString *workoutName;
@property (copy, nonatomic) NSNumber *goalValue;
@property (nonatomic) long long workoutGoalUnitType;
@property (nonatomic) long long workoutLocationType;
@property (copy, nonatomic) NSNumber *isOpenEnded;

- (unsigned short)init;

@end

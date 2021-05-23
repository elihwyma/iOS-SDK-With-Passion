/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSString, SAHLWorkoutGoal, SAHLWorkoutType;

@interface SAHLStartWorkout : SADomainCommand

@property (nonatomic) _Bool isOpenGoal;
@property (nonatomic) _Bool skipActivitySetup;
@property (retain, nonatomic) SAHLWorkoutGoal *workoutGoal;
@property (retain, nonatomic) SAHLWorkoutType *workoutType;
@property (copy, nonatomic) NSString *workoutUserMode;

+ (id)startWorkout;
+ (id)startWorkoutWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end

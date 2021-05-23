/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ContentKit/WFContentItem.h>

@interface WFHKWorkoutContentItem : WFContentItem

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (id)itemWithWorkout:(id)arg1;
+ (id)itemWithWorkout:(id)arg1 distanceUnit:(id)arg2 caloriesUnit:(id)arg3;

- (id)sourceName;
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (id)workout;
- (id)readableActivityType;
- (id)workoutContainer;

@end

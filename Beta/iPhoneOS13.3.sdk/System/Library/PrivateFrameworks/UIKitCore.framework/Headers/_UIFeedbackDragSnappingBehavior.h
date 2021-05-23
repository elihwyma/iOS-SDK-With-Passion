/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIDragSnappingFeedbackGenerator.h>

@interface _UIFeedbackDragSnappingBehavior : _UIDragSnappingFeedbackGenerator

+ (id)retargetBehaviorWithStyle:(long long)arg1 coordinateSpace:(id)arg2;
+ (id)dragBehaviorWithStyle:(long long)arg1 coordinateSpace:(id)arg2;
+ (id)dragBehaviorWithCoordinateSpace:(id)arg1 configuration:(id)arg2;

- (void)targetUpdated;
- (void)snappedToFinalPosition;

@end

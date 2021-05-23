/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UITableViewContainerView.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UITableViewDropAnimationContainerView : _UITableViewContainerView

{
    long long _activeDropAnimationCount;
    double _originalTargetCenterY;
    struct CGPoint __tableViewContainerOffsetFromTargetCenter;
}

@property (nonatomic) long long activeDropAnimationCount;
@property (nonatomic) double originalTargetCenterY;
@property (nonatomic, readonly) NSArray *cells;
@property (nonatomic, readonly) _Bool hasCompletedAllDropAnimations;
@property (nonatomic) struct CGPoint _tableViewContainerOffsetFromTargetCenter;

- (id)init;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)beginDropAnimation;
- (void)endDropAnimation;
- (void)updateOffsetFromTargetCenterIfNeeded;

@end

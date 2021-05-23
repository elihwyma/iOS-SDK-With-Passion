/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSNumber, UIFocusAnimationCoordinator;

__attribute__((visibility("hidden")))
@interface _UIFocusAnimationCoordinatorManager : NSObject

{
    UIFocusAnimationCoordinator *_activeFocusAnimationCoordinator;
    NSHashTable *_unfocusingItems;
    double _lastFocusUpdateTime;
    UIFocusAnimationCoordinator *_lastFocusingItemAnimationCoordinator;
    NSNumber *_inheritedAnimationCoordinatorActiveAnimation;
}

@property (nonatomic, readonly) NSHashTable *unfocusingItems;
@property (nonatomic) double lastFocusUpdateTime;
@property (retain, nonatomic) UIFocusAnimationCoordinator *activeFocusAnimationCoordinator;
@property (retain, nonatomic) UIFocusAnimationCoordinator *lastFocusingItemAnimationCoordinator;
@property (retain, nonatomic) NSNumber *inheritedAnimationCoordinatorActiveAnimation;

- (id)init;
- (void)_performDelayedFocusingAnimationIfNecessary;
- (id)willUpdateFocusInContext:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 fromItem:(id)arg2;

@end

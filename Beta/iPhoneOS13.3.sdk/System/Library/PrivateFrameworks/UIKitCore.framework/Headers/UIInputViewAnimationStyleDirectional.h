/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIInputViewAnimationStyle.h>

__attribute__((visibility("hidden")))
@interface UIInputViewAnimationStyleDirectional : UIInputViewAnimationStyle

{
    int _outDirection;
}

@property (nonatomic) int outDirection;

+ (id)animationStyleAnimated:(_Bool)arg1 duration:(double)arg2 outDirection:(int)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2;
- (_Bool)canDismissWithScrollView;
- (id)endPlacementForInputViewSet:(id)arg1;
- (id)startPlacementForInputViewSet:(id)arg1 currentPlacement:(id)arg2;

@end

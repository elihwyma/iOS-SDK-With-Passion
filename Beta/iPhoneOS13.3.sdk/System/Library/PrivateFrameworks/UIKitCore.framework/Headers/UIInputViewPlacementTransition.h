/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIInputViewAnimationStyle, UIInputViewSetNotificationInfo, UIInputViewSetPlacement;

@protocol NSObject, UIInputViewAnimationController;

__attribute__((visibility("hidden")))
@interface UIInputViewPlacementTransition : NSObject

{
    _Bool cancelled;
    int animationState;
    UIInputViewSetPlacement *fromPlacement;
    UIInputViewSetPlacement *toPlacement;
    UIInputViewAnimationStyle *animationStyle;
    UIInputViewSetNotificationInfo *notificationInfo;
    unsigned long long notifications;
    id <NSObject> animationContext;
    id <UIInputViewAnimationController> animationController;
}

@property (retain, nonatomic) UIInputViewSetPlacement *fromPlacement;
@property (retain, nonatomic) UIInputViewSetPlacement *toPlacement;
@property (retain, nonatomic) UIInputViewAnimationStyle *animationStyle;
@property (retain, nonatomic) UIInputViewSetNotificationInfo *notificationInfo;
@property (nonatomic) unsigned long long notifications;
@property (nonatomic) int animationState;
@property (retain, nonatomic) id <UIInputViewAnimationController> animationController;
@property (retain, nonatomic) id <NSObject> animationContext;
@property (nonatomic) _Bool cancelled;

+ (id)transitionFromPlacement:(id)arg1 toPlacement:(id)arg2 withAnimationStyle:(id)arg3;

- (void)dealloc;
- (_Bool)didAdvanceAnimationToState:(int)arg1;

@end

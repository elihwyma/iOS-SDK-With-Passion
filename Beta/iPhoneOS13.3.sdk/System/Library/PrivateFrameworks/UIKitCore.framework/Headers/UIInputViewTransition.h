/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIInputViewSet;

__attribute__((visibility("hidden")))
@interface UIInputViewTransition : NSObject

{
    UIInputViewSet *oldSet;
    UIInputViewSet *newSet;
}

@property (nonatomic, readonly) UIInputViewSet *oldSet;

- (id)newSet;
- (void)postNotificationsForTransitionStart;
- (void)postNotificationsForTransitionEnd;

@end

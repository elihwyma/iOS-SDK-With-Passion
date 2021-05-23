/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UITransitionState.h>

@class UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface _UIQueuingScrollViewState : _UITransitionState

{
    UIView *_view;
    UIViewController *_viewController;
    _Bool _manual;
}

@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly, getter=isManual) _Bool manual;

- (id)description;
- (_Bool)isCompatibleWithTransitionInDirection:(long long)arg1;
- (id)initWithTransitionDirection:(long long)arg1 view:(id)arg2 manual:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;

@end

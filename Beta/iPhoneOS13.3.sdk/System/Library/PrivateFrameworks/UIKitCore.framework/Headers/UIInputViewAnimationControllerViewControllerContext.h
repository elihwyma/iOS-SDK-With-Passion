/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIKBViewTreeSnapshotter, UIView, _UIViewControllerTransitionContext;

@protocol UIInputViewAnimationHost, UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface UIInputViewAnimationControllerViewControllerContext : NSObject

{
    _UIViewControllerTransitionContext *_context;
    id <UIInputViewAnimationHost> _host;
    UIView *_from;
    UIView *_to;
    struct CGRect _fromRect;
    struct CGRect _toRect;
    UIKBViewTreeSnapshotter *_kbSnapshotter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <UIViewControllerContextTransitioning> mainContext;
@property (nonatomic, readonly) UIView *fromKeyboard;
@property (nonatomic, readonly) struct CGRect fromKeyboardFrame;
@property (nonatomic, readonly) UIView *toKeyboard;
@property (nonatomic, readonly) struct CGRect toKeyboardFrame;

+ (id)contextWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3 transitionContext:(id)arg4;

- (void)dealloc;
- (id)initWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3 transitionContext:(id)arg4;

@end

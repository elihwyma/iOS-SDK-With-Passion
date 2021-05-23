/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIWindow;

__attribute__((visibility("hidden")))
@interface _UIWindowAnimationController : NSObject <Swift>

{
    _Bool _shouldCrossfade;
    UIWindow *_window;
}

@property (nonatomic) UIWindow *window;
@property (nonatomic) _Bool shouldCrossfade;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)animationControllerWithWindow:(id)arg1;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (void)_performCrossfadeAnimationWithContext:(id)arg1 windowGeometryUpdatingBlock:(CDUnknownBlockType)arg2;
- (void)_performLayoutAnimationWithContext:(id)arg1 windowGeometryUpdatingBlock:(CDUnknownBlockType)arg2;

@end

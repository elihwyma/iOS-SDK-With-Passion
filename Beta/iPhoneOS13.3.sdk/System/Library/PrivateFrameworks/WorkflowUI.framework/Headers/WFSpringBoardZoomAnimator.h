/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIView;

@interface WFSpringBoardZoomAnimator : NSObject

{
    UIView *_originalView;
    CDUnknownFunctionPointerType _snapshotter;
    _Bool _presenting;
    UIView *_morphView;
    UIView *_shadowView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)presentAnimatorWithOriginalView:(id)arg1 snapshotter:(CDUnknownFunctionPointerType)arg2;
+ (id)dismissAnimatorWithOriginalView:(id)arg1 snapshotter:(CDUnknownFunctionPointerType)arg2;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)initWithOriginalView:(id)arg1 snapshotter:(CDUnknownFunctionPointerType)arg2 presenting:(_Bool)arg3;
- (id)lessStiffSpringAnimation;
- (id)stiffSpringAnimation;
- (id)centralAnimation;
- (id)morphAnimation;
- (id)crossfadeAnimation;
- (id)radiusAnimation;
- (void)configureViews:(id)arg1;
- (void)startAnimations:(id)arg1;
- (void)completeAnimations:(id)arg1;

@end

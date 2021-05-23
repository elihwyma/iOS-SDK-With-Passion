/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKeyboardKeyplaneTransition.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardKeySwipeTransition : UIKeyboardKeyplaneTransition

{
    _Bool _disableMeshOptimization;
    NSArray *_startKeysOrdered;
    NSArray *_endKeysOrdered;
    NSArray *_startGeometries;
    NSArray *_transitionKeys;
    NSArray *_keyInfos;
    double _previousProgress;
}

@property (retain, nonatomic) NSArray *startKeysOrdered;
@property (retain, nonatomic) NSArray *endKeysOrdered;
@property (retain, nonatomic) NSArray *startGeometries;
@property (retain, nonatomic) NSArray *transitionKeys;
@property (retain, nonatomic) NSArray *keyInfos;
@property (nonatomic) double previousProgress;
@property (nonatomic) _Bool disableMeshOptimization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)removeAllAnimations;
- (void)rebuildWithStartKeyplane:(id)arg1 startView:(id)arg2 endKeyplane:(id)arg3 endView:(id)arg4;
- (void)updateWithProgress:(double)arg1;
- (void)commitTransitionRebuild;
- (void)gatherTransitionKeys;
- (void)_runTransformAnimation;
- (void)_runOpacityAnimation;
- (id)meshTransformForKeyplane:(id)arg1 forward:(_Bool)arg2 initial:(_Bool)arg3;
- (double)nonInteractiveDuration;
- (struct CGRect)keyRectForFrame:(struct CGRect)arg1 normalizedSubRect:(struct CGRect)arg2;
- (void)runNonInteractivelyWithCompletion:(CDUnknownBlockType)arg1;

@end

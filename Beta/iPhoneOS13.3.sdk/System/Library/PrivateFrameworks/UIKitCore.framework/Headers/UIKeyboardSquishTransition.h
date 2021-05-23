/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKeyboardKeyplaneTransition.h>

@class CADisplayLink, NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardSquishTransition : UIKeyboardKeyplaneTransition

{
    double _widthRatio;
    double _offsetX;
    _Bool _useInteractiveOpacity;
    _Bool _disableMeshOptimization;
    _Bool _opacityAnimationDirectionForward;
    unsigned long long _animationType;
    NSArray *_startGeometries;
    NSArray *_endGeometries;
    NSArray *_commonVisibleKeys;
    CADisplayLink *_opacityAnimationDisplayLink;
    double _opacityAnimationBeginTime;
    double _previousProgress;
}

@property (retain, nonatomic) NSArray *startGeometries;
@property (retain, nonatomic) NSArray *endGeometries;
@property (retain, nonatomic) NSArray *commonVisibleKeys;
@property (retain, nonatomic) CADisplayLink *opacityAnimationDisplayLink;
@property (nonatomic) double opacityAnimationBeginTime;
@property (nonatomic) _Bool opacityAnimationDirectionForward;
@property (nonatomic) double previousProgress;
@property (nonatomic) _Bool useInteractiveOpacity;
@property (nonatomic) unsigned long long animationType;
@property (nonatomic) _Bool disableMeshOptimization;

- (void)dealloc;
- (void)removeAllAnimations;
- (void)rebuildWithStartKeyplane:(id)arg1 startView:(id)arg2 endKeyplane:(id)arg3 endView:(id)arg4;
- (void)updateWithProgress:(double)arg1;
- (void)commitTransitionRebuild;
- (id)sortedCommonVisibleKeys;
- (void)_updateTransition;
- (id)meshTransformForKeyplane:(id)arg1 toKeyplane:(id)arg2;
- (id)_animationsForStart;
- (id)_animationsForEnd;
- (void)updateOpacityAnimation:(id)arg1;
- (id)geometriesForKeyplane:(id)arg1;
- (_Bool)_allowFacesToAdjoinToAdjacentFaces;
- (id)symmetricMeshTransformForKeyplane:(id)arg1;

@end

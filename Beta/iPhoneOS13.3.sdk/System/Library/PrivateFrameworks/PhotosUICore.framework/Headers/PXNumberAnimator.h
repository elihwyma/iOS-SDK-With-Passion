/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSMutableArray, NSString, PXDisplayLink;

@protocol PXNumberAnimatorDisplayLinkTarget;

@interface PXNumberAnimator : PXObservable

{
    _Bool _isPerformingChanges;
    struct {
        _Bool presentationValue;
    } _needsUpdateFlags;
    struct _PXValueAnimationSpec _currentAnimationSpec;
    NSMutableArray *_animations;
    PXDisplayLink *_displayLink;
    _Bool _isBeingMutated;
    double _value;
    double _presentationValue;
    double _epsilon;
    NSString *_label;
    id <PXNumberAnimatorDisplayLinkTarget> _displayLinkTarget;
}

@property (nonatomic, setter=_setPresentationValue:) double presentationValue;
@property (weak, nonatomic) id <PXNumberAnimatorDisplayLinkTarget> displayLinkTarget;
@property (nonatomic, readonly) double value;
@property (nonatomic, readonly) double epsilon;
@property (nonatomic, readonly) double approximateVelocity;
@property (nonatomic, readonly) _Bool isAnimating;
@property (nonatomic, readonly) _Bool isBeingMutated;
@property (copy, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setValue:(double)arg1;
- (id)initWithValue:(double)arg1;
- (_Bool)_needsUpdate;
- (void)_setAnimating:(_Bool)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_setNeedsUpdate;
- (id)mutableChangeObject;
- (void)didPerformChanges;
- (void)_updateIfNeeded;
- (void)_handleDisplayLink:(id)arg1;
- (id)initWithValue:(double)arg1 epsilon:(double)arg2;
- (void)performChangesWithoutAnimation:(CDUnknownBlockType)arg1;
- (void)performChangesWithDuration:(double)arg1 curve:(long long)arg2 changes:(CDUnknownBlockType)arg3;
- (void)performChangesUsingDefaultSpringAnimationWithInitialVelocity:(double)arg1 changes:(CDUnknownBlockType)arg2;
- (void)performChangesUsingSpringAnimationWithStiffness:(double)arg1 dampingRatio:(double)arg2 initialVelocity:(double)arg3 changes:(CDUnknownBlockType)arg4;
- (void)_invalidatePresentationValue;
- (void)_updatePresentationValueIfNeeded;

@end

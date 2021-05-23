/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXNumberAnimator;

@protocol PXMutableNumberAnimator;

@interface PXPointAnimator : PXObservable <Swift>

{
    PXNumberAnimator<PXMutableNumberAnimator> *_xAnimator;
    PXNumberAnimator<PXMutableNumberAnimator> *_yAnimator;
    _Bool _isAnimating;
    NSString *_label;
    struct CGPoint _value;
    struct CGPoint _presentationValue;
}

@property (nonatomic) _Bool isAnimating;
@property (nonatomic) struct CGPoint presentationValue;
@property (nonatomic, readonly) struct CGPoint value;
@property (nonatomic, readonly) double epsilon;
@property (copy, nonatomic) NSString *label;
@property (nonatomic, readonly) PXNumberAnimator<PXMutableNumberAnimator> *xAnimator;
@property (nonatomic, readonly) PXNumberAnimator<PXMutableNumberAnimator> *yAnimator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_update;
- (void)setValue:(struct CGPoint)arg1;
- (id)initWithValue:(struct CGPoint)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)mutableChangeObject;
- (void)didPerformChanges;
- (void)_handleDisplayLink:(id)arg1;
- (id)initWithValue:(struct CGPoint)arg1 epsilon:(double)arg2;
- (struct CGPoint)approximateVelocity;
- (void)_setInternalValue:(struct CGPoint)arg1;
- (void)performChangesWithoutAnimation:(CDUnknownBlockType)arg1;
- (void)performChangesWithDuration:(double)arg1 curve:(long long)arg2 changes:(CDUnknownBlockType)arg3;
- (void)performChangesUsingDefaultSpringAnimationWithInitialVelocity:(struct CGPoint)arg1 changes:(CDUnknownBlockType)arg2;
- (void)performChangesUsingSpringAnimationWithStiffness:(double)arg1 dampingRatio:(double)arg2 initialVelocity:(struct CGPoint)arg3 changes:(CDUnknownBlockType)arg4;

@end

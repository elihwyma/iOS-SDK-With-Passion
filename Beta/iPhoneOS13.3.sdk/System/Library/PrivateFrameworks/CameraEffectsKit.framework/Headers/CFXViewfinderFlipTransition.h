/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class CAMSnapshotView, UIView;

@interface CFXViewfinderFlipTransition : NSObject

{
    UIView *_viewfinderView;
    CAMSnapshotView *__frontSnapshotView;
    CAMSnapshotView *__backSnapshotView;
    CAMSnapshotView *__targetSnapshotView;
    unsigned long long __currentAnimationID;
}

@property (weak, nonatomic) UIView *viewfinderView;
@property (retain, nonatomic, setter=_setFrontSnapshotView:) CAMSnapshotView *_frontSnapshotView;
@property (retain, nonatomic, setter=_setBackSnapshotView:) CAMSnapshotView *_backSnapshotView;
@property (retain, nonatomic, setter=_setTargetSnapshotView:) CAMSnapshotView *_targetSnapshotView;
@property (nonatomic, setter=_setCurrentAnimationID:) unsigned long long _currentAnimationID;

- (void)_getCurrentRadians:(out double *)arg1 targetRadians:(out double *)arg2 forDirection:(long long)arg3 withAnimation:(id)arg4 onFrontSnapshotLayer:(id)arg5;
- (double)_frontSnapshotTargetRadiansForDirection:(long long)arg1 fromRadians:(double)arg2;
- (id)_snapshotFlipAnimationFromValue:(double)arg1 toValue:(double)arg2;
- (double)_backSnapshotTargetRadiansForDirection:(long long)arg1 frontSnapshotRadians:(double)arg2;
- (void)_cleanupFromFlipTransition;
- (void)performFlipTransitionWithDirection:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)completeTransitionToLivePreviewWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithViewfinderView:(id)arg1;

@end

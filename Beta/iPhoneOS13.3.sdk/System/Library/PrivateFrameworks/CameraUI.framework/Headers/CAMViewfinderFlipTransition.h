/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CAMSnapshotView;

@protocol CAMViewfinderTransitionable;

@interface CAMViewfinderFlipTransition : NSObject

{
    id <CAMViewfinderTransitionable> __transitionableViewfinder;
    CAMSnapshotView *__frontSnapshotView;
    CAMSnapshotView *__backSnapshotView;
    CAMSnapshotView *__targetSnapshotView;
    unsigned long long __currentAnimationID;
}

@property (weak, nonatomic, readonly) id <CAMViewfinderTransitionable> _transitionableViewfinder;
@property (retain, nonatomic, setter=_setFrontSnapshotView:) CAMSnapshotView *_frontSnapshotView;
@property (retain, nonatomic, setter=_setBackSnapshotView:) CAMSnapshotView *_backSnapshotView;
@property (retain, nonatomic, setter=_setTargetSnapshotView:) CAMSnapshotView *_targetSnapshotView;
@property (nonatomic, setter=_setCurrentAnimationID:) unsigned long long _currentAnimationID;

- (void)_getCurrentRadians:(out double *)arg1 targetRadians:(out double *)arg2 forDirection:(unsigned long long)arg3 withAnimation:(id)arg4 onFrontSnapshotLayer:(id)arg5;
- (double)_frontSnapshotTargetRadiansForDirection:(unsigned long long)arg1 fromRadians:(double)arg2;
- (id)_snapshotFlipAnimationFromValue:(double)arg1 toValue:(double)arg2;
- (double)_backSnapshotTargetRadiansForDirection:(unsigned long long)arg1 frontSnapshotRadians:(double)arg2;
- (void)_cleanupFromFlipTransition;
- (id)initWithTransitionableViewfinder:(id)arg1;
- (void)performFlipTransitionWithDirection:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)completeTransitionToLivePreviewWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

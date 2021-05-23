/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UICollectionView, _UIDragDestinationControllerSessionState, _UIDragMovementCadenceSettings, _UIVelocityIntegrator;

__attribute__((visibility("hidden")))
@interface _UIDragDestinationControllerReorderingState : NSObject

{
    _Bool _supportsLocalSessionReordering;
    _Bool _hasStartedInteractiveReorder;
    _UIVelocityIntegrator *_velocityIntegrator;
    long long _reorderCount;
    _UIDragDestinationControllerSessionState *_sessionState;
    UICollectionView *_collectionView;
    double _reorderBecamePossibleTime;
    long long _dragMovementPhase;
    _UIDragMovementCadenceSettings *_reorderCadenceSettings;
}

@property (retain, nonatomic) _UIDragDestinationControllerSessionState *sessionState;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) _UIVelocityIntegrator *velocityIntegrator;
@property (nonatomic) long long reorderCount;
@property (nonatomic) double reorderBecamePossibleTime;
@property (nonatomic) long long dragMovementPhase;
@property (retain, nonatomic) _UIDragMovementCadenceSettings *reorderCadenceSettings;
@property (nonatomic) _Bool hasStartedInteractiveReorder;
@property (nonatomic) _Bool supportsLocalSessionReordering;
@property (nonatomic, readonly) _Bool hasPerformedReordering;

- (void)didEndInteractiveReorder;
- (id)initWithSessionState:(id)arg1 collectionView:(id)arg2;
- (void)reorderingDidBecomePossible;
- (_Bool)hasEnoughTimeElapsedSizeReorderingBecamePossibleForInterval:(double)arg1;
- (void)velocityExceededThreshold;
- (void)didBeginInteractiveReorder;
- (void)didReorder;
- (id)_reorderCadenceSettings;
- (void)reorderResetToStartingLocation;

@end

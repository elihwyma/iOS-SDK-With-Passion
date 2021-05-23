/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSArray, PXDisplayLink;

@interface PXCuratedLibraryAllPhotosAlphaAnimator : PXObservable

{
    CDStruct_d97c9657 _updateFlags;
    PXDisplayLink *_displayLink;
    double _lastTickTime;
    double _currentDirection;
    double _directionAnchorColumnIndex;
    double _columnIndexDelta;
    double _columnIndexVelocity;
    long long _layerCount;
    struct PXAlphaLayer _layers[10];
    struct PXAlphaTransitionInfo _transitionInfos[9];
    _Bool _isPerformingChangesWithoutAnimation;
    _Bool _isAnimating;
    _Bool _isBeingMutated;
    NSArray *_allowedColumns;
    double _columnIndex;
    double _targetColumnIndex;
    double _presentationColumnIndex;
    long long _maxColumnsForAspectFit;
    double _autoFadeAmount;
    double _presentationAutoFadeAmount;
    double _autoFadeColumnIndex;
}

@property (nonatomic) double presentationColumnIndex;
@property (nonatomic) double presentationAutoFadeAmount;
@property (nonatomic) double autoFadeColumnIndex;
@property (nonatomic) _Bool isAnimating;
@property (nonatomic, readonly) NSArray *allowedColumns;
@property (nonatomic, readonly) double columnIndex;
@property (nonatomic, readonly) double targetColumnIndex;
@property (nonatomic, readonly) long long maxColumnsForAspectFit;
@property (nonatomic, readonly) double autoFadeAmount;
@property (nonatomic, readonly) _Bool isBeingMutated;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)_tick:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)setColumnIndex:(double)arg1;
- (void)didPerformChanges;
- (void)_invalidatePresentationValue;
- (double)_targetColumnIndex;
- (void)performChangesWithAnimation:(_Bool)arg1 changeBlock:(CDUnknownBlockType)arg2;
- (void)_resetAnimatedValues;
- (void)setAllowedColumns:(id)arg1;
- (void)setMaxColumnsForAspectFit:(long long)arg1;
- (void)setTargetColumnIndex:(double)arg1;
- (void)setAutoFadeAmount:(double)arg1;
- (struct PXAlphaTransitionInfo *)_transitionInfoForValue:(double)arg1;
- (void)_updateTransitionInfo;
- (void)_updatePresentationValue;

@end

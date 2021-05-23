/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXSnappingController : NSObject

{
    _Bool _accumulateOffsetWhileSnapped;
    _Bool _snappedToTarget;
    _Bool __hasEnteredAttractionThreshold;
    _Bool __hasEnteredRetentionThreshold;
    _Bool __previousOffsetInvalid;
    double _snappingTarget;
    double _retentionOffsetThreshold;
    double _attractionOffsetThreshold;
    double _attractionVelocityThreshold;
    double __previousOffset;
    double __accumulatedOffset;
}

@property (nonatomic, setter=_setHasEnteredAttractionThreshold:) _Bool _hasEnteredAttractionThreshold;
@property (nonatomic, setter=_setHasEnteredRetentionThreshold:) _Bool _hasEnteredRetentionThreshold;
@property (nonatomic, setter=_setPreviousOffset:) double _previousOffset;
@property (nonatomic, getter=_isPreviousOffsetInvalid, setter=_setPreviousOffsetInvalid:) _Bool _previousOffsetInvalid;
@property (nonatomic, setter=_setAccumulatedOffset:) double _accumulatedOffset;
@property (nonatomic, readonly) double snappingTarget;
@property (nonatomic) double retentionOffsetThreshold;
@property (nonatomic) double attractionOffsetThreshold;
@property (nonatomic) double attractionVelocityThreshold;
@property (nonatomic) _Bool accumulateOffsetWhileSnapped;
@property (nonatomic, readonly, getter=isSnappedToTarget) _Bool snappedToTarget;

- (id)init;
- (void)_reset;
- (id)initWithSnappingTarget:(double)arg1;
- (_Bool)_isOffset:(double)arg1 inThreshold:(double)arg2;
- (void)_setBoolPointer:(inout _Bool *)arg1 toValue:(_Bool)arg2;
- (void)interactionBegan;
- (void)interactionEnded;
- (void)updateOffset:(inout double *)arg1 withVelocity:(double)arg2 shouldSnap:(out _Bool *)arg3 shouldBreak:(out _Bool *)arg4;
- (void)didSnapByAttraction;

@end

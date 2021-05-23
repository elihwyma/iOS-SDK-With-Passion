/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDShapeLayout.h>

@class TSDBezierPath, TSDConnectionLinePathSource, TSDInfoGeometry, TSDLayout;

@interface TSDConnectionLineAbstractLayout : TSDShapeLayout

{
    TSDBezierPath *mClippedBezierPath;
    TSDConnectionLinePathSource *mOriginalPathSource;
    TSDConnectionLinePathSource *mConnectedPathSource;
    TSDInfoGeometry *mConnectedInfoGeometry;
    TSDLayout *mConnectedFrom;
    TSDLayout *mConnectedTo;
    TSDBezierPath *mCachedFromWrapPath;
    TSDBezierPath *mCachedToWrapPath;
    double mCachedFromOutset;
    double mCachedToOutset;
    TSDBezierPath *mCachedFromOutsetWrapPath;
    TSDBezierPath *mCachedToOutsetWrapPath;
    TSDLayout *mOldConnectedFrom;
    TSDLayout *mOldConnectedTo;
    _Bool mValidConnections;
    _Bool mVisibleLine;
    _Bool mValidLine;
    struct CGPoint mLooseEndPosition;
    struct CGPoint mAcumulatedDrag;
    _Bool mUseResizePoints[3];
    struct CGPoint mResizeControlPoints[3];
    _Bool mUseDynamicOutsets;
    double mDynamicOutsetFrom;
    double mDynamicOutsetTo;
}

@property (nonatomic) TSDLayout *connectedFrom;
@property (nonatomic) TSDLayout *connectedTo;
@property (nonatomic, readonly) _Bool validLine;
@property (nonatomic, readonly) TSDConnectionLinePathSource *connectedPathSource;
@property (nonatomic) _Bool useDynamicOutsets;
@property (nonatomic) double dynamicOutsetFrom;
@property (nonatomic) double dynamicOutsetTo;
@property (nonatomic, readonly) double outsetFrom;
@property (nonatomic, readonly) double outsetTo;

- (void)dealloc;
- (id)path;
- (_Bool)isInvisible;
- (void)validate;
- (_Bool)canFlip;
- (void)invalidatePath;
- (void)invalidatePosition;
- (int)wrapType;
- (_Bool)shouldDisplayGuides;
- (void)processChangedProperty:(int)arg1;
- (void)parentDidChange;
- (void)beginDynamicOperation;
- (void)endDynamicOperation;
- (struct CGRect)boundsForStandardKnobs;
- (_Bool)supportsRotation;
- (void)connectedLayoutInvalidated:(id)arg1;
- (_Bool)shouldValidate;
- (void)pauseDynamicTransformation;
- (id)reliedOnLayouts;
- (id)additionalLayoutsForRepCreation;
- (_Bool)supportsResize;
- (_Bool)supportsFlipping;
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;
- (id)pathSource;
- (_Bool)pathIsOpen;
- (_Bool)pathIsLineSegment;
- (id)layoutInfoGeometry;
- (_Bool)canBeIntersected;
- (_Bool)canResetTextAndObjectHandles;
- (struct CGPoint)unclippedHeadPoint;
- (struct CGPoint)unclippedTailPoint;
- (void)invalidateConnections;
- (id)clipPath:(id)arg1 onLayout:(id)arg2 outset:(double)arg3 reversed:(_Bool)arg4 isValid:(_Bool *)arg5;
- (_Bool)isStraightLine;
- (id)createConnectedPathFrom:(id)arg1 to:(id)arg2 withControlPoints:(struct CGPoint [3])arg3;
- (struct CGPoint)controlPointForPointA:(struct CGPoint)arg1 pointB:(struct CGPoint)arg2 andOriginalA:(struct CGPoint)arg3 originalB:(struct CGPoint)arg4;
- (struct CGPoint)i_accumulatedDrag;
- (void)checkConnections;
- (void)removeConnections;
- (void)updateRepPath;
- (id)connectionLineInfo;
- (id)p_infoForConnectingToInfo:(id)arg1;
- (_Bool)canEndpointsCoincide;
- (void)updateConnectedPath;

@end

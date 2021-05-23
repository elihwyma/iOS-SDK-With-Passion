/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDStyledLayout.h>

@class TSDBezierPath, TSDEditableBezierPathSource, TSDFill, TSDInfoGeometry, TSDMutableStroke, TSDPathSource;

@interface TSDShapeLayout : TSDStyledLayout

{
    struct {
        unsigned int path:1;
        unsigned int pathBounds:1;
        unsigned int pathBoundsWithoutStroke:1;
        unsigned int pathIsOpen:1;
        unsigned int pathIsLineSegment:1;
        unsigned int alignmentFrame:1;
        unsigned int headAndTail:1;
        unsigned int headLineEnd:1;
        unsigned int tailLineEnd:1;
        unsigned int clippedPath:1;
    } mShapeInvalidFlags;
    TSDBezierPath *mCachedPath;
    struct CGRect mCachedPathBounds;
    struct CGRect mCachedPathBoundsWithoutStroke;
    _Bool mCachedPathIsOpen;
    _Bool mCachedPathIsLineSegment;
    struct CGRect mCachedAlignmentFrame;
    struct CGPoint mHeadPoint;
    struct CGPoint mTailPoint;
    struct CGPoint mHeadLineEndPoint;
    struct CGPoint mTailLineEndPoint;
    double mHeadLineEndAngle;
    double mTailLineEndAngle;
    long long mHeadCutSegment;
    long long mTailCutSegment;
    double mHeadCutT;
    double mTailCutT;
    TSDBezierPath *mCachedClippedPath;
    TSDPathSource *mShrunkenPathSource;
    TSDEditableBezierPathSource *mCachedEditableBezierPathSource;
    TSDPathSource *mCachedPathSource;
    TSDPathSource *mResizePathSource;
    TSDInfoGeometry *mResizeInfoGeometry;
    TSDInfoGeometry *mInitialInfoGeometry;
    TSDPathSource *mProvidedPathSource;
    TSDMutableStroke *mDynamicStroke;
    TSDFill *mDynamicFill;
}

@property (nonatomic, readonly) TSDFill *fill;
@property (retain, nonatomic) TSDFill *dynamicFill;

- (void)dealloc;
- (id)path;
- (struct CGSize)minimumSize;
- (id)initWithInfo:(id)arg1;
- (id)stroke;
- (void)setGeometry:(id)arg1;
- (_Bool)isInvisible;
- (void)invalidatePath;
- (struct CGRect)pathBounds;
- (id)clippedPathForLineEnds;
- (id)strokeHeadLineEnd;
- (id)strokeTailLineEnd;
- (struct CGPoint)headLineEndPoint;
- (struct CGPoint)tailLineEndPoint;
- (double)headLineEndAngle;
- (double)tailLineEndAngle;
- (double)lineEndScale;
- (void)p_validateHeadLineEnd;
- (void)p_validateTailLineEnd;
- (void)p_invalidateClippedPath;
- (void)p_validateHeadAndTail;
- (void)p_computeAngle:(double *)arg1 point:(struct CGPoint *)arg2 cutSegment:(long long *)arg3 cutT:(double *)arg4 forLineEndAtHead:(_Bool)arg5;
- (void)p_invalidateHead;
- (void)p_invalidateTail;
- (_Bool)isBeingManipulated;
- (void)invalidateFrame;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
- (id)i_computeWrapPath;
- (void)processChangedProperty:(int)arg1;
- (id)i_computeWrapPathClosed:(_Bool)arg1;
- (void)beginDynamicOperation;
- (void)endDynamicOperation;
- (struct CGRect)boundsForStandardKnobs;
- (_Bool)supportsRotation;
- (struct CGRect)alignmentFrame;
- (_Bool)shouldBeDisplayedInShowMode;
- (_Bool)isStrokeBeingManipulated;
- (void)dynamicStrokeWidthChangeDidBegin;
- (void)dynamicStrokeWidthUpdateToValue:(double)arg1;
- (void)dynamicStrokeWidthChangeDidEnd;
- (id)initialInfoGeometry;
- (struct CGPoint)centerForConnecting;
- (struct CGRect)alignmentFrameInRoot;
- (_Bool)supportsResize;
- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint)arg2;
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;
- (unsigned long long)numberOfControlKnobs;
- (id)pathSource;
- (id)shapeInfo;
- (struct CGRect)shapeFrameWithTransform:(struct CGAffineTransform)arg1;
- (void)aliasPathForScale:(double)arg1 adjustedStroke:(id *)arg2 adjustedPath:(id *)arg3 startDelta:(struct CGPoint *)arg4 endDelta:(struct CGPoint *)arg5;
- (_Bool)pathIsOpen;
- (struct CGRect)pathBoundsWithoutStroke;
- (_Bool)pathIsLineSegment;
- (struct CGPoint)headPoint;
- (struct CGPoint)tailPoint;
- (id)editablePathSource;
- (void)invalidatePathBounds;
- (id)layoutInfoGeometry;
- (struct CGAffineTransform)computeLayoutTransform;
- (id)p_cachedPath;
- (struct CGRect)p_cachedPathBounds;
- (struct CGRect)p_cachedPathBoundsWithoutStroke;
- (_Bool)p_cachedPathIsOpen;
- (_Bool)p_cachedPathIsLineSegment;
- (id)p_createClippedPath;
- (struct CGRect)p_boundsOfLineEndForHead:(_Bool)arg1 transform:(struct CGAffineTransform)arg2;
- (_Bool)isInvisibleAutosizingShape;
- (void)aliasPathForScale:(double)arg1 originalStroke:(id)arg2 adjustedStroke:(id *)arg3 adjustedPath:(id *)arg4 startDelta:(struct CGPoint *)arg5 endDelta:(struct CGPoint *)arg6;
- (id)p_unitePath:(id)arg1 withLineEndForHead:(_Bool)arg2 stroke:(id)arg3;
- (id)smartPathSource;
- (_Bool)isTailEndOnLeft;
- (struct CGRect)aliasedAlignmentFrameForScale:(double)arg1;
- (_Bool)canBeIntersected;
- (_Bool)canResetTextAndObjectHandles;
- (struct CGPoint)unclippedHeadPoint;
- (struct CGPoint)unclippedTailPoint;
- (void)p_updateResizeInfoGeometryFromResizePathSource;

@end

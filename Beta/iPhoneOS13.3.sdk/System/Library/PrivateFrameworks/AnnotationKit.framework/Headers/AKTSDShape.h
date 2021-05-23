/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class AKTSDBezierPath, AKTSDBrushStroke, AKTSDLineEnd;

@interface AKTSDShape : NSObject

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
    AKTSDBezierPath *mCachedClippedPath;
    AKTSDBezierPath *_path;
    AKTSDBrushStroke *_stroke;
    AKTSDLineEnd *_headLineEnd;
    AKTSDLineEnd *_tailLineEnd;
}

@property (retain, nonatomic) AKTSDBezierPath *path;
@property (retain, nonatomic) AKTSDBrushStroke *stroke;
@property (retain, nonatomic) AKTSDLineEnd *headLineEnd;
@property (retain, nonatomic) AKTSDLineEnd *tailLineEnd;

- (id)init;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)clippedPathForLineEnds;
- (void)p_drawLineEndForHead:(_Bool)arg1 withDelta:(struct CGPoint)arg2 inContext:(struct CGContext *)arg3 useFastDrawing:(_Bool)arg4;
- (id)strokeHeadLineEnd;
- (id)strokeTailLineEnd;
- (struct CGPoint)headLineEndPoint;
- (struct CGPoint)tailLineEndPoint;
- (double)headLineEndAngle;
- (double)tailLineEndAngle;
- (double)lineEndScale;
- (void)p_validateHeadLineEnd;
- (void)p_validateTailLineEnd;
- (id)_newClippedPath;
- (void)p_invalidateClippedPath;
- (void)p_validateHeadAndTail;
- (void)p_computeAngle:(double *)arg1 point:(struct CGPoint *)arg2 cutSegment:(long long *)arg3 cutT:(double *)arg4 forLineEndAtHead:(_Bool)arg5;
- (void)p_invalidateHead;
- (void)p_invalidateTail;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

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
    CGPoint mHeadPoint;
    CGPoint mTailPoint;
    CGPoint mHeadLineEndPoint;
    CGPoint mTailLineEndPoint;
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

@property(retain, nonatomic) AKTSDLineEnd *tailLineEnd; // @synthesize tailLineEnd=_tailLineEnd;
@property(retain, nonatomic) AKTSDLineEnd *headLineEnd; // @synthesize headLineEnd=_headLineEnd;
@property(retain, nonatomic) AKTSDBrushStroke *stroke; // @synthesize stroke=_stroke;
@property(retain, nonatomic) AKTSDBezierPath *path; // @synthesize path=_path;
// - (void).cxx_destruct;
- (id)_newClippedPath;
- (void)p_computeAngle:(double )arg1 point:(CGPoint )arg2 cutSegment:(long long )arg3 cutT:(double )arg4 forLineEndAtHead:(BOOL)arg5;
- (void)p_validateTailLineEnd;
- (void)p_validateHeadLineEnd;
- (void)p_validateHeadAndTail;
- (void)p_invalidateClippedPath;
- (void)p_invalidateTail;
- (void)p_invalidateHead;
- (id)clippedPathForLineEnds;
- (double)tailLineEndAngle;
- (double)headLineEndAngle;
- (CGPoint)tailLineEndPoint;
- (CGPoint)headLineEndPoint;
- (double)lineEndScale;
- (id)strokeTailLineEnd;
- (id)strokeHeadLineEnd;
- (void)p_drawLineEndForHead:(BOOL)arg1 withDelta:(CGPoint)arg2 inContext:(CGContext )arg3 useFastDrawing:(BOOL)arg4;
- (void)drawInContext:(CGContext )arg1;
- (id)init;

@end


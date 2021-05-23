/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@interface CHDrawing : NSObject

{
    struct CHDrawingStrokes _drawing;
}

@property (nonatomic) struct CHDrawingStrokes drawing;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id).cxx_construct;
- (struct CGRect)bounds;
- (id)debugQuickLookObject;
- (unsigned long long)pointCount;
- (void)addPoint:(struct CGPoint)arg1;
- (void)endStroke;
- (void)setLineHeight:(double)arg1;
- (unsigned long long)strokeCount;
- (unsigned long long)pointCountForStrokeIndex:(unsigned long long)arg1;
- (struct CGPoint)pointForStrokeIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2;
- (id)xyRepresentation;
- (Matrix_273a43f8)bitmapRepresentationForSize:(struct CGSize)arg1;
- (Matrix_273a43f8)orientationRepresentationForSampling:(unsigned long long)arg1 convolutionWidth:(unsigned long long)arg2;
- (vector_afed86a5)strokeIndicesSortedByMinXCoordinate;
- (id)sortedDrawingUsingMinXCoordinate;
- (struct _NSRange)matchingStrokePrefixRangeForDrawing:(id)arg1;
- (void)appendSegment:(id)arg1 fromDrawing:(id)arg2;
- (struct CGRect)strokeBoundsAtIndex:(unsigned long long)arg1;
- (id)indexesOfStrokesSmallerThanSize:(struct CGSize)arg1;
- (_Bool)isEqualToDrawing:(id)arg1;
- (id)findLocalYMaximaWithWindowSize:(unsigned long long)arg1 excludingStrokes:(set_54c7c768)arg2;
- (id)initialSegmentationPointIndicesForDrawing;
- (id)filterPointsWithProximity:(double)arg1 fixedPoints:(id)arg2 points:(id)arg3;
- (id)initWithContentsOfXYString:(id)arg1;
- (id)drawingWithStrokesFromIndexSet:(id)arg1;
- (_Bool)isPrefixForDrawing:(id)arg1;
- (id)drawingScaledByFactor:(double)arg1;
- (id)drawingSpatiallyResampled:(double)arg1 outputPointMap:(vector_1dba4e4e *)arg2;
- (id)findSignalCutPointsExcludingStrokes:(set_54c7c768)arg1;
- (struct CGRect)boundingBoxForDrawingSegmentFromCutPoint:(id)arg1 toCutPoint:(id)arg2;
- (double)averageCharacterHeightEstimation:(double)arg1 minChunkHeight:(double)arg2;

@end

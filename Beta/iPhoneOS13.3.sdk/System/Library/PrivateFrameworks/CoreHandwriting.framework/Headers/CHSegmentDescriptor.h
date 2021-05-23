/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class CHCutPoint, NSArray, NSMutableArray, NSNumber;

@interface CHSegmentDescriptor : NSObject

{
    NSMutableArray *_relatedSegmentIDs;
    NSNumber *_segmentID;
    CHCutPoint *_startCutPoint;
    CHCutPoint *_endCutPoint;
    double _trailingSpaceRatio;
    double _trailingSpaceProbability;
    double _trailingCharBoundaryProbability;
    struct CGRect _segmentBounds;
    struct CGRect _contextBounds;
}

@property (nonatomic, readonly) NSNumber *segmentID;
@property (nonatomic, readonly) CHCutPoint *startCutPoint;
@property (nonatomic, readonly) CHCutPoint *endCutPoint;
@property (nonatomic, readonly) struct CGRect segmentBounds;
@property (nonatomic, readonly) NSArray *relatedSegmentIDs;
@property (nonatomic) struct CGRect contextBounds;
@property (nonatomic) double trailingSpaceRatio;
@property (nonatomic) double trailingSpaceProbability;
@property (nonatomic) double trailingCharBoundaryProbability;

+ (long long)indexForSegmentID:(id)arg1 fromSegments:(id)arg2;
+ (id)generateSegmentsFromDrawing:(id)arg1 withSegmentationPoints:(id)arg2 buildingContextBoundsWithRadius:(long long)arg3 spaceProbabilities:(const vector_8f06c10f *)arg4 charBoundaryProbabilities:(const vector_8f06c10f *)arg5 extractDelayedStrokeIDs:(const set_54c7c768 *)arg6 extractedDelayedSegments:(id *)arg7;
+ (id)generateSegmentsFromDrawing:(id)arg1;
+ (id)resolvedCutPoint:(id)arg1 withReferenceDrawing:(id)arg2;
+ (void)computeRelatedSegments:(id)arg1 withDelayedSegments:(id)arg2;
+ (void)_computeLocalContextForSegments:(id)arg1 withContextSizeRadius:(long long)arg2;
+ (void)_resassignSpaceProbabilitiesFromDelayedSegments:(id)arg1 toSegments:(id)arg2;
+ (struct CGRect)boundingBoxFromSegmentID:(long long)arg1 toSegmentID:(long long)arg2 withSegments:(id)arg3 withSourceDrawing:(id)arg4;

- (void)dealloc;
- (long long)strokeCount;
- (id)strokeIndexSet;
- (_Bool)isSinglePointSegment;
- (id)initWithSegmentID:(id)arg1 startCutPoint:(id)arg2 endCutPoint:(id)arg3 trailingSpaceProbability:(double)arg4 trailingCharBoundaryProbability:(double)arg5 referenceDrawing:(id)arg6;
- (void)_addRelatedSegmentID:(id)arg1;

@end

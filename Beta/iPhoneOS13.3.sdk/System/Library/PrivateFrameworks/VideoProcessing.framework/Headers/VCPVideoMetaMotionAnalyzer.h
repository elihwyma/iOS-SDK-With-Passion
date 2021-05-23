/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, VCPVideoMetaMotionSegment;

__attribute__((visibility("hidden")))
@interface VCPVideoMetaMotionAnalyzer : NSObject

{
    struct HinkleyDetector _hinkleyDetector;
    VCPVideoMetaMotionSegment *_activeSegment;
    NSMutableArray *_mutableResults;
    NSMutableArray *_internalResults;
    CDStruct_e83c9415 _frameTimeRange;
}

@property (retain, nonatomic, readonly) NSArray *results;

- (id)init;
- (id).cxx_construct;
- (int)finalizeAnalysis;
- (void)mergeSimilarSegments;
- (int)processFrameMetadata:(id)arg1;
- (_Bool)decideSegmentPointBasedOn:(float)arg1;

@end

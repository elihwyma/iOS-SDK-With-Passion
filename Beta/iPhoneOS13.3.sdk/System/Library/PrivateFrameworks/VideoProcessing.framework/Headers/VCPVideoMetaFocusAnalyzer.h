/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, VCPVideoMetaFocusSegment;

__attribute__((visibility("hidden")))
@interface VCPVideoMetaFocusAnalyzer : NSObject

{
    VCPVideoMetaFocusSegment *_activeSegment;
    NSMutableArray *_mutableResults;
    CDStruct_e83c9415 _frameTimeRange;
}

@property (retain, nonatomic, readonly) NSArray *results;

- (id)init;
- (int)finalizeAnalysis;
- (void)addSegmentToResults;
- (int)processFrameMetadata:(id)arg1;

@end

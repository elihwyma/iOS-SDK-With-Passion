/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPMetaSegment.h>

__attribute__((visibility("hidden")))
@interface VCPVideoMetaMotionSegment : VCPMetaSegment

{
    float _absMotion;
    float _stabilityScore;
}

@property float absMotion;
@property float stabilityScore;

- (void)mergeSegment:(id)arg1;
- (void)finalizeAtTime:(CDStruct_1b6d18a9)arg1;
- (void)resetSegment:(float)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)updateSegment:(float)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (id)initWithAbsMotion:(float)arg1 atTime:(CDStruct_1b6d18a9)arg2;

@end

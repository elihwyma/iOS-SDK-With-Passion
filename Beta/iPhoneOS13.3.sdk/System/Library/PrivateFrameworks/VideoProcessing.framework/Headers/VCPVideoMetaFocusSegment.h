/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPMetaSegment.h>

__attribute__((visibility("hidden")))
@interface VCPVideoMetaFocusSegment : VCPMetaSegment

{
    long long _focusStatus;
}

@property long long focusStatus;

- (void)resetSegment:(long long)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (id)initWithFocusStatus:(long long)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)updateSegment:(long long)arg1 atTime:(CDStruct_1b6d18a9)arg2;

@end

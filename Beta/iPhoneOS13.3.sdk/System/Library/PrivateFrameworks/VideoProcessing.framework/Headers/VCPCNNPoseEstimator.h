/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPCNNPoseEstimator : NSObject

+ (id)estimator;

- (float *)getInputBuffer;
- (int)computePoseScore:(float *)arg1;
- (int)detectPoseForFace:(struct CGRect)arg1 inBuffer:(struct __CVBuffer *)arg2 yaw:(long long *)arg3;

@end

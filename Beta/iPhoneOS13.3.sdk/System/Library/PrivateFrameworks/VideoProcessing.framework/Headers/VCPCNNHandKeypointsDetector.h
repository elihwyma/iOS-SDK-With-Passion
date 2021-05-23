/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPCNNHandKeypointsDetector : NSObject

+ (id)detector;

- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4;
- (int)copyImage:(struct __CVBuffer *)arg1 toData:(float *)arg2;
- (int)createInput:(float *)arg1 withBuffer:(struct __CVBuffer *)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 box:(id)arg5;
- (int)generateHandKeypoints:(struct CGPoint *)arg1;
- (int)cvtHeatmaps2Keypoints:(float *)arg1 outHeight:(int)arg2 outWidth:(int)arg3 outChannel:(int)arg4 keypoints:(struct CGPoint *)arg5;
- (int)handKeypointsDetection:(struct __CVBuffer *)arg1 box:(id)arg2 keypoints:(struct CGPoint *)arg3;

@end

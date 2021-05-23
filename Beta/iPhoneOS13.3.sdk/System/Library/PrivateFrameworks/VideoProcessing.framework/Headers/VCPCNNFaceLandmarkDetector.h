/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCPCNNFaceLandmarkDetector : NSObject

{
    NSMutableArray *_landmarks;
}

+ (id)detector;

- (id)landmarks;
- (float *)getInputBuffer;
- (int)computeLandmarks:(float *)arg1;
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withFaceBounds:(struct CGRect)arg2;

@end

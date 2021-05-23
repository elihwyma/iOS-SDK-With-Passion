/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPCNNSmileDetector : NSObject

+ (id)detector;

- (float *)getInputBuffer;
- (int)computeSmileScore:(float *)arg1;
- (int)detectSmileForFace:(struct CGRect)arg1 inBuffer:(struct __CVBuffer *)arg2 smile:(_Bool *)arg3;

@end

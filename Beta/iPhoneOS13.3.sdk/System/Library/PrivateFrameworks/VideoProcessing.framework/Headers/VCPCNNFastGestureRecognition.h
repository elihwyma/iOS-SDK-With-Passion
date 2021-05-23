/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPCNNFastGestureRecognition : NSObject

+ (id)detector;

- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4;
- (int)createModel:(int)arg1 srcWidth:(int)arg2;
- (int)getDetectionScore:(float *)arg1;
- (int)planDestroy;
- (int)copyImage:(struct __CVBuffer *)arg1 toData:(float *)arg2 withChunk:(int)arg3;
- (int)createInput:(float *)arg1 withBuffer:(struct __CVBuffer *)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4;
- (int)gestureDetection:(struct __CVBuffer *)arg1 score:(float *)arg2;

@end

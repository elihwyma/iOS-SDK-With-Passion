/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPImageAnalyzer.h>

__attribute__((visibility("hidden")))
@interface VCPImageFaceDetector : VCPImageAnalyzer

+ (id)faceDetector;

- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 flags:(unsigned long long *)arg2 results:(id *)arg3 cancel:(CDUnknownBlockType)arg4;
- (int)processTile:(struct __CVBuffer *)arg1 results:(id)arg2 cancel:(CDUnknownBlockType)arg3;
- (int)aggregateTileResults:(id)arg1 tileRect:(struct CGRect)arg2 imageSize:(struct CGSize)arg3 landscape:(_Bool)arg4 results:(id)arg5;
- (int)faceDetection:(struct __CVBuffer *)arg1 faces:(id)arg2 cancel:(CDUnknownBlockType)arg3;
- (_Bool)isDuplicate:(struct CGRect)arg1 withRect:(struct CGRect)arg2;

@end

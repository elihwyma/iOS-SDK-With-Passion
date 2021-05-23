/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class VCPCNNFastGestureRecognition;

@interface VCPPriorityAnalysis : NSObject

{
    _Bool _buttonPressed;
    _Bool _light;
    float _accumulateScore;
    int _frameInd;
    int _rotationAngle;
    int _sendStopSignalKTimes;
    struct Rotator *_rotator;
    struct EncodeStats *_stats;
    VCPCNNFastGestureRecognition *_fastGestureDetector;
}

+ (id)priorityAnalysis;

- (id)init;
- (void)dealloc;
- (int)fastSignLanguageDetection:(float *)arg1 ofPixelBuffer:(struct __CVBuffer *)arg2 withMetadata:(id)arg3;
- (int)calculatePriorityScore:(float *)arg1 ofPixelBuffer:(struct __CVBuffer *)arg2 withMetadata:(id)arg3;

@end

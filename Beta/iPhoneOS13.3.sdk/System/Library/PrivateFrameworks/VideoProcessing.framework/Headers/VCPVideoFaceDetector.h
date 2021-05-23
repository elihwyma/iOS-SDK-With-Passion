/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCPVideoFaceDetector : VCPVideoAnalyzer

{
    int _angle;
    CDStruct_1b6d18a9 _timeLastDetection;
    NSMutableDictionary *_activeFaces;
    NSDictionary *_results;
}

+ (id)faceDetectorWithTransform:(struct CGAffineTransform)arg1 withExistingFaceprints:(id)arg2 frameStats:(id)arg3 tracking:(_Bool)arg4 cancel:(CDUnknownBlockType)arg5;

- (id)results;
- (id)faceRanges;

@end

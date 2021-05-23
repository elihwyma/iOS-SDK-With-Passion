/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, VCPAudioAnalyzer, VCPFullVideoAnalyzer, VCPHomeKitMotionAnalyzer, VCPImageBlurAnalyzer, VCPLightMotionAnalyzer, VCPSceneChangeAnalyzer, VCPTrimAnalyzer, VCPVideoFaceMeshAnalyzer, VCPVideoFacePoseAnalyzer, VCPVideoFullFaceDetector;

@protocol OS_dispatch_queue;

@interface VCPCaptureAnalysisSession : NSObject

{
    unsigned long long _analysisTypes;
    VCPVideoFacePoseAnalyzer *_poseAnalyzer;
    VCPVideoFaceMeshAnalyzer *_meshAnalyzer;
    VCPFullVideoAnalyzer *_videoAnalysis;
    VCPImageBlurAnalyzer *_blurAnalyzer;
    VCPAudioAnalyzer *_audioAnalyzer;
    VCPVideoFullFaceDetector *_faceDetector;
    VCPSceneChangeAnalyzer *_sceneChangeAnalyzer;
    VCPLightMotionAnalyzer *_lightMotionAnalyzer;
    VCPTrimAnalyzer *_trimAnalyzer;
    VCPHomeKitMotionAnalyzer *_homeKitMotionAnalyzer;
    struct Rotator *_rotator;
    struct Rotator *_rotatorForFacePose;
    struct CGAffineTransform _preferredTransform;
    float _focalLengthInPixels;
    NSMutableDictionary *_aggregatedResults;
    int _rotationAngleForFacePose;
    int _preferredAngle;
    NSObject<OS_dispatch_queue> *_analysisQueue;
    _Bool _preWarmed;
}

@property (readonly) NSDictionary *aggregatedResults;

+ (id)analyzerForAnalysisTypes:(unsigned long long)arg1 withPreferredTransform:(struct CGAffineTransform)arg2 properties:(id)arg3;
+ (id)aggregateAnalysisForTypes:(unsigned long long)arg1 withFramesMeta:(id)arg2 properties:(id)arg3;

- (id)init;
- (void)dealloc;
- (_Bool)finalizeAnalysis;
- (int)prewarmWithProperties:(id)arg1;
- (id)analyzePixelBuffer:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 properties:(id)arg4 error:(id *)arg5;
- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 properties:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithAnalysisTypes:(unsigned long long)arg1 withPreferredTransform:(struct CGAffineTransform)arg2 withFocalLengthInPixels:(float)arg3 withAnalysisQueue:(id)arg4 withTurbo:(_Bool)arg5;
- (struct CGAffineTransform)transformForAngle:(int)arg1 pixelBuffer:(struct __CVBuffer *)arg2;
- (struct CGAffineTransform)flipTransform:(struct CGAffineTransform)arg1;
- (CDStruct_14d5dc5e)rotateTransform:(CDStruct_14d5dc5e)arg1 byAngle:(int)arg2;
- (int)analyzeFrameWithTimeRange:(CDStruct_e83c9415)arg1 analysisData:(id)arg2;
- (_Bool)shouldCutAt:(CDStruct_1b6d18a9)arg1 stillPTS:(CDStruct_1b6d18a9)arg2 withCut:(_Bool)arg3;
- (_Bool)updatePreferredTransform:(const struct CGAffineTransform *)arg1 properties:(id)arg2;
- (int)analyzeAudioBuffer:(struct opaqueCMSampleBuffer *)arg1;

@end

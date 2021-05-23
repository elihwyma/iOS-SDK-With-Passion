/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSMutableDictionary, VCPFrameAnalysisStats, VCPFrameScoreFilter;

__attribute__((visibility("hidden")))
@interface VCPFullVideoAnalyzer : VCPVideoAnalyzer

{
    struct EncodeAnalysis *_encodeAnalysis;
    struct PreEncodeAnalysis *_preencodeAnalysis;
    struct ObstructionAnalysis *_obstructionAnalysis;
    struct SceneAnalysis *_sceneAnalysis;
    struct MotionFilter *_motionFilter;
    struct MetaDataAnalysis *_metadataAnalysis;
    struct IrisAnalysis *_irisAnalysis;
    struct FrameBuffer _frameBuffer;
    struct Histogram _idealHistogram;
    _Bool _isTimelapse;
    _Bool _isIris;
    _Bool _isSlowMo;
    int _orientation;
    _Bool _finalized;
    _Bool _hasInterestingScene;
    _Bool _isCaptureAnalysis;
    NSMutableDictionary *_privateResults;
    VCPFrameAnalysisStats *_videoFrameAnalysis;
    VCPFrameScoreFilter *_trackScoreFilter;
    float _qualityScore;
    float _actionScore;
    float _interestingnessScore;
    float _obstructionScore;
    float _trackingScore;
}

@property float qualityScore;
@property float actionScore;
@property float interestingnessScore;
@property float obstructionScore;
@property float trackingScore;

+ (_Bool)useSceneprintInSceneAnalysis;

- (void)dealloc;
- (id)results;
- (id)initWithTransform:(struct CGAffineTransform)arg1;
- (id).cxx_construct;
- (int)process:(int)arg1;
- (int)seedAnalyzersWithPixelBuffer:(struct __CVBuffer *)arg1 startTime:(CDStruct_1b6d18a9)arg2;
- (void)reviseFrameTrackScore:(struct Frame *)arg1 saliencyRegions:(id)arg2;
- (void)processAndEstimateQualityScore:(struct Frame *)arg1;
- (float)computeExposureScoreOfFrame:(struct Frame *)arg1;
- (int)addSceneAnalysisResult:(id)arg1 to:(id)arg2 optional:(_Bool)arg3;
- (float)estimateQualityScore:(struct Frame *)arg1;
- (int)addResult:(struct __CFArray *)arg1 to:(id)arg2 forKey:(id)arg3 optional:(_Bool)arg4;
- (id)initWithVideoTrack:(id)arg1 withMetaOrientation:(id)arg2 withPrivateResults:(id)arg3 withFrameStats:(id)arg4 isTimelapse:(_Bool)arg5 isIris:(_Bool)arg6 irisPhotoOffsetSec:(float)arg7 irisPhotoExposureSec:(float)arg8 slowMoRate:(float)arg9;
- (void)prepareVideoAnalysisByScenes:(id)arg1;
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;
- (id)privateResults;
- (float)getSceneSwichFrequency;
- (void)setNextCaptureFrame:(struct __CVBuffer *)arg1;

@end

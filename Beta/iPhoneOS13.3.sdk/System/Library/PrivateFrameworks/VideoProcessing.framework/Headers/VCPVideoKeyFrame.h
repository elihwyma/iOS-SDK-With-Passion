/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCPVideoKeyFrame : NSObject

{
    float _subjectAction;
    float _cameraMotion;
    float _interestingness;
    float _obstruction;
    float _colorfulness;
    _Bool _isLivePhoto;
    _Bool _subMb;
    _Bool _isHeadingFrame;
    float _score;
    float _semanticScore;
    float _sharpness;
    float _faceSharpness;
    float _exposureScore;
    float _textureScore;
    float _overallFaceQualityScore;
    float _qualityScoreForLivePhoto;
    float _globalQualityScore;
    float _visualPleasingScore;
    float _penaltyScore;
    float _contentScore;
    float _humanPoseScore;
    float _humanActionScore;
    unsigned long long _statsFlags;
    NSMutableArray *_detectedFaces;
    NSMutableArray *_faceQualityScores;
    NSMutableDictionary *_frameResults;
    CDStruct_1b6d18a9 _timestamp;
}

@property (nonatomic) CDStruct_1b6d18a9 timestamp;
@property (nonatomic) float score;
@property (nonatomic) float semanticScore;
@property (nonatomic) float sharpness;
@property (nonatomic) float faceSharpness;
@property (nonatomic) float exposureScore;
@property (nonatomic) _Bool isHeadingFrame;
@property (nonatomic) float textureScore;
@property (nonatomic) unsigned long long statsFlags;
@property (retain, nonatomic) NSMutableArray *detectedFaces;
@property (retain, nonatomic) NSMutableArray *faceQualityScores;
@property (retain, nonatomic) NSMutableDictionary *frameResults;
@property (nonatomic) float overallFaceQualityScore;
@property (nonatomic) float qualityScoreForLivePhoto;
@property (nonatomic) float globalQualityScore;
@property (nonatomic) float visualPleasingScore;
@property (nonatomic) float penaltyScore;
@property (nonatomic) float contentScore;
@property (nonatomic) float humanPoseScore;
@property (nonatomic) float humanActionScore;

- (id)initWithLivePhoto:(_Bool)arg1;
- (void)copyFrom:(id)arg1;
- (float)computeGlobalQuality;
- (float)computeScoreFromColorfulness;
- (float)computeScoreFromExposure;
- (float)computeExpressionScore;
- (float)computeScoreFromAction;
- (void)computeGlobalQualityForLivePhoto;
- (float)computeVisualPleasingScore;
- (float)computePenaltyScore;
- (float)computeContentScore;
- (void)computeCurationScoreComponents;
- (void)storeFrameResults;
- (void)printStats;
- (int)loadKeyFrameResult:(id)arg1 timestamp:(CDStruct_1b6d18a9)arg2;
- (void)computeCurationScore;
- (_Bool)hasGoodSubjectAction;
- (void)resetStatsFlag;
- (void)setFaceStatsFlag:(_Bool)arg1 detectedFaces:(id)arg2;
- (void)setMotionStatsFlag:(_Bool)arg1 cameraMotion:(float)arg2 subjectAction:(float)arg3 interestingness:(float)arg4 obstruction:(float)arg5 colorfulness:(float)arg6 exposureScore:(float)arg7 humanActionStatsFlag:(_Bool)arg8 humanPoseScore:(float)arg9 humanActionScore:(float)arg10 subMb:(_Bool)arg11;

@end

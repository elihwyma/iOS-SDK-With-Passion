/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSDictionary, VCPFaceShapeModel, VCPLandmarkValidator, VCPRTLandmarkDetector;

@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCPVideoFaceMeshAnalyzer : NSObject

{
    int _faceCount;
    struct CGRect _faceBounds;
    _Bool _inDetectionMode;
    VCPRTLandmarkDetector *_lmDetector;
    VCPRTLandmarkDetector *_lmTracker;
    float *_prevLM;
    float *_curLM;
    int _detectionModeCounter;
    int _trackingModeCounter;
    int _lostTrackCounter;
    _Bool _angleStable;
    float _validationScore;
    _Bool _validateFailedOnce;
    NSObject<OS_dispatch_queue> *_validationQueue;
    NSObject<OS_dispatch_group> *_validationGroup;
    struct __CVBuffer *_valBuffer;
    struct __CVBuffer *_valBufferRotated;
    float *_valAngle;
    float *_valLM;
    MISSING_TYPE **_meshVertices;
    VCPFaceShapeModel *_shapeModel;
    VCPLandmarkValidator *_faceValidator[5];
    float _eulerAngle[3];
    float _focalLengthInPixels;
    float _uc;
    float _vc;
    _Bool _offline;
    _Bool _initialized;
    _Bool _bufferRotated;
    NSDictionary *_blendShapes;
    unsigned long long _vertexCount;
    CDStruct_14d5dc5e _pose;
}

@property (nonatomic, readonly) CDStruct_14d5dc5e pose;
@property (nonatomic, readonly) NSDictionary *blendShapes;
@property (nonatomic, readonly) unsigned long long vertexCount;
@property (nonatomic, readonly) const MISSING_TYPE **vertices;
@property (nonatomic, readonly) _Bool bufferRotated;

- (void)dealloc;
- (int)setFrame:(struct __CVBuffer *)arg1;
- (_Bool)isTracked;
- (_Bool)updateFocalLengthInPixels:(float)arg1;
- (id)initWithFocalLengthInPixels:(float)arg1 offline:(_Bool)arg2;
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withFaceRect:(struct CGRect)arg2 withRotation:(int)arg3 withTimestamp:(CDStruct_1b6d18a9)arg4;
- (void)makeValidationDecision;
- (void)updateIntrinsicWhenRotated;
- (int)checkResolutionChange:(struct __CVBuffer *)arg1 withRotation:(int)arg2;
- (int)validateFace:(struct __CVBuffer *)arg1 eulerAngles:(float *)arg2;
- (void)rotateLandmarks:(int)arg1 width:(int)arg2 height:(int)arg3 landmarks:(float *)arg4 numLandmarks:(int)arg5;
- (void)mapToCameraNegativeZ;

@end

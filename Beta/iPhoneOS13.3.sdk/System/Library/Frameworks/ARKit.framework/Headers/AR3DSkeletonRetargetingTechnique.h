/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARTechnique.h>

@class ARCoreRESkeletonResults, ARWorldTrackingPoseData, NSObject, NSUUID;

@protocol OS_dispatch_semaphore;

@interface AR3DSkeletonRetargetingTechnique : ARTechnique

{
    NSUUID *_skeletonIdentifier;
    struct shared_ptr<arkit::btr::BodyRegistration> _btr;
    struct shared_ptr<arkit::btr::ScaleCorrection> _scaler;
    struct array<arkit::btr::RegistrationData, 5> _last_btr_poses;
    _Bool _is_tracking;
    int _last_btr_poses_idx;
    float _estimatedScale;
    double _last_detection_timestamp;
    struct basic_ofstream<char, std::__1::char_traits<char>> _btrf;
    struct basic_ofstream<char, std::__1::char_traits<char>> _btrts;
    _Bool _automaticSkeletonScaleEstimationEnabled;
    ARCoreRESkeletonResults *_latestResults;
    NSObject<OS_dispatch_semaphore> *_resultSemaphore;
    ARWorldTrackingPoseData *_currentWorldTrackingPose;
    struct ARRigEvaluationData _evaluationRigData;
}

@property (retain, nonatomic) ARCoreRESkeletonResults *latestResults;
@property (nonatomic) struct ARRigEvaluationData evaluationRigData;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *resultSemaphore;
@property (retain, nonatomic) ARWorldTrackingPoseData *currentWorldTrackingPose;
@property (nonatomic) _Bool automaticSkeletonScaleEstimationEnabled;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id).cxx_construct;
- (id)processData:(id)arg1;
- (id)_retargetSkeleton:(id)arg1;
- (_Bool)_estimateCameraPoseFromMatchingImageData:(id)arg1 to3DData:(id)arg2 pCameraFromBody:(CDStruct_14d5dc5e *)arg3 pScaleOut:(float *)arg4;
- (id)processResultData:(id)arg1 timestamp:(double)arg2 context:(id)arg3;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;

@end

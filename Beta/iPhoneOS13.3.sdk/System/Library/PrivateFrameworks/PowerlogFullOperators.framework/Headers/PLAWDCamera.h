/*
 Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

#import <PowerlogFullOperators/PLAWDAuxMetrics.h>

@class PLEntryNotificationOperatorComposition;

@interface PLAWDCamera : PLAWDAuxMetrics

{
    _Bool _prevFrontCameraState;
    _Bool _prevBackCameraState;
    _Bool _prevTorchCameraState;
    PLEntryNotificationOperatorComposition *_cameraEventCallback;
    PLEntryNotificationOperatorComposition *_cameraEventCallbackTorch;
    double _frontCameraTimestamp;
    double _backCameraTimestamp;
    double _torchCameraTimestamp;
    long long _cameraSubmitCnt;
}

@property (retain) PLEntryNotificationOperatorComposition *cameraEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *cameraEventCallbackTorch;
@property _Bool prevFrontCameraState;
@property _Bool prevBackCameraState;
@property _Bool prevTorchCameraState;
@property double frontCameraTimestamp;
@property double backCameraTimestamp;
@property double torchCameraTimestamp;
@property long long cameraSubmitCnt;

+ (id)entryAggregateDefinitions;
+ (id)getSharedObjWithOperator:(id)arg1;
+ (id)entryAggregateDefinitionAwdCamera;

- (void)startMetricCollection:(id)arg1;
- (void)stopMetricCollection:(id)arg1;
- (_Bool)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (void)initCameraStats;
- (void)handleCameraCallback:(id)arg1;
- (void)handleTorchCameraCallback:(id)arg1;
- (void)resetCameraTable;
- (void)handleBackCameraCallback:(id)arg1;
- (void)handleFrontCameraCallback:(id)arg1;
- (void)addEntryToCameraTable:(id)arg1 withValue:(double)arg2;
- (void)reInitCameraStats;

@end

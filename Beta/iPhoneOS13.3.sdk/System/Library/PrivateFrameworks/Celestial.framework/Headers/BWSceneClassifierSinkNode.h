/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWSinkNode.h>

@class BWFigVideoCaptureDevice, BWInferenceResult, NSArray, NSObject, NSString;

@protocol BWQRCodeSceneObserver, OS_dispatch_queue;

@interface BWSceneClassifierSinkNode : BWSinkNode

{
    CDStruct_08002bce _expectedVersion;
    struct os_unfair_lock_s _resultLock;
    BWInferenceResult *_mostRecentSmartCameraResult;
    NSObject<OS_dispatch_queue> *_deviceQueue;
    BWFigVideoCaptureDevice *_device;
    id <BWQRCodeSceneObserver> _qrCodeSceneObserver;
    int _maxDebugOverlaySceneCount;
}

@property (nonatomic) id <BWQRCodeSceneObserver> qrCodeSceneObserver;
@property (readonly) NSArray *sceneConfidences;
@property (readonly) NSString *brightStageSceneConfidence;
@property (readonly) NSString *sunsetSunriseSceneConfidence;
@property (readonly) NSString *petSceneConfidence;
@property (readonly) NSString *babySceneConfidence;
@property (readonly) NSString *qrSceneConfidence;
@property (readonly) NSString *documentSceneConfidence;

+ (void)initialize;

- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (id)initWithCaptureDevice:(id)arg1 version:(CDStruct_08002bce)arg2 sinkID:(id)arg3;
- (id)_stringRepresentationOfMostRecentInferenceForKey:(id)arg1;

@end

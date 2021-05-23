/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class NSObject;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BWFaceTrackingNode : BWNode

{
    struct CVAFaceKit *_faceKitRef;
    struct OpaqueFigCaptureISPProcessingSession *_processingSession;
    struct os_unfair_lock_s _processingLock;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_semaphore> *_processingSemaphore;
    _Bool _processing;
    struct opaqueCMSimpleQueue *_nextSbufQueue;
    _Bool _setupDone;
    _Bool _structuredLightOccluded;
    _Bool _frontCamera;
    int _orientation;
    _Bool _mirrored;
    int _faceKitMachThreadPriority;
    _Bool _faceKitRGBOnly;
    int _faceKitMaxFaces;
    _Bool _faceKitUsesFaceRecognition;
    _Bool _addMesh;
    _Bool _addDebugInfo;
}

+ (void)initialize;

- (void)dealloc;
- (int)orientation;
- (void)setOrientation:(int)arg1;
- (id)nodeType;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)setMirrored:(_Bool)arg1;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (_Bool)mirroringEnabled;
- (id)initWithProcessingSession:(struct OpaqueFigCaptureISPProcessingSession *)arg1 figThreadPriority:(unsigned int)arg2 useDepth:(_Bool)arg3 queueDepth:(int)arg4;
- (void)setFrontCamera:(_Bool)arg1;
- (void)setMaxFaces:(int)arg1;
- (void)setUsesFaceRecognition:(_Bool)arg1;
- (int)_setupCVA;
- (void)_startProcessingSampleSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)frontCamera;
- (int)maxFaces;
- (_Bool)usesFaceRecognition;

@end

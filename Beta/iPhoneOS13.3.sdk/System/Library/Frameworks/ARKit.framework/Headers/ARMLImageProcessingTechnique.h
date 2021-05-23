/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARImageBasedTechnique.h>

@class AREspressoInputBuffer, NSArray, NSObject, NSString;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ARMLImageProcessingTechnique : ARImageBasedTechnique

{
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_semaphore> *_processingSemaphore;
    struct os_unfair_lock_s _prepLock;
    AREspressoInputBuffer *_espressoInputBuffer_t;
    struct os_unfair_lock_s _espressoInputBufferLock;
    void *_espressoContext;
    void *_espressoPlan;
    CDStruct_2bc666a5 _espressoNetwork;
    struct vector<espresso_buffer_t, std::__1::allocator<espresso_buffer_t>> _espressoOutputTensors;
    _Bool _hasBegunPrep;
    _Bool _failedToLoadNetwork;
    struct __CVPixelBufferPool *_bgraPixelBufferPool;
    NSString *_previous_network_configuration;
    int _lockedOrientation;
    _Bool _prepComplete;
    NSString *_networkFilePath;
    NSArray *_inputTensorNames;
    NSArray *_outputTensorNames;
    struct CGSize _networkInputScaleBeforeRotation;
}

@property _Bool prepComplete;
@property (retain, nonatomic) NSString *networkFilePath;
@property (nonatomic, readonly) NSArray *inputTensorNames;
@property (nonatomic, readonly) NSArray *outputTensorNames;
@property (nonatomic, readonly) struct CGSize networkInputScaleBeforeRotation;
@property (nonatomic, readonly) _Bool failedToLoadNetwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isBusy;

+ (_Bool)isSupported;

- (void)dealloc;
- (id).cxx_construct;
- (void)prepare;
- (void *)espressoPlan;
- (CDStruct_2bc666a5)espressoNetwork;
- (id)processData:(id)arg1;
- (id)initWithDispatchQueue:(id)arg1 inputTensorNames:(id)arg2 outputTensorNames:(id)arg3 networkInputScaleBeforeRotation:(struct CGSize)arg4 networkFilePath:(id)arg5;
- (void)_startLoadingMLModelSignpost;
- (void)_endLoadingMLModelSignpost;
- (void)_startMLProcessingSignpostWithTimestamp:(double)arg1;
- (void)_endMLProcessingSignpostWithTimestamp:(double)arg1;
- (void)_startMLRunNetworkSignpostWithTimestamp:(double)arg1;
- (void)_endMLRunNetworkSignpostWithTimestamp:(double)arg1;
- (void)_startMLCreateResultSignpostWithTimestamp:(double)arg1 orientation:(long long)arg2 outputSize:(struct CGSize)arg3;
- (void)_endMLCreateResultSignpostWithTimestamp:(double)arg1;
- (void)changeEspressoConfig:(id)arg1;
- (double)requiredTimeInterval;
- (CDStruct_b527887c)networkInputParams;
- (int)defaultEngine;
- (id)createResultDataFromTensors:(CDStruct_cf098810 *)arg1 numberOfOutputTensors:(unsigned long long)arg2 imageDataForNeuralNetwork:(id)arg3 inputImageData:(id)arg4 rotationNeeded:(long long)arg5 regionOfInterest:(struct CGSize)arg6;
- (id)resultDataClasses;
- (_Bool)isLoadedModelVersionCorrect:(id)arg1;
- (CDStruct_cf098810 *)espressoOutputTensorsData;
- (unsigned long long)requiredSensorDataTypes;
- (id)processEspressoTensor:(id)arg1;
- (long long)captureBehavior;
- (long long)_getDeviceOrientation;
- (void)lockOrientation:(long long)arg1;
- (id)networkModesForOrientation:(long long)arg1;
- (_Bool)preProcessNetworkInputImage:(struct __CVBuffer *)arg1;
- (unsigned long long)espressoOutputTensorsSize;
- (id)runNeuralNetworkWithImageData:(id)arg1 originalImageData:(id)arg2 regionOfInterest:(struct CGSize)arg3 rotationOfResultTensor:(long long)arg4;
- (long long)numberOfInputChannelsToExpectInNetwork;
- (void)networkModeDidChange:(id)arg1 toMode:(id)arg2;
- (id)defaultEngineName;
- (void)loadMLWithPath:(id)arg1 networkMode:(id)arg2;
- (void)_asynchronousProcessDownSampledImage:(id)arg1;
- (void)_asynchronousProcessEspressoTensor:(id)arg1;
- (id)_resampleImage:(id)arg1 rotationOfResultTensor:(long long)arg2 networkInputSize:(struct CGSize)arg3;
- (void)_runNeuralNetworkAndPushResult:(id)arg1 originalImageData:(id)arg2 regionOfInterest:(struct CGSize)arg3 rotationOfResultTensor:(long long)arg4;
- (id)_getAREspressoInputBuffer;
- (id)processImageDataThroughNeuralNetwork:(id)arg1 originalImageData:(id)arg2 regionOfInterest:(struct CGSize)arg3 rotationOfResultTensor:(long long)arg4;
- (id)processingSemaphore;
- (long long)orientationForInitializingEspresso;

@end

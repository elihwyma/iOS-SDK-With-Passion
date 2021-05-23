/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface BWMeaningfulSubjectTrackingContext : NSObject

{
    CDStruct_35801271 result;
    struct TtTrkRpnContext *handle;
    struct {
        unsigned int originalImageWidth;
        unsigned int originalImageHeight;
        unsigned char restart;
    } control;
    struct {
        unsigned char doDaOnly;
    } config;
    struct {
        unsigned char data[1864];
    } state;
    struct {
        unsigned int maxResultCount;
        unsigned int maxTrackCount;
        unsigned int scaleCount;
        unsigned int instanceCropWidth;
        unsigned int instanceCropHeight;
        unsigned int instanceCropChannels;
        unsigned int instanceCropBatchBytes;
        unsigned int exemplarCropWidth;
        unsigned int exemplarCropHeight;
        unsigned int exemplarCropChannels;
        unsigned int exemplarCropBatchBytes;
        unsigned int xcorrNetOutWidths[2];
        unsigned int xcorrNetOutHeights[2];
        unsigned int xcorrNetOutChannels[2];
        unsigned int xcorrNetOutBatchBytes[2];
        int xcorrNetOutPixelFormat;
        unsigned int templateNetOutWidths[2];
        unsigned int templateNetOutHeights[2];
        unsigned int templateNetOutChannels[2];
        unsigned int templateNetOutBatchBytes[2];
        int templateNetOutPixelFormat;
        char xcorrNetInputNames[3][32];
    } params;
    struct {
        void *instanceCrop;
        unsigned int instanceCropBytes;
        void *exemplarCrop;
        unsigned int exemplarCropBytes;
        void *templateKernels[2];
        unsigned int templateKernelsBytes[2];
        void *xcorrOutputs[2];
        unsigned int xcorrOutputsBytes[2];
    } networkBufferPointers;
    struct {
        CDStruct_0822611a instanceNetControl;
        CDStruct_0822611a exemplarNetControl;
        unsigned char newInstanceNetControl;
        unsigned char newExemplarNetControl;
    } networkInputCropControls;
    struct {
        CDStruct_bc80a2e6 instanceCrop;
        CDStruct_bc80a2e6 exemplarCrop;
        CDStruct_bc80a2e6 templateKernels[2];
        CDStruct_bc80a2e6 xcorrOutputs[2];
    } networkBuffers;
    CDStruct_d69d7d91 *networkCropBuffer;
    void *examplePlan;
    CDStruct_2bc666a5 exampleNetwork;
    CDStruct_0a65202a exampleRegressionOutputTensor;
    CDStruct_0a65202a exampleClassificationOutputTensor;
    void *trackingPlan;
    CDStruct_2bc666a5 trackingNetwork;
    CDStruct_0a65202a trackingRegressionInputTensor;
    CDStruct_0a65202a trackingClassificationInputTensor;
    CDStruct_0a65202a trackingRegressionOutputTensor;
    CDStruct_0a65202a trackingClassificationOutputTensor;
}

+ (void)initialize;

- (void)dealloc;
- (id)initWithExampleNetworkURL:(id)arg1 trackingNetworkURL:(id)arg2 context:(void **)arg3 priority:(int)arg4 sharedIntermediateBufferPlan:(void *)arg5 cropBuffer:(CDStruct_d69d7d91 *)arg6;

@end

/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <NSObject.h>

@class MLPDeviceHandler, MPSImageCopyToMatrix, MPSMatrixCopyToImage, MontrealNNModelOptimizerParam, NSArray, NSDictionary;

@interface MLPNetwork : NSObject

{
    _Bool _computeLossOnInference;
    NSDictionary *_options;
    NSArray *_layers;
    unsigned long long _networkType;
    MLPDeviceHandler *_deviceHandler;
    MPSImageCopyToMatrix *_i2mKernel;
    MPSMatrixCopyToImage *_m2iKernel;
    MontrealNNModelOptimizerParam *_optimizerParams;
    unsigned long long _inputLength;
    unsigned long long _inputHeight;
    unsigned long long _inputChannels;
    unsigned long long _batchSize;
    unsigned long long _lossBatchSize;
}

@property (retain) NSDictionary *options;
@property (retain) NSArray *layers;
@property unsigned long long networkType;
@property (retain) MLPDeviceHandler *deviceHandler;
@property (retain) MPSImageCopyToMatrix *i2mKernel;
@property (retain) MPSMatrixCopyToImage *m2iKernel;
@property (retain) MontrealNNModelOptimizerParam *optimizerParams;
@property unsigned long long inputLength;
@property unsigned long long inputHeight;
@property unsigned long long inputChannels;
@property unsigned long long batchSize;
@property unsigned long long lossBatchSize;
@property _Bool computeLossOnInference;

+ (id)networkWithLayers:(id)arg1 inputLength:(unsigned long long)arg2 inputHeight:(unsigned long long)arg3 inputChannels:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 lossBatchSize:(unsigned long long)arg6 options:(id)arg7 deviceHandler:(id)arg8 optimizerParams:(id)arg9;

- (id)initWithLayers:(id)arg1;
- (void)createLayerKernels;
- (void *)generateModelContainer;
- (id)initWithNetworkType:(unsigned long long)arg1 layers:(id)arg2;
- (void)runTraining:(id)arg1 databatch:(id)arg2 iteration:(unsigned long long)arg3 lossCallback:(CDUnknownBlockType)arg4 semaphore:(id)arg5;
- (unsigned long long)runInference:(id)arg1 databatch:(id)arg2 inferredResult:(id)arg3 semaphore:(id)arg4;
- (id)computeInference:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <NSObject.h>

@protocol MTLCommandQueue, MTLDevice;

@interface MLPDeviceHandler : NSObject

{
    struct mersenne_twister_engine<unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253> weightSeed;
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    unsigned long long _dataLayout;
}

@property (readonly) id <MTLDevice> device;
@property (readonly) id <MTLCommandQueue> commandQueue;
@property (readonly) unsigned long long dataLayout;

- (id).cxx_construct;
- (void)importDataFromGPU:(id)arg1 cmdBuf:(id)arg2;
- (id)initWithDataLayout:(id)arg1;
- (id)weightMatrixWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 stdDev:(float)arg3 initialValues:(const void *)arg4 columnMajor:(_Bool)arg5;
- (id)imageFromData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 featureChannels:(unsigned long long)arg4;
- (id)matrixToVector:(id)arg1;
- (id)tempMatrixWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 cmdBuf:(id)arg3;
- (id)imageFromMatrix:(id)arg1 m2iKernel:(id)arg2 cmdBuf:(id)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 featureChannels:(unsigned long long)arg6;
- (void)sendDataToGPU:(id)arg1;
- (float)uniformRandWithParamA:(float)arg1 paramB:(float)arg2;
- (struct NSArray *)imageBatchFromMatrix:(id)arg1 m2iKernel:(id)arg2 cmdBuf:(id)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 channels:(unsigned long long)arg6;
- (id)tempMatrixFromImages:(struct NSArray *)arg1 i2mKernel:(id)arg2 cmdBuf:(id)arg3;
- (id)deduceDevice;
- (id)matrixWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 cmdBuf:(id)arg3;
- (id)weightMatrixFixedRowBytesWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2;
- (id)biasVectorWithLength:(unsigned long long)arg1 stdDev:(float)arg2 values:(const void *)arg3;
- (id)matrixFromImages:(struct NSArray *)arg1 i2mKernel:(id)arg2 cmdBuf:(id)arg3;
- (id)vectorWithLength:(unsigned long long)arg1 cmdBuf:(id)arg2;

@end

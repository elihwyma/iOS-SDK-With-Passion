/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface ShotflowNetwork : NSObject

{
    CDStruct_2bc666a5 _espressoNetwork;
    void *_espressoPlan;
    void *_espressoContext;
    struct vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t>>> _logitsPosOutputs;
    struct vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t>>> _logitsNegOutputs;
    struct vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t>>> _offsetsOutputs;
    struct vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t>>> _objectnessOutputs;
    struct vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t>>> _rollOutputs;
    struct vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t>>> _yawOutputs;
    unsigned long long _currentNetworkWidth;
    unsigned long long _currentNetworkHeight;
    _Bool _releaseEspressoContext;
    _Bool _releaseEspressoPlan;
    _Bool isAnchorSquare[10];
    NSArray *_filterThreshold;
    float _defaultBoxSizes[6][10][2];
    float _threshold;
    unsigned long long _preferredSmallSide;
}

@property (nonatomic, readonly) unsigned long long preferredSmallSide;
@property (nonatomic) float threshold;

+ (float)inputScale;
+ (const vector_7584168e *)strides;
+ (id)inputLayerName;
+ (float)inputImageMinDimension;
+ (float)inputImageMaxDimension;
+ (float)inputImageAspectRatio;
+ (float)nonSquareYawDefault;
+ (float)nonSquareRollDefault;
+ (unsigned long long)numberBinsYaw;
+ (unsigned long long)numberBinsRoll;
+ (_Bool)inputBGR;
+ (tuple_8621cb4d)inputBiasRGB;
+ (const vector_7584168e *)defaultBoxesSides;
+ (id)processingDeviceNetworkWithModelPath:(id)arg1 threshold:(float)arg2 preferredDeviceID:(int)arg3 engineID:(int)arg4 storageType:(int)arg5;
+ (id)processingDeviceDetectorWithEspressoNetwork:(CDStruct_2bc666a5)arg1 espressoPlan:(void *)arg2 threshold:(float)arg3;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithModelPath:(id)arg1 espressoEngineID:(int)arg2 espressoDeviceID:(int)arg3 espressoStorageType:(int)arg4 threshold:(float)arg5;
- (id)initWithEspressoNetwork:(CDStruct_2bc666a5)arg1 espressoPlan:(void *)arg2 threshold:(float)arg3;
- (void)initializeEspressoResourcesWithModelPath:(id)arg1 espressoEngineID:(int)arg2 espressoDeviceID:(int)arg3 espressoStorageType:(int)arg4;
- (void)initializeBuffers;
- (int)setInputShape:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)runNetwork:(struct vImage_Buffer)arg1 inputIsBGR:(_Bool)arg2;
- (id)processVImage:(struct vImage_Buffer)arg1 inputIsBGR:(_Bool)arg2;
- (id)resizeAndProcessVImage:(struct vImage_Buffer)arg1 inputIsBGR:(_Bool)arg2;

@end

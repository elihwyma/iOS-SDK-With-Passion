/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSArray, ShotflowNetwork;

__attribute__((visibility("hidden")))
@interface ShotflowDetector : NSObject

{
    float _nmsThreshold;
    ShotflowNetwork *_network;
    float _osfsThreshold;
    float _osfsSizeRatio;
    float _olmcsThreshold;
    int _olmcsMergeCountDelta;
    float _smartThreshold;
    float _smartDistanceFactor;
    NSArray *_filterThreshold;
}

@property (nonatomic) float threshold;
@property (retain, nonatomic) NSArray *filterThreshold;
@property (nonatomic) float nmsThreshold;
@property (nonatomic) float osfsThreshold;
@property (nonatomic) float osfsSizeRatio;
@property (nonatomic) float olmcsThreshold;
@property (nonatomic) int olmcsMergeCountDelta;
@property (nonatomic) float smartThreshold;
@property (nonatomic) float smartDistanceFactor;

+ (struct CGSize)inputImageSize;
+ (id)inputLayerName;
+ (id)modelName;
+ (float)inputImageMinDimension;
+ (float)inputImageMaxDimension;
+ (float)inputImageAspectRatio;
+ (id)supportedLabelKeys;
+ (id)processingDeviceDetectorWithModelPath:(id)arg1 networkThreshold:(float)arg2 filterThreshold:(id)arg3 preferredDeviceID:(int)arg4 engineID:(int)arg5 storageType:(int)arg6;
+ (id)processingDeviceDetectorWithModelPath:(id)arg1 preferredDeviceID:(int)arg2 engineID:(int)arg3 storageType:(int)arg4;
+ (id)processingDeviceDetectorWithEspressoNetwork:(CDStruct_2bc666a5)arg1 espressoPlan:(void *)arg2 networkThreshold:(float)arg3 filterThreshold:(id)arg4;
+ (id)processingDeviceDetectorWithEspressoNetwork:(CDStruct_2bc666a5)arg1 espressoPlan:(void *)arg2;
+ (float)networkThreshold;
+ (struct CGSize)getSuggestedImageSize:(struct CGSize)arg1;

- (id)initWithNetwork:(id)arg1 filterThreshold:(id)arg2;
- (id)initWithNetwork:(id)arg1;
- (id)overlappingSmallFacesSuppression:(id)arg1;
- (id)overlappingLowMergeCountSuppression:(id)arg1;
- (id)mergeBoxes:(id)arg1;
- (id)smartMergeBoxes:(id)arg1;
- (id)nmsBoxes:(id)arg1;
- (id)sortBoxes:(id)arg1 filterThresholdIndex:(unsigned long long)arg2;
- (id)filterBoxes:(id)arg1;
- (id)detect:(const struct vImage_Buffer *)arg1 inputIsBGR:(_Bool)arg2;
- (id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;
- (id)detectAndProcessObjects:(const struct vImage_Buffer *)arg1 inputIsBGR:(_Bool)arg2;
- (id)enforceSquareFaces:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;

@end

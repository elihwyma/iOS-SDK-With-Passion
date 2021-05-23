/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARMLImageProcessingTechnique.h>

@class MISSING_TYPE, NSString;

@interface AR3DSkeletonLiftingTechnique : ARMLImageProcessingTechnique

{
    NSString *_inputTensorName;
}

+ (_Bool)_adjustBoneLength:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
+ (void)_transformRelativeToHip:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;

- (id)init;
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
- (unsigned long long)requiredSensorDataTypes;
- (id)processEspressoTensor:(id)arg1;

@end

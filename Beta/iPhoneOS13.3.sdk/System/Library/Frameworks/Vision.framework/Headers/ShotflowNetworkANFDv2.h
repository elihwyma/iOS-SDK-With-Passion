/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/ShotflowNetwork.h>

__attribute__((visibility("hidden")))
@interface ShotflowNetworkANFDv2 : ShotflowNetwork

+ (struct CGSize)inputImageSize;
+ (id)modelName;
+ (float)nonSquareYawDefault;
+ (float)nonSquareRollDefault;
+ (const vector_eb9481f9 *)importantClasses;
+ (_Bool)poseSquare;
+ (unsigned long long)mumberPosClasses;
+ (unsigned long long)mumberBinsNegativeMaxout;
+ (const vector_7584168e *)ratios;
+ (const vector_7584168e *)cellStartsX;
+ (const vector_7584168e *)cellStartsY;
+ (const vector_7584168e *)objectnessFilterThresholds;
+ (unsigned long long)numberMaxoutLayers;
+ (_Bool)hasObjectnessOutputs;

- (id)initWithModelPath:(id)arg1 espressoEngineID:(int)arg2 espressoDeviceID:(int)arg3 espressoStorageType:(int)arg4 threshold:(float)arg5;
- (void)initializeBuffers;

@end

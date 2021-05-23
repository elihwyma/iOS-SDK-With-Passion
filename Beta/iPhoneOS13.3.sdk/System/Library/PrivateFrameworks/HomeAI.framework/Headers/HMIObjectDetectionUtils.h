/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <Foundation/NSObject.h>

@interface HMIObjectDetectionUtils : NSObject

+ (void)nmsMultiClass:(id)arg1 output:(id)arg2 withThreshold:(double)arg3;
+ (void)nonMaximumSuppression:(id)arg1 output:(id)arg2 withThreshold:(double)arg3;
+ (float)intersectionOverUnion:(struct CGRect)arg1 b:(struct CGRect)arg2;
+ (id)convertObjectDetections:(id)arg1 cropRect:(struct CGRect)arg2 originalImageSize:(struct CGSize)arg3;

@end

/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNDebugHelpers : NSObject

+ (float)computeNormalizedCosineDistanceOfFaceprint:(id)arg1 toFaceprint:(id)arg2;
+ (_Bool)doesAreaOverlapSignificantlyBetweenRect:(struct CGRect)arg1 andOtherRect:(struct CGRect)arg2;
+ (_Bool)doesAreaOverlapBetweenRect:(struct CGRect)arg1 andOtherRect:(struct CGRect)arg2 withOverlapRatioGreaterThan:(double)arg3;

@end

/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@interface MathUtility : NSObject

+ (unsigned int)getMegabytesSignificantFiguresHistogramBinIndexForBytes:(unsigned long long)arg1;
+ (double)computeNewMeanFromValue:(double)arg1 currentMean:(double)arg2 currentCount:(unsigned long long)arg3;
+ (double)computeNewVarianceFromValue:(double)arg1 currentMean:(double)arg2 currentCount:(unsigned long long)arg3 currentVariance:(double)arg4;

@end

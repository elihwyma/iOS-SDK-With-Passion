/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMDataRegressionModel.h>

@interface AXMDataRegressionModelLogarithmic : AXMDataRegressionModel

- (id)modelDescription;
- (CDUnknownBlockType)modelFunction;
- (int)modelParameterCount;
- (void)getInitialParams:(double *)arg1;
- (id)partialDerivatives;
- (id)modelFunctionStringForParameters:(double *)arg1 significantFigures:(int)arg2;

@end

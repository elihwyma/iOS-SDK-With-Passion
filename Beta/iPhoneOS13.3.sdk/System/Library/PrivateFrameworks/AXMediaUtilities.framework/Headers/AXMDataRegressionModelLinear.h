/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMDataRegressionModel.h>

@interface AXMDataRegressionModelLinear : AXMDataRegressionModel

{
    double _rSquared;
}

@property (nonatomic, readonly) double rSquared;

- (id)modelDescription;
- (CDUnknownBlockType)modelFunction;
- (int)modelParameterCount;
- (void)getInitialParams:(double *)arg1;
- (id)partialDerivatives;
- (id)modelFunctionStringForParameters:(double *)arg1 significantFigures:(int)arg2;
- (double)fitDataWithModelParams:(double *)arg1 finalParams:(double *)arg2;

@end

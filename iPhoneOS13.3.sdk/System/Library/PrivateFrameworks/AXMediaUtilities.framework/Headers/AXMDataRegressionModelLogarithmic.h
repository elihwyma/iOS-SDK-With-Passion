//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMDataRegressionModel.h>

@interface AXMDataRegressionModelLogarithmic : AXMDataRegressionModel
{
}

- (id)modelFunctionStringForParameters:(double )arg1 significantFigures:(int)arg2;
- (id)partialDerivatives;
- (void)getInitialParams:(double )arg1;
- (int)modelParameterCount;
- (id /* CDUnknownBlockType */)modelFunction;
- (id)modelDescription;

@end


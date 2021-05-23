/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface AXMDataRegressionModel : NSObject

{
    double _error;
    double _score;
    double *_bestFitParameters;
    double *_x;
    double *_y;
    int _n;
    _Bool _isDisqualified;
    int _iterations;
}

@property (nonatomic, readonly) _Bool dataSatisfiesInitialConditions;
@property (nonatomic, readonly) NSString *modelDescription;
@property (nonatomic, readonly) double error;
@property (nonatomic, readonly) double score;
@property (nonatomic) _Bool isDisqualified;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) double *bestFitParameters;
@property (nonatomic, readonly) int modelParameterCount;
@property (nonatomic, readonly) CDUnknownBlockType modelFunction;
@property (nonatomic, readonly) NSArray *partialDerivatives;
@property (nonatomic, readonly) int iterations;
@property (nonatomic, readonly) double *x;
@property (nonatomic, readonly) double *y;
@property (nonatomic, readonly) int n;

+ (id)getModelForX:(double *)arg1 y:(double *)arg2 n:(int)arg3;

- (void)dealloc;
- (void)getInitialParams:(double *)arg1;
- (id)modelFunctionStringForParameters:(double *)arg1 significantFigures:(int)arg2;
- (void)sortDataPoints;
- (void)getSMA:(double *)arg1 lookback:(int)arg2;
- (void)disqualifyModelIfNecessary;
- (void)getResidualsVector:(double *)arg1 result:(double *)arg2;
- (void)computeScore;
- (double)fitDataWithModelParams:(double *)arg1 finalParams:(double *)arg2;
- (id)initWithXValues:(double *)arg1 yValues:(double *)arg2 count:(int)arg3;
- (void)getJacobianForParameters:(double *)arg1 gradient:(double *)arg2 result:(double *)arg3;
- (void)getDiagonal:(double *)arg1 size:(int)arg2 result:(double *)arg3;
- (int)getMatrixInverse:(double *)arg1 size:(int)arg2 pivot:(int *)arg3 tmp:(double *)arg4 result:(double *)arg5;
- (double)magnitude:(double *)arg1 size:(int)arg2;
- (void)getGradientForX:(double)arg1 parameterValues:(double *)arg2 result:(double *)arg3;
- (void)printMatrix:(double *)arg1 rows:(int)arg2 cols:(int)arg3;
- (void)getIdentityMatrixWithSize:(int)arg1 scalar:(double)arg2 result:(double *)arg3;
- (double)roundNumber:(double)arg1 withSignificantFigures:(unsigned long long)arg2;

@end

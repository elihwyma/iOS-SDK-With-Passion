/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class AXMDataRegressionModel, NSArray, NSNumberFormatter, NSString;

@protocol AXMDataSummaryCategoryNameProvider;

@interface AXMDataSummary : NSObject

{
    NSArray *_axisTitles;
    NSArray *_xValues;
    NSArray *_yValues;
    AXMDataRegressionModel *_regressionModel;
    unsigned long long _n;
    double _r;
    double _rSquared;
    double _minX;
    double _maxX;
    double _meanX;
    double _varianceX;
    double _minY;
    double _maxY;
    double _meanY;
    double _varianceY;
    double _covariance;
    double _slope;
    double _intercept;
    NSArray *_residuals;
    NSArray *_outliers;
    NSObject<AXMDataSummaryCategoryNameProvider> *_categoryNameDelegate;
    NSNumberFormatter *_numberFormatter;
}

@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (nonatomic, readonly) NSArray *axisTitles;
@property (nonatomic, readonly) NSArray *xValues;
@property (nonatomic, readonly) NSArray *yValues;
@property (nonatomic, readonly) AXMDataRegressionModel *regressionModel;
@property (nonatomic, readonly) unsigned long long n;
@property (nonatomic, readonly) double r;
@property (nonatomic, readonly) double rSquared;
@property (nonatomic, readonly) double minX;
@property (nonatomic, readonly) double maxX;
@property (nonatomic, readonly) double meanX;
@property (nonatomic, readonly) double varianceX;
@property (nonatomic, readonly) double minY;
@property (nonatomic, readonly) double maxY;
@property (nonatomic, readonly) double meanY;
@property (nonatomic, readonly) double varianceY;
@property (nonatomic, readonly) double covariance;
@property (nonatomic, readonly) double slope;
@property (nonatomic, readonly) double intercept;
@property (nonatomic, readonly) NSArray *residuals;
@property (nonatomic, readonly) NSArray *outliers;
@property (weak, nonatomic) NSObject<AXMDataSummaryCategoryNameProvider> *categoryNameDelegate;
@property (nonatomic, readonly) NSString *modelDescription;
@property (nonatomic, readonly) NSString *slopeDescription;
@property (nonatomic, readonly) NSString *confidenceDescription;
@property (nonatomic, readonly) NSString *minValueDescription;
@property (nonatomic, readonly) NSString *maxValueDescription;
@property (nonatomic, readonly) NSString *meanValueDescription;
@property (nonatomic, readonly) NSString *medianValueDescription;
@property (nonatomic, readonly) NSString *outliersDescription;
@property (nonatomic, readonly) NSString *bestFitCurveEquation;
@property (nonatomic, readonly) NSString *fullDescription;
@property (nonatomic, readonly) NSString *simpleDescription;
@property (nonatomic, readonly) NSString *numericalDescription;

- (id)description;
- (void)compute;
- (void)getValues:(double *)arg1 fromNSNumberArray:(id)arg2;
- (void)setRegressionModel:(id)arg1;
- (id)descriptionForXValue:(double)arg1;
- (id)stringForComponents:(id)arg1;
- (void)computeRanges;
- (void)computeMeans;
- (void)computeCovariance;
- (void)computeVariances;
- (void)computeR;
- (void)computeLinearRegression;
- (void)computeResiduals;
- (void)computeOutliers;
- (double)getMean:(id)arg1;
- (double)getVariance:(id)arg1;
- (double)positionForXAxisValue:(double)arg1;
- (id)initWithAxisTitles:(id)arg1 xValues:(id)arg2 yValues:(id)arg3;
- (void)computeRegressionModel:(CDUnknownBlockType)arg1;
- (double)getMedian:(id)arg1;
- (double)positionForYAxisValue:(double)arg1;

@end

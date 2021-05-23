/*
 Image: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface HAMenstrualAlgorithmsPrediction : NSObject

{
    _Bool _isOngoingMenstruation;
    unsigned int _julianDayOfWindowStart;
    NSArray *_startProbability;
    NSArray *_endProbability;
    NSArray *_convolvedProbability;
    double _startProbabilityMean;
    double _endProbabilityMean;
    double _convolvedProbabilityMean;
    double _startProbabilityStdDev;
    double _endProbabilityStdDev;
    double _convolvedProbabilityStdDev;
    struct _NSRange _lowRange;
}

@property (nonatomic) unsigned int julianDayOfWindowStart;
@property (retain, nonatomic) NSArray *startProbability;
@property (retain, nonatomic) NSArray *endProbability;
@property (retain, nonatomic) NSArray *convolvedProbability;
@property (nonatomic) double startProbabilityMean;
@property (nonatomic) double endProbabilityMean;
@property (nonatomic) double convolvedProbabilityMean;
@property (nonatomic) double startProbabilityStdDev;
@property (nonatomic) double endProbabilityStdDev;
@property (nonatomic) double convolvedProbabilityStdDev;
@property (nonatomic) struct _NSRange lowRange;
@property (nonatomic) _Bool isOngoingMenstruation;

@end

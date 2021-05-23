/*
 Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

#import <Foundation/NSObject.h>

@interface TAVisitDetectionMetrics : NSObject

{
    double _distanceToPreviousVisit;
    double _residualDistanceToPreviousVisit;
    unsigned long long _nSigmaBetweenVisits;
}

@property (nonatomic, readonly) double distanceToPreviousVisit;
@property (nonatomic, readonly) double residualDistanceToPreviousVisit;
@property (nonatomic, readonly) unsigned long long nSigmaBetweenVisits;

- (id)initWithDistance:(double)arg1 residualDistance:(double)arg2 nSigma:(unsigned long long)arg3;

@end

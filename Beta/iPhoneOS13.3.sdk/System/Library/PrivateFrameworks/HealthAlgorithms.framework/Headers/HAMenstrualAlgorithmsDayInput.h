/*
 Image: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface HAMenstrualAlgorithmsDayInput : NSObject

{
    unsigned char _flow;
    _Bool _spotting;
    unsigned char _ovulationTestResult;
    unsigned int _julianDay;
    NSNumber *_flowUpdatedJulianDay;
}

@property (nonatomic) unsigned int julianDay;
@property (nonatomic) unsigned char flow;
@property (nonatomic) _Bool spotting;
@property (retain, nonatomic) NSNumber *flowUpdatedJulianDay;
@property (nonatomic) unsigned char ovulationTestResult;

@end

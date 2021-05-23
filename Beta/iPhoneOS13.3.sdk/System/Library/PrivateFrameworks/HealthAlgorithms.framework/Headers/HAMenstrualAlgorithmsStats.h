/*
 Image: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface HAMenstrualAlgorithmsStats : NSObject

{
    NSNumber *_medianCycleLength;
    NSNumber *_medianMenstruationLength;
    NSNumber *_lowerCycleLengthPercentile;
    NSNumber *_lowerMenstruationLengthPercentile;
    NSNumber *_upperCycleLengthPercentile;
    NSNumber *_upperMenstruationLengthPercentile;
    NSNumber *_numberOfCyclesFound;
    NSNumber *_julianDayOfFirstCycleStart;
    NSNumber *_julianDayOfLastCycleStart;
}

@property (retain, nonatomic) NSNumber *medianCycleLength;
@property (retain, nonatomic) NSNumber *medianMenstruationLength;
@property (retain, nonatomic) NSNumber *lowerCycleLengthPercentile;
@property (retain, nonatomic) NSNumber *lowerMenstruationLengthPercentile;
@property (retain, nonatomic) NSNumber *upperCycleLengthPercentile;
@property (retain, nonatomic) NSNumber *upperMenstruationLengthPercentile;
@property (retain, nonatomic) NSNumber *numberOfCyclesFound;
@property (retain, nonatomic) NSNumber *julianDayOfFirstCycleStart;
@property (retain, nonatomic) NSNumber *julianDayOfLastCycleStart;

@end

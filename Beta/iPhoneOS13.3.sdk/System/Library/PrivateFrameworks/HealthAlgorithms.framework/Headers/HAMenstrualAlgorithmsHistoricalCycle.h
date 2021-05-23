/*
 Image: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface HAMenstrualAlgorithmsHistoricalCycle : NSObject

{
    _Bool _isDeterminant;
    unsigned int _julianDayOfMenstruationStart;
    unsigned int _julianDayOfMenstruationEnd;
    NSNumber *_fertilityStartJulianDay;
    NSNumber *_fertilityEndJulianDay;
}

@property (retain, nonatomic) NSNumber *fertilityStartJulianDay;
@property (retain, nonatomic) NSNumber *fertilityEndJulianDay;
@property (nonatomic) unsigned int julianDayOfMenstruationStart;
@property (nonatomic) unsigned int julianDayOfMenstruationEnd;
@property (nonatomic) _Bool isDeterminant;

@end

/*
 Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

#import <Foundation/NSObject.h>

@interface TSFrequencyAnalysis : NSObject

{
    double _averagePeriod;
    double _averageFrequency;
    double _averageTimeError;
    double _lowestFrequency;
    double _highestFrequency;
}

@property (nonatomic) double averagePeriod;
@property (nonatomic) double averageFrequency;
@property (nonatomic) double averageTimeError;
@property (nonatomic) double lowestFrequency;
@property (nonatomic) double highestFrequency;

- (id)initWithTimeErrorValues:(id)arg1;

@end

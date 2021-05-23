/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SuddenChangeParameters : NSObject

{
    int margin;
    int minSamplesCount;
    int minMarginRequired;
    double percentage;
    double durationThresholdUpward;
    double durationThresholdDownward;
}

@property (nonatomic) int margin;
@property (nonatomic) int minSamplesCount;
@property (nonatomic) int minMarginRequired;
@property (nonatomic) double percentage;
@property (nonatomic) double durationThresholdUpward;
@property (nonatomic) double durationThresholdDownward;

@end

/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface HKBeatToBeatInstantaneousBPM : NSObject

{
    double _bpm;
    double _time;
}

@property (nonatomic, readonly) double bpm;
@property (nonatomic, readonly) double time;

- (id)initWithBPM:(double)arg1 time:(double)arg2;

@end

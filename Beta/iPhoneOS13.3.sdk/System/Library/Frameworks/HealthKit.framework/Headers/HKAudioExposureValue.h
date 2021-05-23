/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@interface HKAudioExposureValue : NSObject

{
    double _value;
    double _duration;
}

@property (nonatomic, readonly) double value;
@property (nonatomic, readonly) double duration;

- (id)initWithValue:(double)arg1 duration:(double)arg2;

@end

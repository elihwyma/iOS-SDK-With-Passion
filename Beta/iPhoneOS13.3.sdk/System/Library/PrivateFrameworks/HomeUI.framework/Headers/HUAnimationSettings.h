/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

#import <HomeUI/Swift-Protocol.h>

@class CAMediaTimingFunction, NSString;

@interface HUAnimationSettings : NSObject <Swift>

{
    float _repeatCount;
    double _duration;
    double _delay;
    double _speed;
    CAMediaTimingFunction *_timingFunction;
}

@property (nonatomic) double duration;
@property (nonatomic) double delay;
@property (nonatomic) double speed;
@property (nonatomic) float repeatCount;
@property (nonatomic, readonly) double durationWithSpeed;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)settingsWithDuration:(double)arg1;
+ (id)settingsWithDuration:(double)arg1 curve:(long long)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimation;
- (double)interpolatedProgressForProgress:(double)arg1;
- (double)interpolatedProgressForTime:(double)arg1;
- (id)settingsSpedUpByFactor:(double)arg1;

@end

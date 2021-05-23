/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CAMediaTimingFunction;

@interface NTKFloatCurveElement : NSObject

{
    double _floatValue;
    double _fraction;
    long long _curve;
    CAMediaTimingFunction *_timingFunction;
}

@property (nonatomic) double floatValue;
@property (nonatomic) double fraction;
@property (nonatomic) long long curve;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;

- (id)initWithFloatValue:(double)arg1 fraction:(double)arg2;

@end

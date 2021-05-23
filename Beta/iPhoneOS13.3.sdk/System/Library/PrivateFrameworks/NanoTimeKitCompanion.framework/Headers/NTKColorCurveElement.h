/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CAMediaTimingFunction, UIColor;

@interface NTKColorCurveElement : NSObject

{
    float _fraction;
    UIColor *_color;
    CAMediaTimingFunction *_timingFunction;
}

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) float fraction;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;

- (id)description;
- (id)initWithColor:(id)arg1 fraction:(float)arg2;

@end

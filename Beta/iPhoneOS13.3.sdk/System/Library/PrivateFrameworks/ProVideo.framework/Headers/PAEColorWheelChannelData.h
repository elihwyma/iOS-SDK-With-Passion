/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

#import <ProVideo/Swift-Protocol.h>

@interface PAEColorWheelChannelData : NSObject <Swift>

{
    struct PAEColorWheelData _value;
}

+ (id)channelDataWithRadius:(double)arg1 theta:(double)arg2 saturation:(double)arg3 light:(double)arg4;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)reset;
- (double)saturation;
- (double)radius;
- (void)setRadius:(double)arg1;
- (void)setSaturation:(double)arg1;
- (_Bool)isEqualTo:(id)arg1;
- (double)light;
- (void)setLight:(double)arg1;
- (id)interpolateBetween:(id)arg1 withWeight:(float)arg2;
- (_Bool)isAtDefaults;
- (id)initWithRadius:(double)arg1 theta:(double)arg2 saturation:(double)arg3 light:(double)arg4;
- (double)theta;
- (void)setTheta:(double)arg1;

@end

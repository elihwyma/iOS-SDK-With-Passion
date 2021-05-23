/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

#import <ProVideo/Swift-Protocol.h>

@interface PAEHueCurveChannelData : NSObject <Swift>

{
    void *_curve_private;
}

+ (id)channelDataWithCurve:(const hue_t_6ddfb2b5 *)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)reset;
- (id)initWithCurve:(const hue_t_6ddfb2b5 *)arg1;
- (_Bool)isEqualTo:(id)arg1;
- (double)evaluate:(double)arg1;
- (hue_t_6ddfb2b5 *)curveRef;
- (id)interpolateBetween:(id)arg1 withWeight:(float)arg2;
- (_Bool)isAtDefaults;

@end

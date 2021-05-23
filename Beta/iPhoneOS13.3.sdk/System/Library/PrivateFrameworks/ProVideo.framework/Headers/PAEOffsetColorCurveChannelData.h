/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

#import <ProVideo/Swift-Protocol.h>

@interface PAEOffsetColorCurveChannelData : NSObject <Swift>

{
    void *_curve_private;
}

+ (id)channelDataWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 curve:(const offsetcolor_t_d4b9b3c6 *)arg4;
+ (id)channelDataWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)reset;
- (double)red;
- (double)green;
- (double)blue;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
- (_Bool)isEqualTo:(id)arg1;
- (double)evaluate:(double)arg1;
- (offsetcolor_t_d4b9b3c6 *)curveRef;
- (id)interpolateBetween:(id)arg1 withWeight:(float)arg2;
- (_Bool)isAtDefaults;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 curve:(const offsetcolor_t_d4b9b3c6 *)arg4;
- (_Bool)conformFromColorCurve:(id)arg1;

@end

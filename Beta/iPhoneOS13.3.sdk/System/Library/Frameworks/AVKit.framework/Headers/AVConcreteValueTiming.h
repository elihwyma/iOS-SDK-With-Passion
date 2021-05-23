/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <AVKit/AVValueTiming.h>

__attribute__((visibility("hidden")))
@interface AVConcreteValueTiming : AVValueTiming

{
    double _value;
    double _timeStamp;
    double _rate;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)rate;
- (CDStruct_c3b9c2ee)_timing;
- (double)anchorValue;
- (double)anchorTimeStamp;
- (id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3;

@end

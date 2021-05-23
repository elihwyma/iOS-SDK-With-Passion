/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <AVKit/AVMutableValueTiming.h>

__attribute__((visibility("hidden")))
@interface AVConcreteMutableValueTiming : AVMutableValueTiming

{
    double _value;
    double _timeStamp;
    double _rate;
}

- (void)setRate:(double)arg1;
- (double)rate;
- (CDStruct_c3b9c2ee)_timing;
- (double)anchorValue;
- (double)anchorTimeStamp;
- (id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3;
- (void)setAnchorValue:(double)arg1;
- (void)setAnchorTimeStamp:(double)arg1;

@end

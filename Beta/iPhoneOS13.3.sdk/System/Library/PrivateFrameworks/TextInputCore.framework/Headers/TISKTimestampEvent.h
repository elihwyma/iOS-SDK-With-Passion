/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/TISKEvent.h>

@interface TISKTimestampEvent : TISKEvent

{
    double _timestamp;
}

@property (nonatomic) double timestamp;

- (double)touchDownTimestamp;
- (double)touchUpTimestamp;
- (_Bool)isMissingATouch;
- (id)init:(int)arg1 timestamp:(double)arg2 order:(long long)arg3;

@end

/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface MTMediaTimeTracker : NSObject

{
    float _playbackRate;
    NSDate *_date;
    long long _position;
}

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) long long position;
@property (nonatomic) float playbackRate;

- (void)updatePosition:(unsigned long long)arg1 playbackRate:(float)arg2;
- (id)initWithPosition:(unsigned long long)arg1 playbackRate:(float)arg2;
- (id)estimatedTimeAtPosition:(unsigned long long)arg1;

@end

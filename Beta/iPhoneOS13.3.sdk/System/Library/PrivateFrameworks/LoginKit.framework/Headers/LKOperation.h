/*
 Image: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
 */

#import <NSObject.h>

@class NSDate;

@interface LKOperation : NSObject

{
    NSDate *_startTime;
    NSDate *_endTime;
    double _duration;
}

@property (nonatomic, readonly) NSDate *startTime;
@property (nonatomic, readonly) NSDate *endTime;
@property (nonatomic, readonly) double duration;

- (id)init;
- (id)dictionary;
- (void)setDuration:(double)arg1;
- (void)setEndTime:(id)arg1;
- (void)setStartTime:(id)arg1;

@end

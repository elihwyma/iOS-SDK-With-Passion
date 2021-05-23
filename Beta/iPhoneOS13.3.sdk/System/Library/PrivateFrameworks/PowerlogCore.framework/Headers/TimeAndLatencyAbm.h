/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface TimeAndLatencyAbm : NSObject

{
    NSDate *_time;
    double _latency;
}

@property (retain) NSDate *time;
@property double latency;

- (id)initWithTime:(id)arg1 andLatency:(double)arg2;

@end

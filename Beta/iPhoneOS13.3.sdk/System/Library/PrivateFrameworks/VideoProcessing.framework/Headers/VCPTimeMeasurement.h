/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@interface VCPTimeMeasurement : NSObject

{
    struct mach_timebase_info _timebase;
    unsigned long long _start;
    _Bool _started;
    double _elapsedTimeSeconds;
}

@property (readonly) double elapsedTimeSeconds;

- (id)init;
- (int)stop;
- (int)start;
- (void)reset;

@end

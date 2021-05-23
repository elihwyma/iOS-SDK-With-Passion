/*
 Image: /System/Library/PrivateFrameworks/Trial.framework/Trial
 */

#import <Foundation/NSObject.h>

@interface TRIStopwatch : NSObject

{
    unsigned long long _start_time;
    struct mach_timebase_info _time_info;
}

+ (id)start;

- (id)init;
- (unsigned int)elapsed_ms;

@end

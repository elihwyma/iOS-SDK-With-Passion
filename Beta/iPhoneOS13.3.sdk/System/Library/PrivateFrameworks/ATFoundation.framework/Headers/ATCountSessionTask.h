/*
 Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

#import <AirTraffic/ATSessionTask.h>

@class NSObject;

@protocol OS_dispatch_source;

@interface ATCountSessionTask : ATSessionTask

{
    unsigned long long _maxCount;
    unsigned long long _count;
    NSObject<OS_dispatch_source> *_timer;
}

- (void)start;
- (id)initWithMaximumCount:(unsigned long long)arg1;

@end

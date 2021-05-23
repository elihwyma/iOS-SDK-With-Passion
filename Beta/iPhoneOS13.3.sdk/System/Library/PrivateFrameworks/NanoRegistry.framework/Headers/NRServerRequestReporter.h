/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NRServerRequestReporter : NSObject

{
    _Bool _submitted;
    NSString *_requestType;
    struct mach_timebase_info _timebaseInfo;
    double _startTime;
}

@property (retain, nonatomic) NSString *requestType;
@property (nonatomic) struct mach_timebase_info timebaseInfo;
@property (nonatomic) double startTime;
@property (nonatomic) _Bool submitted;

- (void)dealloc;
- (id)initWithRequestType:(id)arg1;
- (void)requestCompletedWithErrorCode:(unsigned int)arg1;
- (void)requestTimedOut;
- (double)abs_to_seconds:(unsigned long long)arg1;
- (unsigned long long)abs_to_nanos:(unsigned long long)arg1;
- (void)requestCompletedWithErrorCode:(unsigned int)arg1 andDuration:(double)arg2;

@end

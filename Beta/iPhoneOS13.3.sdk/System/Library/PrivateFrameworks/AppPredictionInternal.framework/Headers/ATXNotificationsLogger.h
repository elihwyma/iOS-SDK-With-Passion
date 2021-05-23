/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface ATXNotificationsLogger : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    double _standardSamplingRate;
}

+ (id)sharedInstance;

- (id)init;
- (void)submitWithProtobuf:(id)arg1 logtype:(long long)arg2;
- (double)samplingRateForLogType:(long long)arg1;
- (id)samplingRateFromParsecBag;

@end

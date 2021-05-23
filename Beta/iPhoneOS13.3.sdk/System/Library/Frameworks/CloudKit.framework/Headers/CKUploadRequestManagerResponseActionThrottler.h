/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface CKUploadRequestManagerResponseActionThrottler : NSObject

{
    double _throttlePeriod;
    long long _minimumThrottleCount;
    double _maximumThrottleTime;
    double _minimumRetryTime;
    NSSet *_actionsToThrottle;
    NSMutableDictionary *_responseActionToMetadata;
}

@property (retain, nonatomic) NSMutableDictionary *responseActionToMetadata;
@property (nonatomic) double throttlePeriod;
@property (nonatomic) long long minimumThrottleCount;
@property (nonatomic) double maximumThrottleTime;
@property (nonatomic) double minimumRetryTime;
@property (copy, nonatomic) NSSet *actionsToThrottle;

+ (double)currentTime;
+ (void)sleep:(double)arg1;

- (id)init;
- (void)gateResponseAction:(long long)arg1 isRetry:(_Bool)arg2;
- (void)gateResponseAction:(long long)arg1 isRetry:(_Bool)arg2 currentTime:(double)arg3;
- (double)throttleTimeForCount:(long long)arg1 isRetry:(_Bool)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

@interface ATXAmbientLightMonitor : NSObject

{
    struct __IOHIDEventSystemClient *_client;
    struct __IOHIDServiceClient *_sender;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_sampledAmbientLightValues;
    int _sampledAmbientLightValuesCurrentIndex;
    double _lastSampleTimestamp;
}

+ (id)sharedInstance;
+ (int)getAmbientLightTypeForXValue:(double)arg1 YValue:(double)arg2 ZValue:(double)arg3;

- (id)init;
- (void)dealloc;
- (void)start;
- (id)initWithoutMonitoring;
- (int)getCurrentAmbientLightType;
- (void)addSampleWithXValue:(id)arg1 YValue:(id)arg2 ZValue:(id)arg3;
- (id)getCurrentSampledValues;

@end

/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@interface _EAREndpointer : NSObject

{
    struct unique_ptr<quasar::HybridEndpointer, std::__1::default_delete<quasar::HybridEndpointer>> _endpointer;
}

+ (void)initialize;

- (id).cxx_construct;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 modelVersion:(id *)arg2;
- (id)initWithConfiguration:(id)arg1 delaysTrigger:(_Bool)arg2 modelVersion:(id *)arg3;
- (_Bool)requestSupportedWithSamplingRate:(unsigned long long)arg1;
- (void)updateEndpointerThresholdWithValue:(float)arg1;
- (void)updateEndpointerDelayedTriggerSwitch:(_Bool)arg1;
- (_Bool)didEndpointWithFeatures:(id)arg1 audioTimestamp:(double)arg2 featuresToLog:(id *)arg3 endpointPosterior:(float *)arg4 extraDelayMs:(int *)arg5;
- (id)defaultServerEndpointFeatures;
- (_Bool)acceptEagerResultWithFeatures:(id)arg1 featuresToLog:(id *)arg2;

@end

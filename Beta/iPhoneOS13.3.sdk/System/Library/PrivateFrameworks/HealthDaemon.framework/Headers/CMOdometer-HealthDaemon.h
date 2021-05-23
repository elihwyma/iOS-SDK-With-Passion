/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <CoreMotion/CMOdometer.h>

@class NSString;

@interface CMOdometer (HealthDaemon)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)hd_beginStreamingFromDatum:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)hd_stopStreaming;

@end

/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, NSUUID;

@protocol HDWorkoutEventCollectorDelegate;

@interface HDWorkoutEventCollector : NSObject

{
    id <HDWorkoutEventCollectorDelegate> _delegate;
    NSUUID *_sessionId;
    HDProfile *_profile;
}

@property (weak, readonly) id <HDWorkoutEventCollectorDelegate> delegate;
@property (readonly) NSUUID *sessionId;
@property (weak, readonly) HDProfile *profile;

+ (_Bool)isAvailableInCurrentHardware;

- (void)stop;
- (void)startWithSessionId:(id)arg1;
- (void)requestPendingEventsThroughDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithProfile:(id)arg1 delegate:(id)arg2;
- (_Bool)supportsWorkoutActivityType:(unsigned long long)arg1;

@end

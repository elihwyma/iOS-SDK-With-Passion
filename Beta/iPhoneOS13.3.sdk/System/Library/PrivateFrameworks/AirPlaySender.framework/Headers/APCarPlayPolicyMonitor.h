/*
 Image: /System/Library/PrivateFrameworks/AirPlaySender.framework/AirPlaySender
 */

#import <Foundation/NSObject.h>

@class CRVehiclePolicyMonitor, NSString;

@protocol APCarPlayPolicyMonitorDelegate, OS_dispatch_queue;

@interface APCarPlayPolicyMonitor : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    struct OpaqueFigCFWeakReferenceHolder *_weakEndpoint;
    struct OpaqueFigEndpoint *_observedEndpoint;
    CRVehiclePolicyMonitor *_monitor;
    id <APCarPlayPolicyMonitorDelegate> _delegate;
}

@property (nonatomic) id <APCarPlayPolicyMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithEndpoint:(struct OpaqueFigEndpoint *)arg1;
- (void)willEnableVehicleTrackedByMonitor:(id)arg1;
- (void)willDisableVehicleTrackedByMonitor:(id)arg1;
- (void)endpointAuthenticationSucceeded;

@end

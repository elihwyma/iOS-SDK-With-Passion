/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDMaintenanceWorkCoordinator, NSString;

@interface HDMaintenanceWorkCoordinatorBlockDispatcher : NSObject

{
    HDMaintenanceWorkCoordinator *_maintenanceWorkCoordinator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dispatchBlock:(CDUnknownBlockType)arg1 name:(id)arg2;
- (id)initWithMaintenanceWorkCoordinator:(id)arg1;

@end

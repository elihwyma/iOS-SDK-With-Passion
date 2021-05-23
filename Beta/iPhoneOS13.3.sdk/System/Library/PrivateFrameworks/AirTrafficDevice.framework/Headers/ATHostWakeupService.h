/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <NSObject.h>

@class ATEnvironmentMonitor, NSString;

@interface ATHostWakeupService : NSObject

{
    ATEnvironmentMonitor *_environmentMonitor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)stop;
- (void)start;
- (void)environmentMonitorDidChangePower:(id)arg1;
- (void)_wakeupHost:(id)arg1;
- (void)sendWakeupToAllHostsWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendWakeupToHostWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getWakeableHostsWithCompletion:(CDUnknownBlockType)arg1;

@end

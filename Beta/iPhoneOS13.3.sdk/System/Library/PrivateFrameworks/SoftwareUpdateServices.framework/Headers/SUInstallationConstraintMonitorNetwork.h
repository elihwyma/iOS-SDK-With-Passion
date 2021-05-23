/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <SoftwareUpdateServices/SUInstallationConstraintMonitorBase.h>

@class NSString, SUNetworkMonitor;

@interface SUInstallationConstraintMonitorNetwork : SUInstallationConstraintMonitorBase

{
    SUNetworkMonitor *_queue_networkMonitor;
    _Bool _queue_hasNetwork;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2;
- (unsigned long long)unsatisfiedConstraints;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2 networkMonitor:(id)arg3;
- (void)_queue_networkDidChange;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;

@end

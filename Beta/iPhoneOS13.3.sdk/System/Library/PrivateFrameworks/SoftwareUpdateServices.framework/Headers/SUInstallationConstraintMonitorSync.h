/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <SoftwareUpdateServices/SUInstallationConstraintMonitorBase.h>

@class ATConnection, NSString;

@interface SUInstallationConstraintMonitorSync : SUInstallationConstraintMonitorBase

{
    _Bool _queue_isSyncing;
    ATConnection *_queue_airTrafficConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)connectionWasInterrupted:(id)arg1;
- (void)connection:(id)arg1 updatedProgress:(id)arg2;
- (unsigned long long)unsatisfiedConstraints;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;
- (void)_queue_initilizaSyncState;
- (void)_queue_setSyncing:(_Bool)arg1;

@end

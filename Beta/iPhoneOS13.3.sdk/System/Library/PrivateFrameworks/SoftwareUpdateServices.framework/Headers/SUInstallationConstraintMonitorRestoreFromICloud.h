/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <SoftwareUpdateServices/SUInstallationConstraintMonitorBase.h>

@interface SUInstallationConstraintMonitorRestoreFromICloud : SUInstallationConstraintMonitorBase

{
    _Bool _queue_isRestoring;
    int _queue_restoreToken;
}

- (void)dealloc;
- (unsigned long long)unsatisfiedConstraints;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;
- (void)_queue_restoreStateChanged;

@end

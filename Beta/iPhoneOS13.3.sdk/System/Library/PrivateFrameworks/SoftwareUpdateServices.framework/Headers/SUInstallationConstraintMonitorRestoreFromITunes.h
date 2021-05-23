/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <SoftwareUpdateServices/SUInstallationConstraintMonitorBase.h>

@interface SUInstallationConstraintMonitorRestoreFromITunes : SUInstallationConstraintMonitorBase

{
    _Bool _queue_isRestoring;
    int _queue_startNotifyToken;
    int _queue_endNotifyToken;
}

- (void)dealloc;
- (unsigned long long)unsatisfiedConstraints;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;
- (void)_queue_beganRestoring;
- (void)_queue_endedRestoring;
- (void)_queue_setRestoring:(_Bool)arg1;

@end

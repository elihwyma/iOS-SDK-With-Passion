/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <SoftwareUpdateServices/SUInstallationConstraintMonitorBase.h>

@class TUCallCenter;

@interface SUInstallationConstraintMonitorPhoneCalls : SUInstallationConstraintMonitorBase

{
    TUCallCenter *_queue_callCenter;
    _Bool _queue_satisfied;
    _Bool _inSpringBoard;
}

- (void)dealloc;
- (unsigned long long)unsatisfiedConstraints;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2 callCenter:(id)arg3 inSpringBoard:(_Bool)arg4 onExistingPhoneCall:(_Bool)arg5;
- (void)_callStatusChanged;
- (void)_queue_noteOnExistingPhoneCallDidChange:(_Bool)arg1;

@end

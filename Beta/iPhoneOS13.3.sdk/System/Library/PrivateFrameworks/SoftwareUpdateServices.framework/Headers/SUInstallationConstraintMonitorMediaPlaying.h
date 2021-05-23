/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <SoftwareUpdateServices/SUInstallationConstraintMonitorBase.h>

@class NSObject;

@protocol OS_dispatch_queue;

@interface SUInstallationConstraintMonitorMediaPlaying : SUInstallationConstraintMonitorBase

{
    _Bool _queue_mediaPlaying;
    NSObject<OS_dispatch_queue> *_mediaRemoteQueue;
}

- (void)dealloc;
- (unsigned long long)unsatisfiedConstraints;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;
- (void)_handlePlaybackChangeNotification:(id)arg1;
- (void)_queue_pollSatisfied;

@end

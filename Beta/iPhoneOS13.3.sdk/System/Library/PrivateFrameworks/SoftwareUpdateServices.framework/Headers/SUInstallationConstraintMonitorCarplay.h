/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <SoftwareUpdateServices/SUInstallationConstraintMonitorBase.h>

@class CARSessionStatus, NSString;

@interface SUInstallationConstraintMonitorCarplay : SUInstallationConstraintMonitorBase

{
    _Bool _queue_CarplayConnected;
    CARSessionStatus *_queue_carSessionStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)sessionDidConnect:(id)arg1;
- (void)sessionDidDisconnect:(id)arg1;
- (unsigned long long)unsatisfiedConstraints;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;
- (void)_queue_carplayDidChange;

@end

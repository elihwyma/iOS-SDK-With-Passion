/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <Foundation/NSObject.h>

@class SUDownload;

@protocol OS_dispatch_queue, SUInstallationConstraintMonitorDelegate;

@interface SUInstallationConstraintMonitorBase : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    SUDownload *_download;
    unsigned long long _representedConstraints;
    id <SUInstallationConstraintMonitorDelegate> _queue_delegate;
}

@property (retain, nonatomic, readonly) SUDownload *download;
@property (nonatomic) id <SUInstallationConstraintMonitorDelegate> delegate;
@property (nonatomic, readonly) unsigned long long representedConstraints;
@property (nonatomic, readonly) unsigned long long unsatisfiedConstraints;

- (void)dealloc;
- (_Bool)isSatisfied;
- (id)initOnQueue:(id)arg1 withRepresentedInstallationConstraints:(unsigned long long)arg2 andDownload:(id)arg3;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;

@end

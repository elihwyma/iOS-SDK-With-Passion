/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <Foundation/NSObject.h>

#import <SoftwareUpdateServices/Swift-Protocol.h>

@class NSSet, NSString;

@protocol OS_dispatch_queue, SUInstallationConstraintMonitorDelegate;

@interface SUComposedInstallationConstraintMonitor : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_queue;
    NSSet *_queue_installationConstraintMonitors;
    id <SUInstallationConstraintMonitorDelegate> _queue_delegate;
    unsigned long long _queue_representedConstraints;
}

@property (retain, nonatomic, readonly) NSSet *constraintMonitors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) id <SUInstallationConstraintMonitorDelegate> delegate;
@property (nonatomic, readonly) unsigned long long representedConstraints;
@property (nonatomic, readonly) unsigned long long unsatisfiedConstraints;

- (void)dealloc;
- (id)_queue_delegate;
- (_Bool)isSatisfied;
- (void)_queue_setDelegate:(id)arg1;
- (unsigned long long)_queue_unsatisfiedConstraints;
- (void)installationConstraintMonitor:(id)arg1 constraintsDidChange:(unsigned long long)arg2;
- (void)_queue_noteInstallationConstraintMonitor:(id)arg1 constraintsDidChange:(unsigned long long)arg2;
- (id)initWithInternalQueue:(id)arg1 withInstallationConstraintMonitors:(id)arg2;
- (void)_queue_clearDelegate;
- (unsigned long long)_queue_representedConstraints;
- (void)_queue_invalidateChildConstraintMonitors;

@end

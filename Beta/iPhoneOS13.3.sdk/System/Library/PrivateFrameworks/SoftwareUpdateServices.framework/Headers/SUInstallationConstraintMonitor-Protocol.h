/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@protocol SUInstallationConstraintMonitorDelegate;

@protocol SUInstallationConstraintMonitor

@property (nonatomic) id <SUInstallationConstraintMonitorDelegate> delegate;
@property (nonatomic, readonly) unsigned long long representedConstraints;
@property (nonatomic, readonly) unsigned long long unsatisfiedConstraints;

- (unsigned short)isSatisfied;

@end

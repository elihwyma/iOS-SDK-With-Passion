/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, PETDistributionEventTracker, PETScalarEventTracker;

@interface SBMedusaConfigurationUsageMetric : NSObject

{
    long long _currentSpaceConfig;
    long long _currentFloatingConfig;
    _Bool _isPIPVideoActive;
    _Bool _isFloatingActive;
    double _floatingAppActivationTimestamp;
    double _pipVideoActivationTimestamp;
    PETScalarEventTracker *_medusaUsageTracker;
    PETDistributionEventTracker *_floatingAppSessionTimeTracker;
    PETDistributionEventTracker *_pipVideoSessionTimeTracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (_Bool)_floatingAppIsActiveForConfiguration:(long long)arg1;
- (void)_trackMedusaConfigChange;

@end

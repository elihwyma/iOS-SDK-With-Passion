/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <PowerlogAccounting/PLAccountingOwnerDependencyManager.h>

@class NSString;

@protocol PLAccountingDistributionManagerDelegate;

@interface PLAccountingDistributionManager : PLAccountingOwnerDependencyManager

{
    id <PLAccountingDistributionManagerDelegate> _delegate;
}

@property (weak) id <PLAccountingDistributionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)freeTimerInterval;

- (id)init;
- (id)ownerIDsForDependency:(id)arg1;
- (void)addEnergyEstimate:(id)arg1 withNow:(id)arg2;
- (void)reloadDependenciesNewerThanDate:(id)arg1;
- (id)dependencyIDsForOwner:(id)arg1;
- (void)didDistributeEnergyEstimate:(id)arg1;
- (void)didDistributeToChildEnergyEstimate:(id)arg1 fromParentEnergyEstimate:(id)arg2;
- (void)addDistributionEvent:(id)arg1;
- (void)closeLastDistributionEventForwardWithDistributionID:(id)arg1 withEndDate:(id)arg2;

@end

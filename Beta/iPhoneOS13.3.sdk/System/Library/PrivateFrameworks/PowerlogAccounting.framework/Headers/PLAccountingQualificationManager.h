/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <PowerlogAccounting/PLAccountingOwnerDependencyManager.h>

@protocol PLAccountingQualificationManagerDelegate;

@interface PLAccountingQualificationManager : PLAccountingOwnerDependencyManager

{
    id <PLAccountingQualificationManagerDelegate> _delegate;
}

@property (weak) id <PLAccountingQualificationManagerDelegate> delegate;

+ (double)freeTimerInterval;

- (id)ownerIDsForDependency:(id)arg1;
- (void)didQualifyEnergyEvent:(id)arg1 withRootNodeID:(id)arg2 withQualificationID:(id)arg3;
- (void)addEnergyEstimate:(id)arg1 withNow:(id)arg2;
- (void)addQualificationEvent:(id)arg1;
- (void)closeLastQualificationEventForwardWithQualificationID:(id)arg1 withEndDate:(id)arg2;
- (void)reloadDependenciesNewerThanDate:(id)arg1;
- (id)dependencyIDsForOwner:(id)arg1;

@end

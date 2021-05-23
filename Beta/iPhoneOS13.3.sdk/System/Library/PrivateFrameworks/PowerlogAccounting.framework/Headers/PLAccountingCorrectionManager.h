/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <PowerlogAccounting/PLAccountingOwnerDependencyManager.h>

@class NSMutableDictionary, NSString;

@protocol PLAccountingCorrectionManagerDelegate;

@interface PLAccountingCorrectionManager : PLAccountingOwnerDependencyManager

{
    id <PLAccountingCorrectionManagerDelegate> _delegate;
    NSMutableDictionary *_parentEntryIDToChildEnergyEstimates;
}

@property (retain, nonatomic) NSMutableDictionary *parentEntryIDToChildEnergyEstimates;
@property (weak) id <PLAccountingCorrectionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)freeTimerInterval;
+ (double)disableCorrection;

- (id)ownerIDsForDependency:(id)arg1;
- (void)reloadDependenciesNewerThanDate:(id)arg1;
- (id)dependencyIDsForOwner:(id)arg1;
- (id)childEnergyEstimatesForParentEntryID:(int)arg1;
- (void)didCorrectEnergyEstimate:(id)arg1;
- (void)addRootEnergyEstimate:(id)arg1 withNow:(id)arg2;
- (void)correctChildEnergyEstimate:(id)arg1 withParentEnergyEstimate:(id)arg2 withNow:(id)arg3;
- (void)addEnergyMeasurement:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <PowerlogAccounting/PLAccountingOwner.h>

@class PLAccountingEnergyEstimateEventEntry;

@protocol PLAccountingCorrectionOwnerManager;

@interface PLAccountingCorrectionOwner : PLAccountingOwner

{
    PLAccountingEnergyEstimateEventEntry *_rootEnergyEstimate;
}

@property (weak) id <PLAccountingCorrectionOwnerManager> manager;
@property (retain) PLAccountingEnergyEstimateEventEntry *rootEnergyEstimate;

- (void)run;
- (id)range;
- (id)ID;
- (id)activationDate;
- (void)correct;
- (id)initWithRootEnergyEstimate:(id)arg1;
- (void)setRunDate:(id)arg1;

@end

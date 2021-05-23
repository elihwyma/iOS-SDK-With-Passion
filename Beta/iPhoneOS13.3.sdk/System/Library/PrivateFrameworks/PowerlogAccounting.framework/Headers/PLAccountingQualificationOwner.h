/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <PowerlogAccounting/PLAccountingOwner.h>

@class PLAccountingEnergyEstimateEventEntry;

@protocol PLAccountingQualificationOwnerManager;

@interface PLAccountingQualificationOwner : PLAccountingOwner

{
    PLAccountingEnergyEstimateEventEntry *_energyEstimate;
}

@property (weak) id <PLAccountingQualificationOwnerManager> manager;
@property (retain) PLAccountingEnergyEstimateEventEntry *energyEstimate;

- (void)run;
- (id)range;
- (id)ID;
- (id)activationDate;
- (id)initWithEnergyEstimate:(id)arg1;
- (void)setRunDate:(id)arg1;
- (void)qualify;

@end

/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <PowerlogAccounting/PLAccountingDependency.h>

@class PLAccountingEnergyEventEntry;

@interface PLAccountingCorrectionDependency : PLAccountingDependency

{
    PLAccountingEnergyEventEntry *_energyEvent;
}

@property (retain) PLAccountingEnergyEventEntry *energyEvent;

- (id)range;
- (id)ID;
- (id)activationDate;
- (id)initWithEnergyEvent:(id)arg1;

@end

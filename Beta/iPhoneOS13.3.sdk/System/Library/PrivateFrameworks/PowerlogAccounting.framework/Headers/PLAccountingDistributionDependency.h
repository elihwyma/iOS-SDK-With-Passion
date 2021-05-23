/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <PowerlogAccounting/PLAccountingDependency.h>

@class PLAccountingDistributionEventEntry;

@interface PLAccountingDistributionDependency : PLAccountingDependency

{
    PLAccountingDistributionEventEntry *_distributionEvent;
}

@property (retain) PLAccountingDistributionEventEntry *distributionEvent;

- (id)range;
- (void)setRange:(id)arg1;
- (id)ID;
- (id)activationDate;
- (id)initWithDistributionEvent:(id)arg1;

@end

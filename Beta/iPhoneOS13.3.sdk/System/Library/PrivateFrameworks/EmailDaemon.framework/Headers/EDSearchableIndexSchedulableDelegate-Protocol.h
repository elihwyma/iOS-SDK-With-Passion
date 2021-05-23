/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <EmailDaemon/Swift-Protocol.h>

@protocol EDSearchableIndexSchedulableDelegate <Swift>

- (unsigned short)hasAvailableIndexingBudgetForSearchableIndexSchedulable: /* Error: Ran out of types for this method. */;
- (unsigned short)budgetedTimeRemainingForSearchableIndexSchedulable: /* Error: Ran out of types for this method. */;
- (unsigned short)budgetedItemCountRemainingForSearchableIndexSchedulable: /* Error: Ran out of types for this method. */;
- (unsigned short)searchableIndexSchedulable:didGenerateImportantPowerEventWithIdentifier:eventData: /* Error: Ran out of types for this method. */;
- (unsigned short)indexingDidSuspendForSearchableIndexSchedulable: /* Error: Ran out of types for this method. */;
- (unsigned short)indexingDidResumeForSearchableIndexSchedulable: /* Error: Ran out of types for this method. */;
- (unsigned short)didFinishIndexingBacklogForSearchableIndexSchedulable: /* Error: Ran out of types for this method. */;
- (unsigned short)searchableIndexSchedulable:didIndexForTime: /* Error: Ran out of types for this method. */;
- (unsigned short)searchableIndexSchedulable:didIndexItemCount: /* Error: Ran out of types for this method. */;
- (unsigned short)searchableIndexSchedulable:didGeneratePowerEventWithIdentifier:eventData: /* Error: Ran out of types for this method. */;

@end
